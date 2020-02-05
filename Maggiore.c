#include <stdio.h>

int main() {
   double a, b, c;
   printf("Introduci il primo valore: ");
   scanf("%lf", &a);
   printf("Introduci il secondo valore: ");
   scanf("%lf", &b);
   printf("Introduci il terzo valore: ");
   scanf("%lf", &c);
   if (a > b && a > c) /* verifica se a e' > di entrambi */
   printf("%f\n", a);
   else if (b > c)     /* a non e' il piu' grande, o e' b o e' c */
   printf("%f\n", b);
   else                /* non puo' che essere c */
   printf("%f\n", c);

   return 0; }
