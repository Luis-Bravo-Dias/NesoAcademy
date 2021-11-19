#include <stdio.h>

int	main()
{
	int	decimal;
	int	binary;
	int base;
	int	rem;
	int	num;

	printf("Insira um número binário: ");
	scanf("%d", &binary);

	decimal = 0;
	base = 1;
	num = binary;
	while (binary != 0)
	{
		rem = binary % 10;
		decimal = decimal + rem * base;
		binary = binary / 10;
		base = base * 2;
	}
	printf("O equivalente decimal de %d é: %d", num, decimal);
	return 0;
}

//https://www.youtube.com/watch?v=9dPMb_znOwk&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=57