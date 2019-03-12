
public class code7 {
    public static void main(String [] args){
        code7 code7 = new code7();
        System.out.println(code7.reverse(1534236469));
    }
    private int reverse(int x){
        String transCode = String.valueOf(x);
        if(!transCode.substring(0,1).equals("-")){
            char [] chars = transCode.toCharArray();
            char [] temp = transCode.toCharArray();
            for(int i = 0, j = transCode.length()-1; i<transCode.length(); i++,j--){
                chars[i] = temp[j];
            }
            try{
                return Integer.parseInt(String.valueOf(chars));
            }catch (Exception e){
                return 0;
            }
        }
        else {
            char [] chars = transCode.substring(1).toCharArray();
            char [] temp = transCode.substring(1).toCharArray();
            for(int i = 0, j = transCode.length()-2; i<transCode.length()-1; i++,j--){
                chars[i] = temp[j];
            }
            try{
                return Integer.parseInt("-"+String.valueOf(chars));
            }
            catch (Exception e){
                return 0;
            }
        }
    }
}
