#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{  
    int i;
    int j;

    i = 0;
    j = 0;
    
    // Find the end of the destination string
    while (dest[i] != '\0') 
    {
        i++;
    }

    // Copy up to n characters from src to dest
    while (src[j] != '\0' && nb > 0) 
    {
        dest[i] = src[j];
        i++;
        j++;
        nb--;
    }

    /* for (i = 0; i < nb && src[i]; i++) {
        dest[i] = src[i];
    } */

    // Add the null-terminating character
    dest[i] = '\0';

    // Return the pointer to the destination string
    return (dest);
}

int main() {
    char dest[50] = "Hello ";
    char src[] = "world";

    *ft_strncat(dest, src, 3);
    printf("Result: %s\n", dest);

    return 0;
}