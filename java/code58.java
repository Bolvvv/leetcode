public class code58 {
    public static void main(String[] args) {
    }

    public int lengthOfLastWord(String s) {
        boolean isGetWord = false;
        int length = 0;
        for(int i = s.length() -1; i>= 0; i--){
            if(s.charAt(i) == ' ') {
                if(isGetWord) return length;
            }
            else {
                isGetWord = true;
                length++;
            }
        }
        return length;
    }
}
