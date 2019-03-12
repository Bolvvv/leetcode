public class code14 {
    public static void main(String[] args) {
        String[] strings = {"a"};
        System.out.println(longestCommonPrefix(strings));

    }
    public static String longestCommonPrefix(String[] strs) {
        //异常处理
        if(strs.length == 0) return "";
        int minLength = strs[0].length();
        String minStr = strs[0];
        String result = "";
        boolean flag = true;
        for(String s : strs){
            if(s.length() < minLength) {
                minLength = s.length();
                minStr = s;
            }
        }
        if(minLength == 0) return "";

        for(int i = 1; i <= minLength && flag; i++){
            for(int j = 0; j < strs.length; j ++){
                if(!strs[j].substring(0, i).equals(minStr.substring(0, i))) {
                    flag = false;
                    break;
                }
            }
            if(flag){
                result = minStr.substring(0, i);
            }
        }
        return result;
    }
}
