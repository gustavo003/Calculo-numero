#include <stdio.h>
#include <math.h>

float f(float x){

    return x*x;

}

float simpson3(float x, float y, int intervalo){
    float valor=0;

   float  h = (y-x)/(intervalo);
printf("h=%f\n\n", h);

printf("Calculamos f(x0) = %f\n\n", f(x));
valor+=f(x);
printf("Calculamos f(X2n+1) = %f\n\n", f(y));
valor+=f(y);
int cont=1;
    float i=x+h;
    while(i<y-h){

            if(cont%2==0){
                printf("Calculando (h/3 * 2*f(%.3f))\n\n", i);
                valor+=(h/3)*2*(f(i));
                    printf("Valor: %f\n\n", (h/3)*2*(f(i))) ;

            }
            else{
                printf("Calculando (h/3 * 4*f(%.3f))\n\n", i);
                valor+=(h/3)*4*(f(i));
                printf("Valor: %f\n\n", (h/3)*4*(f(i))) ;


            }
printf("Valor atual: %f\n\n", valor);
        i=i+h;
        cont++;
    }

printf("Resultado final: %f\n", valor);


}

int main(){


simpson3(2, 4, 10);
return 0;
}
