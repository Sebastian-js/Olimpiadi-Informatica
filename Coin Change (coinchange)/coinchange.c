/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <assert.h>
#include <stdio.h>

// input data
long long V[15];
int MONETE_RISULTATO[15];
int totale=0, i;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  for (i = 0; i < 15; i++)
    assert(1 == scanf("%lld", &V[i]));

  int sol[15] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000};
  
  totale*=100;
  
  for(i=0;i<15;i++){
    totale+=V[i]*sol[i];
  }
  
  for(i=0; totale>0; i++){
    MONETE_RISULTATO[14-i]=totale/sol[14-i];
    totale-=MONETE_RISULTATO[14-i]*sol[14-i];
  }
  
  for(i=0; i<15; i++){
    printf("%d ", MONETE_RISULTATO[i]);
  }
  return 0;
}