#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    else if (index == 0)
        return (0);
    else if (index <= 2)
        return 1;
    else
    {
        return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
    }
}
int main()
{
    int index = -1;
    printf("%d", ft_fibonacci(index));
}