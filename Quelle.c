//by Ma77hias

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>



void main(void)
{
	char letter;
	int zahl;
	printf("Gib einen KLEIN Buchstaben ein: ");
	
	letter = getchar();
	if (letter < ((char)97 ) )
	{
		printf("\nIch sagte KLEIN Buchstaben!!!\n");
	}
	else {
		zahl = (int)letter;
		printf("\nDeine Zahl ist: %d bzw. buchstabe: %c", zahl, letter);
		printf("\n\n\n");

		for (int i = 97; i <= zahl; i++)
		{
			printf("Buchstabe %c steht auf PLatz %d\n", (char)i, i - 96);
		}
	}
	printf("\n\n\n");
	system("pause");
}
