#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strdup(char *src)
{
    char *dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (dest == NULL)
        return NULL;
    ft_strcpy(dest, src);
    return dest;
}

int main()
{
    char src[] = "Hello World";
    printf("%s", ft_strdup(src));
    return 0;
}

/*
char *strdup(const char *src) {
    char *dest = malloc(strlen (src) + 1);  // Space for length plus nul
    if (dest == NULL) return NULL;          // No memory
    strcpy(dest, src);                      // Copy the characters
    return dest;                            // Return the new string
}*/