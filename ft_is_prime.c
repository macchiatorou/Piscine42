#include <stdio.h>

int ft_is_prime(int nb)
{
    int factor;

    factor = 2;
    if (nb < 2)
        return (0);
    //if (nb == 2)
        //return (1);
    while (factor < nb)
    {
        if (nb % factor == 0) // Even numbers greater than 2 are not prime
            return (0);
        factor++;
    }
    return (1); // If nb is not divisible by any factor, it's prime
}
int main ()
{
    int nb = 13; // Change the number to be checked for primality
    if (ft_is_prime(nb)) 
    {
        printf("%d is a prime number.\n", nb);
    } 
    else 
    {
        printf("%d is not a prime number.\n", nb);
    }
    return 0;
}