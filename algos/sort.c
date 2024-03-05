#include <cs50.h>
#include <stdio.h>
 
const int N = 14;

void sort( int array[]);

int main(void)
{
    int numbers[] = {13, 1, 4, 9, 72, 32, 17, 10, 8, 50, 23, 91, 2, 0};
    sort(numbers);
}

void sort(int array[]) 
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < N - 1; i++)
        {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            swapped = true;
        }
        printf("Swapped");
    }
    while(swapped);

    printf("\n");
    
}