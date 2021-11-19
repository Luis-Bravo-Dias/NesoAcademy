#include <stdio.h>

int main()
{
    int n;
    int q;
    int rem;
    int factorial;
    int i;
    int result;

	printf("Insira o número: ");
	scanf("%d", &n);

	factorial = 1;
	result = 0;
	q = n;
	while(q != 0)//fazer a factorização de cada digito e somar
	{
		rem = q % 10;
		for(i = 1; i <= rem; i++)
		{
			factorial = factorial * i;
		}
		result = result + factorial;
		factorial = 1;
		q = q / 10;
	}
	if(result == n)
		printf("%d é um número forte", n);
	else
		printf("%d não é número forte", n);
	return 0;
}

//https://www.youtube.com/watch?v=rZtc68o-He8&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=51