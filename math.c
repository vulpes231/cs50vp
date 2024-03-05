#include <stdio.h>
#include <cs50.h>

int get_negative(void);

int main(void) 
{
    int i = get_negative();
    printf("i is %i\n", i);
}

int get_negative(void) 
{
    int n;

    do
    {
        n = get_int("Enter negative number: ");
    }
    while (n >= 0);

    return n;
    
}