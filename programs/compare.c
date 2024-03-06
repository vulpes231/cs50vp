#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Enter string: ");
    string t = get_string("Enter string: ");

    printf("%p\n", s);
    printf("%p\n", t);
}