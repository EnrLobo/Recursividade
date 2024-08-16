#include<stdio.h>

int fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	return fibo(n-1) + fibo(n-2);
}

int main(){
	int n, result;
	printf("Digite um numero: ");
	scanf("%d",&n);
	result = fibo(n);
	printf("O fibonacci de %d e: %d", n, result);
}
