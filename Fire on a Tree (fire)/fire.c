// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// constraints
#define MAXN 200000

// input data
int N;
int A[MAXN];
int B[MAXN];

int funzionechemirestituiscequellomaggiore(int kurva, int max, int* posmax, int j){
  if(kurva>max) {
    *posmax = j;
    return kurva;
  }
  return max;
}
int main() {
  // uncomment the following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  int a, b, i, j, max=0;
  // freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  int connessioni[N][N];

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      connessioni[i][j] = 0;
    }
  }
  int occorrenze[N];
  for (i = 0; i < N - 1; i++) {
    scanf("%d", &a);
    scanf("%d", &b);
    connessioni[b][a]=1;
  }

  int sum=0;
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      sum+=connessioni[j][i];
    }
    occorrenze[i]=sum;
    sum=0;
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ", connessioni[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<N; i++){
    printf("%d ", occorrenze[i]+1);
  }

  /*

  int posmax = 0;
   for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(connessioni[i][j]==1){
        max=funzionechemirestituiscequellomaggiore(occorrenze[j],max, &posmax, j);
      }
    }

  }

  printf("\n%d %d", max, posmax);
  // printf("%d\n", 42); print the result
  
  */
  return 0;
}