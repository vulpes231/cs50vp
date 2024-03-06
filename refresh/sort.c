#include <stdio.h>
#include <string.h>
#include <cs50.h>

// const int LENGHT = 9;

void sort(string array[], int length);
void sortnum(int array[], int length);

int main(void)
{
    string fruits[] = {"mango", "apple", "pawpaw", "guava", "pineapple", "cherry", "strawberry", "cinamon", "cashew"};
    int numb[] = {12, 4, 34, 16, 7, 20, 41, 2, 0};
    int length = sizeof(numb) / sizeof(numb[0]);
    sortnum(numb, length);
    sort(fruits, length);

}

void sort(string array[], int length) 
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < length - 1; i++)
        {
            if (array[i][0] > array[i + 1][0])
            {
                string temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
    
    for (int i = 0; i < length; i++)
    {
        printf("%s ", array[i]);
    }
    printf("\n");
}

void sortnum(int array[], int length)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < length - 1; i++)
        {
           if (array[i] > array[i + 1])
           {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
           }
        }
        
    } while (swapped);

    for (int i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}