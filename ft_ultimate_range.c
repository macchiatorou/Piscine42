#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int length;
    int *result;
    int i;

    i = 0;
    length = max - min;
    
    if (min >= max || (min == 0 && max == 0))
    {
        *range = NULL; // Set range to NULL
        return (0); // Return 0 to indicate success;
    }

    result = malloc(sizeof(int) * (length + 1));

    if (result == NULL)
        return (-1);
    
    while (i < length)
    {
        result[i] = min + i;
        i++;
    }
    
    *range = result; //correctly assign the allocated memory to the pointer passed by reference.

    return (length); // Return the length of the range
}

int main ()
{
    int min = -5;
    int max = 0;
    int *range;

    int result = ft_ultimate_range(&range, min, max);

    if (result != -1)
    {
        if (range != NULL) // Check if range is not NULL
        {
            int length = max - min;
            int i = 0;
            while(i < length)
            {
                printf("%d ", range[i]);
                i++;
            }
            printf("\n");
            free(range);
        }
    }
    else 
    {
        printf("invalid");
    }
    return 0;
}