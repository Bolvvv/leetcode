import java.util.ArrayList;

public class code66 {
    public static void main(String[] args) {
        int[] d = {9,9,9,9};
        new1(d);
    }
    public static int[] plusOne(int[] digits) {
        boolean carry = false;
        digits[digits.length-1] = digits[digits.length-1] + 1;
        if(digits[digits.length-1] == 10) {
            digits[digits.length-1] = 0;
            carry = true;
        }
        for(int i = digits.length - 2; i>= 0; i--){
            if(carry) {
                digits[i] = digits[i] + 1;
                carry = false;
                if(digits[i] == 10) {
                    digits[i] = 0;
                    carry = true;
                }
            }
            else return digits;
        }
        if(carry){
            int[] newArray = new int[digits.length+1];
            newArray[0] = 1;
//            for(int i = 1; i< newArray.length; i++){
//                newArray[i] = digits[i-1];
//            }
            System.arraycopy(digits, 0,newArray, 1, digits.length);
            return newArray;
        }
        return digits;
    }

    public static int[] new1(int[] digits){
        int len = digits.length;
        for(int i=len-1;i>=0;i--){
            if(digits[i]+1<10){
                digits[i]++;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        int[] res=new int[len+1];
        res[0]=1;//这种情况只出现在原来的数为9999，这样初始化之后，后面的值都为0
        return res;
    }
}
