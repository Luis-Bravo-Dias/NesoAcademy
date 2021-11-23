#include <stdio.h>

int	main()
{
	int	number;
	printf("Introduza o número: ");
	scanf("%d", &number);

	int	i;
	int	resto;
	int	soma;

	soma = 0;
	for (i = 1; i < number; i++)//descobrir os divisores
	{
		resto = number % i;
		if (resto == 0)
			soma = soma + i;
	}
	if (soma == number)
		printf ("%d é um número perfeito.", number);
	else
		printf ("%d não é um número perfeito.", number);
	return 0;
}

//https://www.youtube.com/watch?v=wy-4p_VC88A&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=61