#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if (nb < 0)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    while (i <= nb)
    {
        result *= i;
        i++;
    }
    return (result);
}

int main()
{
    int nb = 5;
    printf("%d", ft_iterative_factorial(nb));
    return 0;
}