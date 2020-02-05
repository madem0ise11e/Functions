#include <stdio.h>

int main(){
  int i,j,n,c;

  printf("Inserisci il numero: ");
  scanf("%d", &n);

  if(n<=0)
    printf("Errore! Il lato deve essere maggiore di zero");
  else {
    i = 0;
    c = 1;

    while(i<n){
      j=0;

      while(j<=i){
        printf("%d ", c);

        ++j;
        ++c;
      }
      printf("\n");

      ++i;
    }
  }
  exit(0);
}
