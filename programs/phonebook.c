#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *myfile = fopen("phonebook.csv", "a");

    string name = get_string("Enter name: ");
    string number = get_string("Enter number: ");

    fprintf(myfile, "%s, %s\n", name, number);
    fprintf(myfile, "\n");

    fclose(myfile);
}