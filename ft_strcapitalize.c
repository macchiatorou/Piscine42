#include <unistd.h>
#include <stdio.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0' )
    {
        ft_putchar(*str);
        str++;
    }
}

int is_alphanumeric(char c) 
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
            || (c >= '0' && c <= '9'));
}

char    *ft_capitalize(char *str)
{
    int i;
    int special;
    
    i = 0;
    special = 1;  // Flag to check if the current character is the first letter of a word
    while (str[i] != '\0')
    {
       if(special && str[i]>= 'a' && str[i]<='z') 
       //to track whether the current character is the first letter of a word.
       {
            if (!(i >= 2 && str[i - 2] == '4' 
            && str[i - 1] == '2' 
            && str[i] == 'm' 
            && is_alphanumeric(str[i + 1])))
    //it checks if the previous two characters are "42" and the current character is "m". 
            str[i] = str[i] - 32;
            special = 0;
        }
        
        if (!(str[i] >='a' && str[i] <='z') &&
            !(str[i] >='A' && str[i] <='Z')
                /*&!(str[i] >= '0' && str[i] <= '9')*/)
            special=1;

        i++;
    }
    //ft_putstr(str);
    return (str);
}


int     main(void)
{
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_capitalize(str);
    printf("%s", str);
    //ft_putchar('\n');
    //ft_putstr(" ");
    return (0);
}