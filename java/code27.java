public class code27 {
    public static void main(String[] args) {
        int[] n = {1,2,3,4,4,5,6};
        System.out.println(removeElement(n, 4));
    }
    public static int removeElement(int[] nums, int val) {
        int f = 0;
        for(int i =0; i< nums.length; i++){
            if(nums[i] == val) f++;
            else {
                if(f > 0){
                    nums[i-f] = nums[i];
                    nums[i] = val;
                }
            }
        }
        return nums.length-f;
    }
}
