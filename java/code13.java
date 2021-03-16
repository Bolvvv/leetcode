public class code13 {
    public static void main(String[] args) {
        String s = "IV";
        System.out.println(new1(s));
    }

    //自己做的
    public static int romanToInt(String s) {
        char [] c = s.toCharArray();
        int sum = 0;
        for (int i = 0; i < c.length; i++){
            if(c[i] == 'I'){
                if(i == c.length-1) sum += 1;
                else {
                    if(c[i+1] == 'V' || c[i+1] == 'X') sum -= 1;
                    else sum += 1;
                }
            }else if(c[i] == 'V'){
                sum += 5;
            }else if(c[i] == 'X'){
                if(i == c.length-1) sum += 10;
                else {
                    if(c[i+1] == 'L' || c[i+1] == 'C') sum -= 10;
                    else sum += 10;
                }
            }else if(c[i] == 'L'){
                sum += 50;
            }else if(c[i] == 'C'){
                if(i == c.length-1) sum += 100;
                else {
                    if(c[i+1] == 'D' || c[i+1] == 'M') sum -= 100;
                    else sum += 100;
                }
            }else if(c[i] == 'D'){
                sum += 500;
            }else if(c[i] == 'M'){
                sum += 1000;
            }
        }
        return sum;
    }

    //更新版
    public static int new1 (String s){
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            switch (s.charAt(i)){
                case 'I': sum += 1;break;
                case 'V': sum += 5;break;
                case 'X': sum += 10;break;
                case 'L': sum += 50;break;
                case 'C': sum += 100;break;
                case 'D': sum += 500;break;
                case 'M': sum += 1000;break;
            }
            if(i != 0){
                if((s.charAt(i) == 'V'|| s.charAt(i) == 'X') && s.charAt(i -1) == 'I') sum -= 2;
                else if((s.charAt(i) == 'L' || s.charAt(i) == 'C') && s.charAt(i -1) == 'X') sum -= 20;
                else if((s.charAt(i) == 'D' || s.charAt(i) == 'M') && s.charAt(i -1) == 'C') sum -= 200;
            }
        }
        return sum;
    }
}
