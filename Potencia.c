#include<stdio.h>

int pot(int base, int expoente){
	if(expoente==0){
		return 1;
	}
	return base*pot(base, expoente-1);
}

int main(){
	int base, expoente,result;
	printf("Digite a base: ");
	scanf("%d",&base);
	printf("Digite o expoente: ");
	scanf("%d",&expoente);
	
	result = pot(base, expoente);
	printf("A potencia de %d elevado a %d e: %d", base, expoente, result );
	return 0;
}
