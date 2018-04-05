
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main (void)
{
	char *Tabela[N]; // Vetor de N ponteiros para caracteres
	char nome[20]; // String para guardar um nome
	int i, pos;

	for (i = 0; i < N; i++)
	{
		Tabela[i] = NULL;
	}
	printf("\nEntre com um nome: ");
	scanf(" %s", &nome);
	printf("\nQual a posicao (0 <= %d ) de %s :",N,nome);
	scanf("%d",&pos);

	Tabela[pos-1] = nome;

	for (i = 0; i < N; i++)
	{
		printf("\n%d. %s",i+1,Tabela[i]);
	}

	printf("\n");

	return (0);

}