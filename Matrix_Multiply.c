#include <stdio.h>
#define MAX 50
int	main ()
{
	int	a[MAX][MAX];
	int	b[MAX][MAX];
	int alinhas;
	int	acolunas;
	int blinhas;
	int	bcolunas;
	int	i;
	int	j;
	int k;
	int	product[MAX][MAX];
	int	sum;
	sum = 0;

//Colocar as linhas e colunas da matriz a
	printf("Coloque as linhas e colunas da matriz a: ");
	scanf("%d %d", &alinhas, &acolunas);

//colocar os elementos da matriz a:

	printf("Coloque os elementos da matriz a:\n");
	for(i = 0; i < alinhas; i++)
	{
		for(j = 0; j < acolunas; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

//Colocar as linhas e colunas da matriz b
	printf("Coloque as linhas e colunas da matriz b: ");
	scanf("%d %d", &blinhas, &bcolunas);
if (blinhas != acolunas)//verificar se dá para multiplicar
	{
		printf("Não dá para multiplicar as duas matrizes");
	}
else//colocar os elementos da matriz b:
	{
		printf("Coloque os elementos da matriz b:\n");
		for(i = 0; i < blinhas; i++)
		{
			for(j = 0; j < bcolunas; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
	}

//O resultado da multiplicaçāo de matrizes:
	printf("\n");
	for(i = 0; i < alinhas; i++)
	{
		for(j = 0; j < bcolunas; j++)
		{
			for(k = 0; k < blinhas; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
	}
//Escrever a array de elementos
	printf("Matriz resultante\n");
	for(i = 0; i < alinhas; i++)
	{
		for(j = 0; j < bcolunas; j++)
		{
			printf("%d ", product[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//https://www.youtube.com/watch?v=aAFP5wsmH2k&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=99
//https://www.youtube.com/watch?v=jzdQqoG1tZs&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=99