#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int length;
    int *range;
    int i;

    length = max - min;
    
    if (min >= max || min == 0 && max == 0)
        return (NULL);
    
    range = malloc(sizeof(int) * (length + 1));
    
    if (range == NULL)
        return (NULL);
    
    i = 0;
    while (i < length)
    {
        range[i] = min + i;
        i++;
    }
    range[i] = '\0';
    return (range);
}

int main ()
{
    int min = -10;
    int max = 5;

    int *result = ft_range(min, max);

    if (result != NULL)
    {
        int length = max - min;
        int i = 0;
        while(i < length)
        {
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");
        free(result);
    }
    else 
    {
        printf("invalid");
    }
    return 0;
}
