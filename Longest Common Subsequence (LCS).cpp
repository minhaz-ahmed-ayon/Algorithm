#include <iostream>
#include<cstring>
using namespace std;

void lcs(char *x, char *y, int m, int n) {
  int LCS_table[m + 1][n + 1];

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (x[i - 1] == y[j - 1])
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      else
        LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
    }
  }

  int index = LCS_table[m][n];
  char lcs[index + 1];
  lcs[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (x[i - 1] == y[j - 1]) {
      lcs[index - 1] = x[i - 1];
      i--;
      j--;
      index--;
    }

    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }

  cout << "X : " << x << "\nY : " << y << "\nLCS: " << lcs << "\n";
}

int main() {
  char x[] = "ACADB";
  char y[] = "CBDA";
  int m = strlen(x);
  int n = strlen(y);

  lcs(x, y, m, n);
}
