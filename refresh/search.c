#include <stdio.h>
#include <cs50.h>
#include <string.h>


const int LENGHT = 9;

int searchfruits(string array[], string searchterm);
int sortfruits(string array[]);

int main(void)
{
    string fruits[] = {"mango", "apple", "pawpaw", "guava", "pineapple", "cherry", "strawberry", "cinamon", "cashew"};

    string searchterm = get_string("Search fruit: ");
    searchfruit(fruits, searchterm);

}

int searchfruits(string array[], string searchterm)
{
    
    for (int i = 0; i < LENGHT; i++)
    {
        // printf("%s,\t%s\n", searchterm, array[i]);
        if (strcmp(searchterm, array[i]) == 0) 
        {
            printf("Found %s\n", array[i]);
            return 0;
        } 
       
    }
    printf("Not Found!\n");
    printf("\n");
    return 1;
    
}

