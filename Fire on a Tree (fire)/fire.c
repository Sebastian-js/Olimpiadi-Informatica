// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// constraints
#define MAXN 200000

// input data
int N;
int A[MAXN];
int B[MAXN];

int main() {
  // uncomment the following lines if you want to read/write from files
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  for (int i = 0; i < N - 1; i++) {
    assert(2 == scanf("%d%d", &A[i], &B[i]));
  }

  // insert your code here

  printf("%d\n", 42);  // print the result

  return 0;
}