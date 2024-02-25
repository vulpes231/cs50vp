#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char answer = get_char("Do you agree to the terms and condition? ");

    if (answer == 'y' || answer == 'Y')
    {
        printf("Agreed\n");
    } else if (answer == 'n' || answer == 'N')
    {
        printf("No agreement!\n");
    } else 
    {
         printf("Invalid argument!\n");
    }
    
}