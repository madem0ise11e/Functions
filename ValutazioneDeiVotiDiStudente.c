#include <stdio.h>



int main(){
  
  int a;
  printf("Inserisci la media dello studente: ");
  scanf("%d", &a);
  if(a>= 90 && a<=100){
    printf("4");
  }
  if(a>=80 && a<=89 ){
    printf("3");
  }
  if(a>=70 && a<=79 ){
    printf("2");
  }
  if(a>=60 && a<=69 ){
    printf("1");
  }
  if(a<60 ){
    printf("0");
  }
}
