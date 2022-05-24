
#include <unistd.h>

void	print_bits(unsigned char octet)
{

	for (int i = 128; i; i /= 2 )
		((octet & i) ? write(1, "1", 1) : write(1, "0", 1));
// 	int	i = 128;
	
// 	while (i)
// 	{
// 		if (octet & i)
// 			write(1, "1", 1);
// 		else
// 			write(1, "0", 1);
// 		i /= 2;
// 	}
}

int main()
{
	int i = 255;

	while (i >>= 1)
	{
		print_bits(i);
		write(1, "\n", 1);
	}
}