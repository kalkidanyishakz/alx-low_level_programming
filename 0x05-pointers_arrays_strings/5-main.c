#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Tests the rev_string function by reversing a string.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
