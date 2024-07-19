#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("aca printeo algo malo como null: %s\n", (char *)0);
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("%");
    printf("%");
    _printf("%!\n");
    printf("%!\n");
    _printf("%K\n");
    printf("%K\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
