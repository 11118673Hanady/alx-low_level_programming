#include "main.h"
/**
* main - wrties the string "_putchar" to stdout
* @string - the string to be printed to standard ouput
* Return: returns 0 after printing the string
*/
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
