/*
echo  Argumente ausgeben (verbos)
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Das Programm |%s| hat %i Argumente\n", argv[0], argc);
	
	while (--argc) {
		printf("%s ", *++argv);
	}
	putchar('\n');
	return 0;
}
