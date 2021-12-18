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
	int numero, resultado = 1, n;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &numero);
	for(int j = 1; j<= numero; j++){
		if(ehprimo(j) == 1){
			resultado*=j;
			printf("O numero %d eh primo\n", j);
			printf("%d eh o n = %d\n", j, n);
			n++;
		}
	}
	if(ehprimo(resultado+1) == 0){
		printf("O resultado de Px eh %d e esse valor nao eh primo", resultado+1);
	} else {
		int k = 2;
		int i = 1;
		int div = 0;
		int contador = 0;
		while(k <= resultado+1){
			while(i <= k){
				if(k%i == 0){
				div++;	
				}
			i++;
			}
			if(div == 2){
			contador++;
			}
		k++;
		i = 1;
		div = 0;
		}
	printf("O resultado de Px eh %d e esse valor eh primo de posicao n = %d", resultado+1, contador);
	}
}
