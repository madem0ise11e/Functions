#include<stdio.h>
#include<stdlib.h>

int main(void){
  int i, j, n;
  printf("Inserisci il numero: ");
  scanf("%d", &n);
  if(n<=0)
    printf("Errore! Il lato deve essere maggiore di zero.\n");
  else {
    i = 0;
    while(i<n){
      j=0;
      while(j<n){
        if(i==0 || i == (n-1))
          printf("*");
        else {
          if(j==0 || j == (n-1) )
            printf("*");
          else
            printf(" ");
        }
        ++j;
      }
      printf("\n");
      ++i;
    }
  }
  exit(0);
}
