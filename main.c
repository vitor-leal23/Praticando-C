#include <stdio.h>

        int sequenciaFibonacci(int num) {
    int a = 0, b = 1, antb;

    if (num == a || num == b) {
        return 1; 
    }

    while (b <= num) {
        antb = b;
        b = a + b; 
        a = antb;

        if (b == num) {
            return 1; 
        }
    }

    return 0; 
}

int main()
{
    int n;
    printf("1-Sequencia de Fibonacci.\n");
    printf("2-String da letra A.\n");
    printf("Escolha a opcao desejada acima: ");
    scanf("%d",&n);
    getchar();
    
    switch(n){
        
        case 1:
        
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (sequenciaFibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }

        break;
        
        case 2:
        
         char str[100];
         int contador = 0;

    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);


    // Verifica cada caractere da string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contador++;
        }
    }

    // Exibe os resultados
    if (contador > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) aparece %d vez(es) na string.\n", contador);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }
    break;
    
    default:
    printf("Opcao invalida!\n");
    break;

}
    
    }

