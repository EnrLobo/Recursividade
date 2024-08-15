#include<stdio.h>

int fat(int n){
	int r=1,i;
	for(i=1;i<=n;i++){
		r*=i;
	}
	return r;
}

int fatRec(int n){
	int retorno;
	printf("%d *", n);getch();
	if(n<=1){
		return 1;
	}
		retorno = n*fatRec(n-1);
		printf("\nFat(%d) = %d\n", n, retorno);getch();
		return retorno;
	
}

int main(){
	int result, n;
	printf("Valor de n: ");
	scanf("%d",&n);
	//result = fat(n);
	//printf("Fatorial de %d = %d\n",n, result);
	
	result = fatRec(n);
	printf("\nFatorial Recursiva de %d = %d\n",n, result);
	return 0;
}


