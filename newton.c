
#include <stdio.h>
#include <math.h>



float func(float x){

    return 2-x+exp(-x);

}

float deriv (float x){

return -exp(-x)-1;
}



float newton(float x, float erro){

    float f = func(x);

      printf("Valor de x: %f\n", x);
    printf("Valor de f(x) %f: \n\n\n", f);
    printf("Valor de f'(x): %f\n\n", deriv(x));

while(f>erro){
    x = (x - f/deriv(x));
    f = func(x);
    printf("Valor de x: %f\n", x);
    printf("Valor de f(x) %f: \n\n\n", f);
    printf("Valor de f'(x): %f\n\n", deriv(x));

}

}

int main(){

newton(2, 0.01);

return 0;



}
