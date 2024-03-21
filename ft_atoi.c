#include <stdio.h>
#include <unistd.h>

/*convert a string into an integer numerical representation. 
It stands for ASCII to integer*/

int ft_atoi(char *str)
{
	int	i;
    int	sum;
	int	sign;

    i = 0;
    sum = 0;
    sign = 1;

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
    
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
		    sign *= -1;
		i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        sum = (sum * 10) + (str[i] - '0');
		i++;
    }
    return (sign * sum);
}


int main(void)
{
    char *n = " ---+--+1234ab567";
    
    printf("%d", ft_atoi(n));
}