#include<stdio.h>

int main(){
  int i,j,n;
  printf("Inserisci il lato del quadrato: ");
  scanf("%d", &n);

  if(n<=0)
    printf("Errore! Il lato deve essere maggiore di zero\n");
  else{
    i=0;

    while(i<n){
      j=0;

      while(j<n){
        if(j<=i)
          printf("*");
        else
          printf("+");
        ++j;
      }
      printf("\n");

      ++i;
    }
  }
  exit(0);
}
