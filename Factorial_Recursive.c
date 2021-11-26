#include <stdio.h>

long int	fact (long int n)
{
	if (n == 1)//caso base (escrever depois)
		return 1;
	else//metodo recursivo (escrever primeiro)
		return (n * fact(n - 1));
}

int	main ()
{
	long int	n;
	printf("Insira o número: ");
	scanf("%ld", &n);
	printf("O factorial de %ld é %ld", n, fact(n));
}

//https://www.youtube.com/watch?v=ggk7HbcnLG8&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=76