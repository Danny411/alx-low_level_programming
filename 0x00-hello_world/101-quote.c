#include <stdio.h>
#include <unistd.h>
/**
 * main - prints string
 * Description: Prints "and that piece of art is useful.." without puts
 * Return: Always 1  (success)
 */
int main(void)
{
	write(2, "anx that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

