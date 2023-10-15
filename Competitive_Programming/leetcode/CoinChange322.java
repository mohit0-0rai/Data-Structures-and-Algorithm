class Solution {
    public int coinChange(int[] coins, int amount) {
      int n = coins.length;
      int[] dp = new int[amount+1];
      Arrays.fill(dp, Integer.MAX_VALUE-1);
      dp[0] = 0;
      for(int i = 0; i <= amount; i++) {
        for(int j = 0; j < coins.length; j++) {
          if(i + (long)coins[j] <= (long)amount) {
            dp[i+coins[j]] = Math.min(dp[i+coins[j]], dp[i] + 1);
          }
        }
      }
      return dp[amount] != Integer.MAX_VALUE-1 ? dp[amount] : -1;
    }
}
