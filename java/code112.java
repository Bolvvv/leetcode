public class code112 {
    int val;
    code112 left;
    code112 right;
    code112(int x) { val = x; }

    public static void main(String[] args) {

    }
    public boolean hasPathSum(code112 root, int sum) {
        return recursion(root, 0, sum);
    }
    private boolean recursion(code112 root, int value, int sum){
        if(root == null) return false;
        else {
            int temp = value+root.val;
            if(root.left == null && root.right == null){
                if(temp == sum) return true;
                else return false;
            }
            else if(root.left != null && root.right != null){
                boolean j1 = recursion(root.left, temp, sum);
                boolean j2 = recursion(root.right, temp, sum);
                return j1||j2;
            }
            else if(root.left != null) return recursion(root.left, temp, sum);
            else return recursion(root.right, temp, sum);
        }
    }
}
