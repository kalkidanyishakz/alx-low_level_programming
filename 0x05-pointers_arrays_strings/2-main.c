#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Checks the _strlen function by obtaining the length
 *              of a given string.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
