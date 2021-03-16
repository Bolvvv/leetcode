import java.lang.reflect.Array;

public class code88 {
    public static void main(String[] args) {
        int[] nums1 = {1,2,3,4,9,10,0,0,0,0};
        int[] nums2 = {1,4,6,7};
        merge(nums1, 6, nums2, 4);
        for(int i : nums1) System.out.println(i);
    }
    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        System.arraycopy(nums2, 0, nums1, m, n);
        for(int i = 0; i < nums1.length; i++){
            for(int j = 0; j < nums1.length - 1 - i; j++){
                if(nums1[j+1] < nums1[j]){
                    int temp = nums1[j+1];
                    nums1[j+1] = nums1[j];
                    nums1[j] = temp;
                }
            }
        }
    }
}
