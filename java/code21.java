import java.util.ArrayList;
import java.util.List;

public class code21 {
    private int val;
    private code21 next;
    private code21(int x) { val = x; }

    public static void main(String[] args) {
        code21 test1 = new code21(2);
        code21 test2 = new code21(1);
        System.out.println(mergeTwoLists(test1, test2).val);
    }

    public static code21 mergeTwoLists(code21 l1, code21 l2){
        if(l1 == null && l2 == null) return null;
        code21 m1;//记录起始位置
        code21 m2;//记录起始位置
        int length = 0;
        if(l1 == null && l2 == null) return null;
        if(l1 != null){
            m1 = l1;
            m2 = l1;
            while (l1.next != null){
                l1 = l1.next;
            }
            l1.next = l2;//链条合并完成
        }
        else {
            m1 = l2;
            m2 = l2;
            while (l2.next != null){
                l2 = l2.next;
            }
            l2.next = l1;
        }
        length++;
        while (m1.next != null){
            m1 = m1.next;
            length++;
        }
        for(int i = 0; i< length; i++){
            code21 m = m2;
            for(int j =0; j < length-i-1; j++){
                if(m.val > m.next.val){
                    int t = m.val;
                    m.val = m.next.val;
                    m.next.val = t;
                    m = m.next;
                }
                else m = m.next;
            }
        }
        return m2;
    }
}
