#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	result;
	int	n;
	int	i;

	printf("Número de termos: ");
	scanf("%d", &n);

	a = 0;
	b = 1;
	for(i = 1; i <= n; i++)
	{
		printf("%d ", a);
		result = a + b;
		a = b;
		b = result;
	}
}

//https://www.youtube.com/watch?v=D59HhCkcmNA&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=55