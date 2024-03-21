#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            i++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return (1);
}

int main ()
{
    char *str = "alph";
    int result = ft_str_is_alpha(str);

    if (result)
    {
        printf("%s contains only alphabetical characters.\n", str);
    }
    else
    {
        printf("%s contains non-alphabetical characters.\n", str);
    }
    return 0;
}

