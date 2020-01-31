#include <stdio.h>

int main(){
  int num;
  printf("Inserisci il numero da controllare:" );
  scanf("%d", &num);
  if(num%2==0){
    printf("Il numero è pari");
  } else {
    printf("Il numero è dispari");
   }
}
