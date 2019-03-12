public class code26 {
    public static void main(String[] args) {
        int [] n = {1,1,2};
        System.out.println(removeDuplicates(n));
    }
    public static int removeDuplicates(int[] nums) {
        int result = nums.length;
        if(nums.length == 0) return 0;
        for(int i = 0; i < nums.length; i++){
            for(int j = i+1; j < result; j++){
                if(nums[j] == nums[i]) {
                    for(int m = j; m < result-1; m++){
                        nums[m] = nums[m+1];
                    }
                    result--;
                    j--;
                }
            }
        }
        return result;
    }
}
