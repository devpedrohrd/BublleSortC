#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int elemento)
{
    // definicao das variaveis
    int inicio, meio, fim;

    inicio = 0;
    fim = tamanho - 1;

    while (inicio <= fim)
    {
        meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == elemento)
        {
            return meio;
        }
        // se o elemento do meio for menor que o numero procurado,então desconsidere os numeros da esquerda!
        else if (vetor[meio] < elemento)
        {
            inicio = meio + 1;
        }
        // se o elemento do meio for maior que o numero procurado,então desconsidere os numeros da direita!
        else
        {
            fim = meio - 1;
        }
    }
    return -1;
}

int main()
{
    // definindo as variveis e inicializando o vetor com valores aleatorios

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento;
    printf("Digite o numero que procura:");
    scanf("%d", &elemento);

    int elementoProcurado = buscaBinaria(vetor, tamanho, elemento);

    if (elementoProcurado != -1)
    {
        printf("\nO valor %d esta na posicao: %d do vetor", elemento, elementoProcurado);
    }
    else
    {
        printf("\nElemento nao encontrado!");
    }
}