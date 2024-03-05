#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];

    people[0].name = "Vulpes";
    people[0].number = "+2348125100129";

    people[1].name = "Jethro";
    people[1].number = "+2348020001202";
    
    people[2].name = "Jahred";
    people[2].number = "+2348016257891";


    string search = get_string("Enter name: ");
    string replace = get_string("Enter replacement: ");

    for (int i = 0; i < 3; i++)
    {
       if (strcmp(people[i].name, search) == 0)
       {    
            people[i].name = replace;
            printf("Updated name %s\n", people[i].name);
            return 0;
       }
    }
    printf("Not found!");
    return 1;
    
    

    
}