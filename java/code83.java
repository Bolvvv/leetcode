import java.util.HashMap;

public class code83 {
    int val;
    code83 next;
    code83(int x) { val = x; }
    public static void main(String[] args) {
        code83 c1 = new code83(1);
        code83 c2 = new code83(1);
        code83 c3 = new code83(1);
        code83 c4 = new code83(1);
//        code83 c5 = new code83(3);
        c1.next = c2;
        c2.next = c3;
        c3.next = c4;
//        c4.next = c5;
        deleteDuplicates(c1);
    }
    public static code83 deleteDuplicates(code83 head) {
        if(head == null) return null;
        int length = 1;
        code83 h1 = head;//记录头部
        code83 h2 = head;
        HashMap<Integer, Integer> rec = new HashMap<>();
        rec.put(h1.val, 1);
        ///获取长度
        while (head.next != null){
            head = head.next;
            length++;
        }

        for(int i =0; i<length; i++){
            if(h1.next == null) break;
            if(rec.get(h1.next.val)!=null) {
                h1.next = h1.next.next;
            }
            else{
                rec.put(h1.next.val, 1);
                h1 = h1.next;
            }
        }
        return h2;
    }
}
