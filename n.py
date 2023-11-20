def num_ways_to_complete_game(N, P, X):

  dp = [[[0 for i in range(N + 1)] for j in range(N + 1)] for k in range(X + 1)]

  # Initialize the state.
  for i in range(N + 1):
    for j in range(N + 1):
      for k in range(N + 1):
        if i == 0:
          dp[i][j][k] = 1 if j == k else 0

  # Calculate the state for i > 0.
  for i in range(1, X + 1):
    for j in range(1, N + 1):
      for k in range(1, N + 1):
        for k_next in range(1, N + 1):
          if (j % k_next == 0 or k_next % j == 0):
            dp[i][j][k] += dp[i - 1][k_next][k_next]

  # Return the number of possible ways to complete the game.
  return dp[X][P][P]


if __name__ == '__main__':
  N = int(input())
  P = int(input())
  X = int(input())

  num_ways = num_ways_to_complete_game(N, P, X)

  print(num_ways)
