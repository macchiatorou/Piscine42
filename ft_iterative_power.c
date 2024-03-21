#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i = 0;
    int result = 1;

    if (power < 0)
    {
        return (0);
    }
    else if ((power == 0 && nb == 0) || (power == 0 && nb != 0))
    {
        return (1);
    }
    else
    {
        while (i < power)
        {
            result *= nb;
            i++;
        }
        return (result);
    }
}

int main()
{
    int nb = 10;
    int power = 2;
    ft_iterative_power(nb, power);
    printf("%d", ft_iterative_power(nb, power));
}