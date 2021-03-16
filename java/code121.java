public class code121 {

    //动态规划
    public int maxProfit(int[] prices) {
        if(prices.length <= 1) return 0;
        int maxProfile = 0;
        int minPrice = Integer.MAX_VALUE;
        for(int i = 1; i < prices.length; i++){
            if(minPrice > prices[i-1]) minPrice = prices[i-1];
            int temp = prices[i] - minPrice;
            maxProfile = maxProfile > temp?maxProfile:temp;
        }
        return maxProfile;
    }
}
