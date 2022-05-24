#include <stdio.h>
#include <unistd.h>

int	ft_strlen(const char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

void putnumber_base(unsigned int nb, char *base)
{
	if (nb > ft_strlen(base))
		putnumber_base(nb/ft_strlen(base), base);
	write(1, &base[nb%ft_strlen(base)], 1);
}

int	main()
{
	unsigned int var = 2147483647; //3 in binary = 0000 0011
	putnumber_base(var, "01");
	printf("\n");
	printf("%d\n", var << 1);//resuldado 6
	var = var << 1;
	printf("%u\n", var);//resuldado 6
	putnumber_base(var, "01");
	printf("\n");
	return (0);
}