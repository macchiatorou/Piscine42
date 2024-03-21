#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}



/*If nb is negative, it prints a minus sign (-) and makes  nb positive by changing its sign.*/
// put a negative in front
// converts the no. to positive, ensure it dosen't go into infinite negative

/*If nb is greater than or equal to 10, it recursively calls
ft_putnbr with nb / 10 to print the higher-order digits of nb.*/
// (nb / 10) >> the recursive call

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
        ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + '0';
		ft_putchar(nb);
	}
}

/*it updates nb to the remainder of nb divided
by 10 (nb = nb % 10), which gives the last digit of nb.*/

// (nb < 10): the base case, printing last digit (This is the condition that stops the recursion)

/*Finally, if nb is less than 10, it prints nb as a character by adding 48 to it
('0' in ASCII). This converts the digit to its ASCII representation.*/

/*Without this condition, the function would only print the higher-order digits
and not print the last digit of the number, resulting in an incomplete output.*/

int main()
{
	int nb = -2147483648;
	ft_putnbr(nb);
	return 0;
}
/*Overall, this program demonstrates how to print an integer to the
standard output using recursion and basic arithmetic operations.*/