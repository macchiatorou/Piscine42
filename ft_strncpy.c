#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{ //unsigned int forces a positive value
    int i = 0;

    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
	/*while (i < n)
	{
		dest[i] = '\0'; // ensures that the dest string is null-terminated at position n.
		i++;
	}*/
    dest[n] = '\0';
//his is done to handle cases where n is greater than the length of src, ensuring that dest is properly null-terminated.
    return (dest);
}

int main()
{
    char *src = "hello";
    char dest[5];
    unsigned int n = 2;

    *ft_strncpy(dest, src, n);

    
    printf("%s", dest);

    return 0;
}