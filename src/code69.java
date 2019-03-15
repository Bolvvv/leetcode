public class code69 {
    public static void main(String[] args) {
        mySqrt(2147483647);
    }
    public static int mySqrt(int x) {
        int length = 0;
        int m = x;
        while (x != 0){
            length++;
            x = x/10;
        }
        length = length%2==0?length/2:(length+1)/2;
        StringBuilder begin = new StringBuilder();
        StringBuilder end = new StringBuilder();
        begin.append(1);
        end.append(9);
        for(int i = 1; i < length; i++){
            begin.append(0);
            end.append(9);
        }
        for(int i = Integer.parseInt(begin.toString()); i<=Integer.parseInt(end.toString()); i++){
            long s = (long)i*i;
            if(s >= m){
                return s == m ? i:i-1;
            }
        }
        return 0;
    }
}
