#include <stdio.h>
/**
 * creating a function to loop through alphabets
 */
int print_alphabet(void)
	{
		char alpha='a';
		while(alpha<='z'){
			putchar(alpha);
		}
	}
/**
 * calling function in main
 */
int main(void)
	{
		print_alphabet();
		putchar("\n");
		return (0);
	}
