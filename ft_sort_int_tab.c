#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i; //counter
    int j;
    int temp;

    i = size - 1;

    while(i > 0)
    {
        j = 0;
        while(j < i)
        {
            if(tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i--;
    }
}

void print_tab_Array(int tab[], int size)
{
    int i = 0;

    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int size = 9;
    int tab[] = {9, 5, 6, 6, 4, 8, 2, 1, 3};
    
    ft_sort_int_tab(tab, size);
    print_tab_Array(tab, size);

    return 0;
}