#include <stdio.h> 
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1; // The end index is decremented to move towards the center of the array.
    int temp;

//Arrays in C are zero-indexed, last element will be at index size - 1.

    while(start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start = start + 1;
        end = end - 1;
    }
}

void print_reverse(int *tab, int size)
{
    int i = 0;

    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}

int main(void)
{
    int size = 8;
    int tab[] = {5,2,4,3,6,7,1,9};
    ft_rev_int_tab(tab, size);
    print_reverse(tab, size);
}