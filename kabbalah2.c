/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>

// constraints
#define MAXN 1001
#define MAXM 1001

// input data
int N, M, i, j;
char mat[MAXN][MAXM];

int main() {
  //  uncomment the following lines if you want to read/write from files
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

  assert(2 == scanf("%d %d", &N, &M));
  for (i = 0; i < N; i++) {
    assert(1 == scanf("%s", mat[i]));
  }

  // insert your code here

  printf("%d\n", 4242);  // change 4242 with actual answer
  return 0;
}
