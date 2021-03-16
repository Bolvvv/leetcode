public class code38 {
    public static void main(String[] args) {
        System.out.println(countAndSay(4));
    }
    public static String countAndSay(int n) {
        return test("1", n);
    }

    public static String test(String s, int n){
        if(n == 1) return s;
        StringBuilder result = new StringBuilder();
        int m = 1;
        if(s.length() == 1) return test("11", --n);
        for(int i =0; i<s.length(); i++){
            if(s.charAt(i+1) == s.charAt(i)){
                m++;
                //处理末尾情况
                if(i == s.length()-2) {
                    result.append(m+String.valueOf(s.charAt(i)));
                    return test(result.toString(), --n);
                }
            }
            else {
                result.append(m+String.valueOf(s.charAt(i)));
                m = 1;
                if(i == s.length()-2){
                    result.append(1+String.valueOf(s.charAt(i+1)));
                    return test(result.toString(), --n);
                }
            }
        }
        return test(result.toString(), --n);
    }
}
