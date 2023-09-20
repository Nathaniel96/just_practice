#include <stdio.h>
#include "main.h"
/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	printf("size of type 'char' on computer : %lu bytes\n", sizeof(char));
	printf("size of type 'int' on computer : %lu bytes \n", sizeof(int));
	printf("size of type 'float' on computer : %lu bytes\n", sizeof(float));
	printf("size of type of my variable n on computer : %lu bytes\n", sizeof(n));
}
