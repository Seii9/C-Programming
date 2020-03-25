/*
 ============================================================================
 Name        : Lab5.c
 Author      : Kyle Keogan
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Simple FileIO program to illustrate reading from a file and outputting to a new file.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char buffer[255];
	FILE *fileIn = fopen("FileIn.txt", "r");
	FILE *fileOut = fopen("FileOut.txt", "w");

	if (fileIn == NULL) {
		printf("FileIn failed to open, exiting program...");
		return 0;
	} else if (fileOut == NULL) {
		printf("FileOut failed to open, exiting program...");
		return 0;
	} else {

	while (fscanf(fileIn, "%s", buffer) == 1)
	{
		fprintf(fileOut, "The word I read from FileIn.txt -> %s\n", buffer);
	}

fclose(fileIn);
fclose(fileOut);
	}
	return EXIT_SUCCESS;
}
