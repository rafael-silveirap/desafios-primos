#include <stdio.h>
#include <math.h>

int ehprimo(int num){
    int divisores = 0;
    for(int i = 1; i <= num; i++){
        if(num%i == 0){
            divisores++;
        }
    }
    if(divisores == 2){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int numero, resultado = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    for(int j = 1; j<= numero; j++){
        if(ehprimo(j) == 1){
            resultado*=j;
            printf("O numero %d eh primo\n", j);
        }
    }
    printf("O resultado de Px eh %d", resultado+1);
}
