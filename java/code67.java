import java.math.BigInteger;

public class code67 {
    public static void main(String[] args) {
        System.out.println(new1("111111", "1010"));
    }
    public static String addBinary(String a, String b) {
        char[] max;
        char[] min;
        if(a.length() >= b.length()){
            max = a.toCharArray();
            min = b.toCharArray();
        }
        else {
            max = b.toCharArray();
            min = a.toCharArray();
        }
        boolean carry = false;
        int aMoreThanBLength = max.length - min.length;
        for(int i = max.length-1; i>= aMoreThanBLength; i--){
            if(min[i-aMoreThanBLength] == '1'){
                if(!carry){
                    if(max[i] == '1'){
                        max[i] = '0';
                        carry = true;
                    }else {
                        max[i] = '1';
                    }
                }
            }
        }
        if(carry){
            if(max.length == min.length){
                char[] result = new char[max.length+1];
                result[0] = 1;
                System.arraycopy(max, 0, result, 1, max.length);
                return String.valueOf(result);
            }
            else {
                if(max[0] != '1') {
                    max[0] = '1';
                    return String.valueOf(max);
                }
                else {
                    char[] result = new char[max.length+1];
                    max[0] = '0';
                    result[0] = 1;
                    System.arraycopy(max, 0, result, 1, max.length);
                    return String.valueOf(result);
                }
            }
        }
        else {
            return String.valueOf(max);
        }
    }

    //不是我写的，很厉害
    public static String new1(String a, String b){
        StringBuffer sb = new StringBuffer();
        int carry = 0, i = a.length()-1, j = b.length()-1;
        while(i >= 0 || j >= 0 || carry != 0){
            if(i >= 0) carry += a.charAt(i--)-'0';
            if(j >= 0) carry += b.charAt(j--)-'0';
            sb.append(carry%2);
            carry /= 2;
        }
        return sb.reverse().toString();
    }
}
