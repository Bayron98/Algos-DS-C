#include <stdlib.h>
#include <stdio.h>

void quick_sort(int *tab, int low, int high);

int main(void)
{
    int tab[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &tab[i]);
    }
    quick_sort(tab, 0, 4);
    printf("/////////////////////////////\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    
}

void quick_sort(int *tab, int low, int high)
{
    if(low > high){
        return;
    }
    int pivot = tab[low];
    int j = low;
    for (int i = low + 1; i <= high; i++)
    {
        if (pivot >= tab[i])
        {
            j++;
            int aux = tab[i];
            tab[i] = tab[j];
            tab[j] = aux;
        }
    }
    tab[low] = tab[j];
    tab[j] = pivot;
    quick_sort(tab, low, j-1);
    quick_sort(tab, j+1, high);
}
