#include <stdio.h>

int main(void)
{
    char *s = "Hi!";
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    // printf("%c\n", *(s + 10));
}