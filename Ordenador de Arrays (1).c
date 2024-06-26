#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para gerar os números aleatórios
// Vai retornar um ponteiro de inteiro e recebe o tamanho do array para gerar os números em loop
int *sortearNumeros(int tamanhoArray)
{
    //Ponteiro que aponta para a memória alocada de maneira dinâmica para o array de números aleatórios
    int *numsSorteados = (int *)malloc(tamanhoArray * sizeof(int));
	
	/*
		NOTA SOBRE MALLOC:
			Espaços de memória alocados com malloc, calloc e realloc são atribuidos na Heap (memória dinâmica).
			Ou seja: eles atuam como uma variável global, porém, para serem "descartados" tal qual uma var local,
			é necessário a ação manual por meio do comando "free" - caso contrário, ocorrem erros de memory leak.
			Internamente, malloc mantém uma lista de blocos de memória, rodando o comando,
			ele atribui um apto para suportar o tamanho requisitado em bytes
			isso tudo depende de quais estiverem livres, por isso a importância do comando "free".
			"são globais até que se prove o contrário"
	*/

    // Definição da semente:
    srand(1023);

    for (int i = 0; i < tamanhoArray; i++)
    {
        numsSorteados[i] = rand();
    }

    return numsSorteados;
}

// callback do qsort:
int compare(const void *p, const void *q) // qsort envia ponteiros de dois valores da vítima
{
    // Busca o valor numérico dos ponteiros
    int v1 = *(const int *)p;
    int v2 = *(const int *)q;

    if (v1 < v2)
    { // se v1>v2, seu retorno é <0, isso quer dizer que v1 vem ANTES
        return -1;
    }

    else if (v1 > v2)
    { // se v1<v2, seu retorno é >0, isso quer dizer que v1 vem DEPOIS
        return 1;
    }

    else
    { // se v1=v2, ele retorna 0.
        return 0;
    }
}

// Loop para printar todos os números, recebe o array dos números sorteados
void printuf(int *numeros, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d\n", numeros[i]);
    }
}

int main()
{
    int arraySize;

    printf("Informe o tamanho do array digitado com um inteiro: ");
    scanf("%d", &arraySize);

    // Vítima:
    // É um ponteiro de inteiros que recebe o ponteiro retornado pela função do sorteio
    int *resultadoSorteio = sortearNumeros(arraySize);

    printf("Números desordenados: \n");
    printuf(resultadoSorteio, arraySize);
    printf("\n");

    // qsort: ordena os itens da lista
    qsort(resultadoSorteio, arraySize, sizeof(int), compare);

    printf("Números ordenados: \n");
    printuf(resultadoSorteio, arraySize);

    free(resultadoSorteio); // Comando que limpa o espaço de memória usado para sortear os números
    return 0;
}
