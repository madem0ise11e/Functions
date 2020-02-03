#include<stdio.h>
#include<math.h>

int main(){
  float a,b,c;
  double x1, x2, delta;

  printf("Inserisci i valori di a, b e c rispettivamente: ");
  scanf("%f%f%f", &a,&b,&c);

  if(a==0){
    if((b==0) && (c==0))
      printf("\nequazione indeterminata");
    else if (b==0)
      printf("\nequazione impossibile");
    else {
      printf("\nl'equazione e' di primo grado\n");
      x1= -c/b;
      printf("\n x= %lf", x1);
    }
  }
    else {
      delta = b*b-4*a*c;
      printf("\nil determinante e' %5.3lf ", delta);
      if(delta>0){
        x1= (-b-sqrt(delta))/(2*a);
        x2= (-b+sqrt(delta))/(2*a);
        printf("\nDue soluzioni reali distinte x1= %5.3lf e x2= %5.3lf ", x1,x2);

      } else if(delta==0){
        x1=(-b)/(2*a);
        printf("\nDue soluzioni reali coincidenti x1 e x2 uguali a %5.3lf ",x1);
      } else printf("\nNon esistono soluzioni reali\n");
    }

    return 0;
  }
