#include <stdio.h>

int check_prime(int nb)
{
    int factor;

    factor = 2;
    if (nb < 2)
        return (0);
    while (factor < nb)
    {
        if (nb % factor == 0) // Even numbers greater than 2 are not prime
            return (0);
        factor++;
    }
    return (1); // If nb is not divisible by any factor, it's prime
}
int ft_find_next_prime(int nb)
{    
    if (nb < 2)
        return 2; // 2 is the first prime number
    if (check_prime(nb))
        return nb;
    while (!check_prime(nb))
    {
        nb++;   
    }
    return nb;
}
int main ()
{
    int nb = 11; // Change the number to be checked for primality
    int next_prime = ft_find_next_prime(nb);
    printf("The next prime number after %d is %d.\n", nb, next_prime);
    return 0;
}