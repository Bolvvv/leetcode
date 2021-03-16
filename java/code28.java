public class code28 {
    public static void main(String[] args) {

    }
    public static int strStr(String haystack, String needle) {
        if(haystack.length() < needle.length()) return -1;
        if(needle.length() == 0) return 0;
        for(int i = 0; i < haystack.length() - needle.length()+1; i++){
            if(haystack.charAt(i) == needle.charAt(0)){
                int length = 1;
                for(int m = 1; m<needle.length(); m++){
                    if(haystack.charAt(i+m) != needle.charAt(m)) break;
                    else length++;
                }
                if(length == needle.length()) return i;
            }
        }
        return -1;
    }
}
