#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
    FILE *myfile = fopen("address.csv", "a");

    string name = get_string("Enter name: ");
    int age = get_int("Enter age: ");
    string phone = get_string("Enter number: ");

    fprintf(myfile, "%s,\t%i,\t%s\n", name, age, phone);
    fprintf(myfile, "\n");
    fclose(myfile);
}