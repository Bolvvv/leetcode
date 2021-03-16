import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class code119 {
    public static void main(String[] args) {
        List<Integer> test = getRow(4);
        for(Integer i : test) System.out.println(i);
    }
    public static List<Integer> getRow(int rowIndex) {
        rowIndex = rowIndex + 1;
        Integer [] result = new Integer[rowIndex];
        if(rowIndex == 0) return Arrays.asList(result);
        result[0] = 1;
        for(int i = 0; i<rowIndex-1; i++){
            result[rowIndex-1] = 1;
            for(int j = 1; j<i+2; j++){
                if(j == i+1) result[j] = 1;
                else {
                    result[0] = result[j];
                    result[j] = result[0]+ result[rowIndex-1];
                    result[rowIndex-1] = result[0];
                }
            }
        }
        return Arrays.asList(result);
    }
}
