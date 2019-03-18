public class code111 {
    int val;
    code111 left;
    code111 right;
    code111(int x) { val = x; }
    public static void main(String[] args) {
        code111 a = new code111(1);
        code111 b = new code111(2);
        a.left = b;
        minDepth(a);
    }
    public static int minDepth(code111 root) {
        if(root == null) return 0;
        else return recursion(root.left, root.right, 0);
    }

    private static int recursion(code111 left, code111 right, int level){
        level++;
        if(left == null && right == null) return level;
        else {
            if(left != null && right != null){
                int l = recursion(left.left, left.right, level);
                int r = recursion(right.left, right.right, level);
                return l<r?l:r;
            }
            else if(left != null) return recursion(left.left, left.right, level);
            else return recursion(right.left, right.right, level);
        }
    }
}
