#include <stdio.h>

int	main()
{
	int	base;
	int	exponent;
	int	expo;
	int	power;
	double	power1;

	printf("Insira a base: ");
	scanf("%d", &base);
	printf("Insira o exponencial: ");
	scanf("%d", &exponent);

	power = 1;
	power1 = 1.0;
	expo = exponent;
	if (exponent > 0)
	{
		while (exponent != 0)
		{
			power = power * base;
			exponent--;
		}
		printf("%d elevado a %d é: %d", base, expo, power);
	}
	else
	{
		while (exponent != 0)
		{
			power1 = power1 * (1.0 / base);
			exponent++;
		}
		printf("%d elevado a %d é: %.10f", base, expo, power1);
	}
}