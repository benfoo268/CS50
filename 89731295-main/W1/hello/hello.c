/*
CS50 PS1 Hello
code_tofu
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
    return 0;
}
