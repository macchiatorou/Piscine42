#include <unistd.h>

void print_integers(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7')
    {
        write(1,", ", 1);
    }
    else
    {
        write(1," ", 1);
    }
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {    
            c = b + 1;
            while (c <= '9')
            {    
                print_integers(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb();
    return 0;
}