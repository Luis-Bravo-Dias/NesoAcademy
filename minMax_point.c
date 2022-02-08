#include <stdio.h>

void minMAX(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];
	int	i;
	for(i = 1; i < len; i++)
	{
		if(arr[i] > *max)
			*max = arr[i];
		if(arr[i] < *min)
			*min = arr[i];
	}
}

int	main()
{
	int	a [] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
	int min;
	int	max;
	int len = sizeof(a) / sizeof(a[0]);
	minMAX(a, len, &min, &max);
	printf("Valor minimo da array é %d e o valor maximo é %d", min, max);
	return 0;
}

//https://www.youtube.com/watch?v=qxUd5av1OYI&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=106