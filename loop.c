#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter a figure for X: ");
    int y = get_int("Enter a figure for Y: ");
    if (x < y) 
    {
        printf(" X is lesser than Y\n");
    } else if (x > y)
    {
        printf("X is greater than Y\n");
    }else
    {
        printf("X is equal to Y\n");
    }
}