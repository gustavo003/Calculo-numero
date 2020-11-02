#include <stdio.h>
#include <math.h>

float f(float x){

return sin(x) -x+ 2;


}

float bisec(float a, float b, float erro){
float fa = f(a);
float fb=f(b);
float fres;
if (fa*fb>0){
    printf("\n\nEsses pontos não podem ser utilizados!\n\n");
    printf("f(a) = %f, f(b) = %f", fa, fb);
fres = 0;
}
else{
float result;

do {
    result = (a+b)/2;
    fres = f(result);
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("Resultado = %f\n", result);
    printf("Valor da raiz nesse ponto: %f\n", fres);
    if (fres*f(a)<0){
            printf("Valor de 'b' alterado para %f \n\n", result);
        b=result;
    }
    else{
        a=result;
    printf("Valor de 'a' alterado para %f \n\n", result);
    }
    if (fres<0){
        fres=fres*-1;
    }
}while(fres>erro);
printf("Valor final: %f, Resultado final: %f\n\n\n", result, fres);
}

return fres;

}




int main(){
    float a,b,erro;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
     printf("Digite o valor de b: ");
    scanf("%f", &b);
     printf("Digite o valor da margem de erro: ");
    scanf("%f", &erro);

bisec(a, b, erro);

return 0;
}
