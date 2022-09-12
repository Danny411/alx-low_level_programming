#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Descriotion: print lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
