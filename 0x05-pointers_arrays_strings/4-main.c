#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints a string in reverse using print_rev function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
