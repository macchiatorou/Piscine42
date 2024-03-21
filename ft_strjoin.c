#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str) 
{
	int len;
    len = 0;
	while (str[len]) 
        len++;
	return (len);
}

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0') 
    {
        i++;
    }
    while (src[j] != '\0') 
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int total_len(char **strs, int size_sep)
{
	int i;
	int len;

	i = 0;
    len = 0;
    while(strs[i] != NULL)
    {
        len += ft_strlen(strs[i]);
        i++;
    }
    len += (i - 1) * size_sep;
    return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
    int total_length; 
    char *str;

    int i = 0;
    int offset = 0;
    total_length = total_len(strs, ft_strlen(sep));
    str = malloc(sizeof(char) * (total_length + 1));
    if (str == NULL)
        return NULL;

    while (i < size)
    {
        ft_strcat(str + offset, strs[i]);
        offset += ft_strlen(strs[i]);
        if (i < size - 1)
        {
            ft_strcat(str + offset, sep);
            offset += ft_strlen(sep);
        }
        i++;
    }
    return str;
}

int main() 
{
    char *strs[] = {"Hello", "World"};
    char *sep = " ";
    int size = 2;
    char *result = ft_strjoin(size, strs, sep);
    if (result) {
        printf("%s\n", result);
        free(result); // Don't forget to free the allocated memory
    }
    return 0;
}