#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);


int main(void)
{
    int digit = get_size();
    print_grid(digit);
}


int get_size(void) 
{
    int n;
    do
    {
      n = get_int("Enter size: ");
    } 
    while (n < 1);
    return n;
}

void print_grid(int size) 
{
    for (size_t i = 0; i < size; i++)
    {
       for (size_t j = 0; j < size; j++)
       {
            printf("#");
       }
        printf("\n");
    }
}