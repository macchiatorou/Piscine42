#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return 0;
        }

        i++;
    }
    return 1;
}

int main ()
{
    char *str = "a123e";
    int result = ft_str_is_lowercase(str);

    if (result)
    {
        printf("%s contains only lowercase alphabets.\n", str);
    }
    else
    {
        printf("%s contains any other characters.\n", str);
    }
    return 0;
}