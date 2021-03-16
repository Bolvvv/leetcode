import java.util.HashMap;

public class code70 {
    public static void main(String[] args) {
        System.out.println(new1(6));
    }

    //递归求解，超时
    public int climbStairs(int n) {
        return getWay(n, 0);
    }
    private static int getWay(int value, int way){
        if(value == 0) return way+1;
        if(value < 0) return 0;
        return getWay(value-1, way)+getWay(value-2, way);
    }

    //使用动态规划思想，备忘录算法
    private static HashMap<Integer, Integer>res = new HashMap<>();
    private static int new1(int n){
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(res.get(n) != null) return res.get(n);
        else {
            int value = new1(n-1)+new1(n-2);
            res.put(n, value);
            return value;
        }
    }

    //使用动态规划算法
    private static int new2(int n){
        if(n<1) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        int a = 1;
        int b = 2;
        int temp = 0;
        for(int i =3; i <=n ; i++){
            temp = a+b;
            a = b;
            b = temp;
        }
        return temp;
    }
}
