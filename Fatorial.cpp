#include<stdio.h>

int fat(int n){
	int r=1,i;
	for(i=1;i<=n;i++){
		r*=i;
	}
	return r;
}

int main(){
	int result, n;
	printf("Valor de n: ");
	scanf("%d",&n);
	result = fat(n);
	printf("Fatorial de %d = %d\n",n, result);
	
	result = fat(n);
	printf("Fatorial Recursiva de %d = %d\n",n, result);
	return 0;
}

int fatRec(int n){
	if(n<=1)
		return 1;
	else
		return n*fatRec(n-1);
}
