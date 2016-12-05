#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Olimp {															//struct para colocar nota e nome da dupla
	int nota;
	char aluno1[50];
	char aluno2[50];
} Olimp;

int main (int argc, char *argv[])
{
	FILE *fp;
	int controle = 0, i;
	if (argc >= 2)
	{
		for (i=1, i < argc; i++)
			if (strcmp(argv[i], "-a"))
			{
				fp = fopen (argv[i+1], r);
				controle = 1;
			}
	}

	if (controle == 1)
	{
	}
	else
	{
		int tam, cont=1;
		float valor;
		char nome[50];
	
		scanf("Digite o número de duplas da Olimpiada: %f\n", tam);		//recebe tamanho do vetor de duplas
		Olimp dupla[tam]; 												//cria vetor de struct de duplas
		while (cont <= tam)
		{
			scanf("Nota da dupla: %d\n", valor);
			if ((valor<=10)||(valor>=0))
			{
				dupla[cont].nota = valor;
				scanf("Nome do primeiro aluno: %s\n", nome);
				dupla[cont].aluno1 = nome;
				scanf("Nome do segundo aluno: %s\n", nome);
				dupla[cont].aluno2 = nome;
				cont++;
			}
			else
				scanf("valor de nota inválido, tente novamente");
		}
	}

	for (i=1; i<=tam; i++)
	{
		printf("%f  %s  %s", dupla[i].nota, dupla[i].aluno1, dupla[i].aluno2);
	}
	return 0;
}