#include <stdio.h>

int	main()
{
	int	i;
	int	j;
	int	rows;
	int	n;

	printf("Quantas filas? ");
	scanf("%d", &rows);

	n = 1;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", n);
			n++;
		}
		printf("\n");
	}
	return 0;
}

//https://www.youtube.com/watch?v=0jZPdInhhco&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=56