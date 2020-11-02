#include <stdio.h>
#include <math.h>

float f(float x){

    return pow(x, 3) *log(pow(x,2)+9);

}

float simpson8(float x, float y, int intervalo){
    float valor=0;
   float  h = (y-x)/(intervalo);

printf("h=%f\n\n", h);

printf("Calculamos f(x0) = %f\n\n", (3*h/8)*(f(x)));
            valor+=(3*h/8)*(f(x));

printf("Calculamos f(Xn) = %f\n\n", (3*h/8)*(f(y)));
            valor+=(3*h/8)*(f(y));
int cont=1;
    float i=x+h;
    while(i<=y-h){

            if(cont%3==0){
                printf("Calculando (3*h/8 * 2*f(%.3f))\n\n", i);
                valor+=(3*h/8)*2*(f(i));
                    printf("Valor: %f\n\n", (3*h/8)*2*(f(i))) ;

            }
            else{
                printf("Calculando (3*h/8 * 3*f(%.3f))\n\n", i);
                valor+=(3*h/8)*3*(f(i));
                printf("Valor: %f\n\n", (3*h/8)*3*(f(i)));

            }
printf("Valor atual: %f\n\n", valor);
        i=i+h;
        cont++;
    }

printf("Resultado final: %f\n", valor);


}

int main(){


simpson8(1, 10, 6);
return 0;
}

