import java.util.Stack;

public class code20 {
    public static void main(String[] args) {
        String s = "()[]{}";
        System.out.println(isValid(s));
    }

    //第一种方法,未通过
    private static boolean isValid(String s) {
        if(s.length() == 0) return true;
        if(s.length()%2 != 0) return false;
        for(int i = 0; i < s.length()/2; i++){
            switch (s.charAt(i)){
                case('(') : if(s.charAt(s.length()-1-i) == ')' || s.charAt(i+1) == ')') return false;break;
                case('{') : if(s.charAt(s.length()-1-i) == '}' || s.charAt(i+1) == '}') return false;break;
                case('[') : if(s.charAt(s.length()-1-i) == ']' || s.charAt(i+1) == '}') return false;break;
                default:return false;
            }
        }
        return true;
    }

    //第二种方法,未通过
    private static boolean new1(String s){
        if(s.length()%2 != 0) return false;
        while (s.length() != 0){
            switch (s.charAt(0)){
                case('(') :
                    if(s.charAt(s.length()-1) == ')'){
                        s = s.substring(1, s.length()-1);
                    }
                    else if(s.charAt(1) == ')'){
                        s = s.substring(2);
                    }
                    else return false;
                    break;
                case('{') :
                    if(s.charAt(s.length()-1) == '}'){
                        s = s.substring(1, s.length()-1);
                    }
                    else if(s.charAt(1) == '}'){
                        s = s.substring(2);
                    }
                    else return false;
                    break;
                case('[') :
                    if(s.charAt(s.length()-1) == ']'){
                        s = s.substring(1, s.length()-1);
                    }
                    else if(s.charAt(1) == ']'){
                        s = s.substring(2);
                    }
                    else return false;
                    break;
                default:return false;
            }
        }
        return true;
    }

    public static boolean new2(String s){
        if(s.length()%2 != 0) return false;
        if(s.length() == 0) return true;
        Stack<Character> stack = new Stack<>();
        for(int i =0; i < s.length(); i++){
            switch (s.charAt(i)){
                case ('('):
                    if(i == s.length()-1) return false;
                    else {
                        if(s.charAt(i+1) == '}' || s.charAt(i+1) == ']') return false;
                        else stack.push(s.charAt(i));
                    }
                    break;
                case ('{'):
                    if(i == s.length()-1) return false;
                    else {
                        if(s.charAt(i+1) == ')' || s.charAt(i+1) == ']') return false;
                        else stack.push(s.charAt(i));
                    }
                    break;
                case ('['):
                    if(i == s.length()-1) return false;
                    else {
                        if(s.charAt(i+1) == ')' || s.charAt(i+1) == '}') return false;
                        else stack.push(s.charAt(i));
                    }
                    break;
                case (']'):
                    if(stack.empty()) return false;
                    char s1 = stack.pop();
                    if(s1 != '[') return false;
                    break;
                case ('}'):
                    if(stack.empty()) return false;
                    char s2 = stack.pop();
                    if(s2 != '{') return false;
                    break;
                case (')'):
                    if(stack.empty()) return false;
                    char s3 = stack.pop();
                    if(s3 != '(') return false;
                    break;
            }
        }
        return true;
    }
}
