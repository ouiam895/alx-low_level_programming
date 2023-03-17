#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled
 * Return: Always 0(Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char is %lu Bytes\n",(unsigned long)sizeof(a));
printf("Size of int is %lu Bytes\n",(unsigned long)sizeof(b));
printf("Size of long int is %lu Bytes\n",(unsigned long)sizeof(c));
printf("Size of long long int is %lu Bytes\n",(unsigned long)sizeof(d));
printf("Size of float is %lu Bytes\n",(unsigned long)sizeof(f));
}
