#include <stdio.h>
#include <math.h>

int main(){
  float n;
  printf("Inserisci il numero da controllare: ");
  scanf("%f", &n);
  printf("Il numero: %f\n", n);
  printf("La parte intera del numero: %f", floor(n));
if (floor(n) == n){
  printf("\nIl numero e' intero.");
} else  {
  printf("\nIl numero non e' intero.");
}
}
