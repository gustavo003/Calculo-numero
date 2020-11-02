#include <stdio.h>
int n;




float maximo(float vet[n], float vet2[n]){
    int i;
  float max = vet[0]-vet2[0];
  float max2;
  max<0?max=max*-1:max;

  max2 = vet2[0];


 max2<0?max2 = max2*-1:max2;

  float x;
  for (i=1;i<n;i++){
    x = vet[i]-vet2[i];
    x<0?x = x*-1:x;


    if (max<x)max = x;
    if (max2<vet2[i])max2 = vet2[i];
     max2<0?max2 = max2*-1:max2;
  }

return max/max2;
}


float gauss_seidel(float mat[n][n+1], float vet[n], int k, float erro){
float a[n];
int i, j, m;
float l;
for (i=0;i<k;i++){
        printf("Iteracao numero %i\n",i+1);
for (j=0;j<n;j++) a[j]=vet[j];
for(j=0;j<n;j++){

    l = mat[j][n];
for(m=n-1;m>=0;m--){
        if (m!=j) l=l-mat[j][m]*vet[m];
}
l = l/mat[j][j];

vet[j]=l;
printf("Valor de X%i: %f\n",j, vet[j]);



}
printf("erro: %f\n\n", maximo(vet, a));
if (i>0)
if (maximo(vet, a)<erro)break;
}


}



int main(){
int i,j;

printf("Digite o tamanho da matriz: \n");
scanf("%i", &n);

float mat[n][n+1];

for (i=0;i<n;i++){
    for (j=0;j<n+1;j++){
        printf("Digite o coeficiente na posicao[%i][%i]\n", i,j);
        scanf("%f", &mat[i][j]);
    }
}

float vet[n];

printf("Digite os valores iniciais: \n");

for(i=0;i<n;i++){
    printf("Digite o valor numero %i\n", i);
    scanf("%f", &vet[i]);
}

int k;

printf("Digite os numeros de iteracao: \n");
scanf("%i", &k);
float erro;

printf ("Digite a margem de erro: \n");
scanf("%f", &erro);
gauss_seidel(mat, vet, k, erro);

return 0;
}
