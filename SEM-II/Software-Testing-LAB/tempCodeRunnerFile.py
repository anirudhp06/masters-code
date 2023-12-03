def ValidCombination(A, B, C): 
    dp = [[0 for i in range(B + 1)] for j in range(A + 1)] 
    for i in range(1, B + 1): 
        dp[1][i] = 1
    for i in range(2, A + 1): 
        for j in range(1, B + 1): 
            if (j <= C or j == 1 or j == i - C): 
                dp[i][j] = dp[i - 1][j] 
            else: 
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 998244353
    return sum(dp[A][-C:]) % 998244353

print(ValidCombination(3,3,2))