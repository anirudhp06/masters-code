def levenshtein_distance(word1, word2):
    m, n = len(word1), len(word2)
    dp = [[0] * (n + 1) for _ in range(m + 1)]

    for i in range(m + 1):
        for j in range(n + 1):
            if i == 0:
                dp[i][j] = j
            elif j == 0:
                dp[i][j] = i
            elif word1[i - 1] == word2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1]
            else:
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1])

    return dp[m][n]

def solve(N, words, S):
    suggestions = []
    for word in words:
        distance = levenshtein_distance(word, S)
        suggestions.append((distance, word))

    suggestions.sort()

    return suggestions[0][1]

# Sample input
N = 2
words = ['aa','b']
S = 'ba'

result = solve(N, words, S)
print(result)