#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int dynamicCoinChange(int coins[], int n, int amount) {
    printf("\nDynamic Programming Approach:\n\n");
    int dp[amount + 1];
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        dp[i] = amount + 1; // Initialize to a large value
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }

    // Reconstruct the solution
    int result = dp[amount];
    for (int i = 1; i <= amount; i++) {
        printf("Minimum coins required for amount %d: %d\n", i, dp[i]);
    }

    return result;
}

int main() {
    int coins[] = {25, 10, 5, 1}; // Example denominations
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount = 67;

    int minCoins = dynamicCoinChange(coins, n, amount);
    printf("\nMinimum coins required: %d\n", minCoins);

    return 0;
}