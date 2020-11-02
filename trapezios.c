
#include <stdio.h>
#include <math.h>



float f(float x){


    return cos(x)/(1+x);


}

float trapezio(float x, float y, int intervalo, float h){
    float valor=0;
    float i=x;
    if (h==0) h = (y-x)/intervalo;
printf("h=%f\n\n", h);


    while(i<y){
            printf("Calculado (h/2 * (f(%.3f) +f(%.3f))\n\n", i, i+h);
            printf("Valor: %f\n\n", (h/2*(f(i) +f(i+h)))) ;
        valor+=(h/2)*(f(i) +f(i+h));
printf("Valor atual: %f\n\n", valor);
        i=i+h;
    }

printf("Resultado final: %f\n", valor);


}


int main(){

trapezio(3,12, 4, 0);


return 0;
}
