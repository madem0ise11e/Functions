#include<stdio.h>
#define MAXIMUM 100
int main() {
  int i, n, v[MAXIMUM];
  printf("Quanti numeri vuoi inserire? (max %d) ", MAXIMUM);
  scanf("%d", &n);
  if (n>0 && n<=MAXIMUM) {
    for (i=0; i<n; i++) {
      printf("Introduci il %do valore: ", i+1);
      scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++)
      if (v[i] % 2 == 0)
        printf("%d", v[i]);
    for (i = n-1; i >= 0; i--)
      if (v[i] % 2 == 1)
        printf("%d", v[i]);
   } else
      printf("Il valore inserito (%d) non e' corretto\n", n);

    return 0;
}
