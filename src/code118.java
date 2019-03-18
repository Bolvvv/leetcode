import java.util.ArrayList;
import java.util.List;

public class code118 {
    public static void main(String[] args) {
        List<List<Integer>> test = generate(4);
        System.out.printf("111");
    }

    public static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<>();
        if(numRows == 0) return result;
        List<Integer> level1 = new ArrayList<>();
        level1.add(1);
        result.add(level1);
        for (int i = 0; i < numRows-1; i++){
            List<Integer> temp = new ArrayList<>();
            for(int j = 0; j < result.get(i).size()+1; j++){
                if(j == 0) temp.add(1);
                else if(j == result.get(i).size()) temp.add(1);
                else {
                    temp.add(result.get(i).get(j-1)+result.get(i).get(j));
                }
            }
            result.add(temp);
        }
        return result;
    }
}
