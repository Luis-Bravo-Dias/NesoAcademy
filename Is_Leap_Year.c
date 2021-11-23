#include <stdio.h>

int	main()
{
	int	year;
	printf("Indroduza o ano: ");
	scanf("%d", &year);

	if (year % 400 == 0)
		printf("É ano bisexto.");
	else if (year % 100 == 0)
		printf("É ano bisexto.");
	else if (year % 4 == 0)
		printf("É ano bisexto.");
	else
		printf("Não é ano bisexto.");
	return 0;
}

//https://www.youtube.com/watch?v=rkR_04FIr7U&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=59