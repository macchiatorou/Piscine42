#include <stdio.h>

int sqr_(int nb, int odd, int count)
{
    if (nb < 0)
        return 0;
    else if(nb == 0)
        return count;
    else 
    {
        nb = nb - odd;
        count++;
        odd = odd + 2;
        return (sqr_(nb, odd, count));
    }
}
int ft_sqrt(int nb)
{
    int odd;
    int count;

    odd = 1;
    count = 0;
    return (sqr_(nb, odd, count));
}
int main()
{
    int nb = 2;
    printf("%d\n", ft_sqrt(nb));
    return 0;
}