#include <stdio.h>
#include <time.h>

// Variável global para contar as chamadas recursivas
long recursiveCalls = 0;

// Função recursiva para calcular Fibonacci
long long fibonacciRecursive(int n) {
    recursiveCalls++;  // Incrementa o contador a cada chamada recursiva
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Função iterativa para calcular Fibonacci
long long fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    long long prev = 0, curr = 1;
    int i;
    for ( i = 2; i <= n; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int number = 45; // Número para calcular o Fibonacci

    // Medir o tempo de execução e contar chamadas recursivas
    clock_t startRecursive = clock();
    long long resultRecursive = fibonacciRecursive(number);
    clock_t endRecursive = clock();
    double timeRecursive = ((double) (endRecursive - startRecursive)) /  1000;

    // Medir o tempo de execução do método iterativo
    clock_t startIterative = clock();
    long long resultIterative = fibonacciIterative(number);
    clock_t endIterative = clock();
    double timeIterative = ((double) (endIterative - startIterative)) /  1000;

    // Exibir resultados
    printf("Fibonacci de %d (recursivo): %lld\n", number, resultRecursive);
    printf("Tempo de execução (recursivo): %.2f segundos\n", timeRecursive);
    printf("Chamadas recursivas: %lld\n", recursiveCalls);

    printf("Fibonacci de %d (iterativo): %lld\n", number, resultIterative);
    printf("Tempo de execução (iterativo): %.2f segundos\n", timeIterative);

    return 0;
}

