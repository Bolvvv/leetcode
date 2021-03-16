public class code9 {
    public static void main(String [] args){
        int x = 1131;
        if(isPalindrome(x)) System.out.println("是回文");

    }
    private static boolean isPalindrome(int x) {
        if(x < 0) return false;
        else {
            char [] c = String.valueOf(x).toCharArray();
            if(c.length%2 == 0){
                for(int i = 0; i < c.length/2; i++){
                    if(c[i] != c[c.length-1-i]){
                        return false;
                    }
                }
                return true;
            }
            else {
                for(int i = 0; i < (c.length-1)/2; i++){
                    if(c[i] != c[c.length-1-i]){
                        return false;
                    }
                }
                return true;
            }
        }
    }
}
