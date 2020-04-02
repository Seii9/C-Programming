/*
 ============================================================================
 Name        : Lab5.c
 Author      : Kyle Keogan, Shubham Verma
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Simple FileIO program to illustrate reading from a file and outputting to a new file.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *inPath = "FileIn.txt";
	char *outPath = "FileOut.txt";
	char buffer[255];

	/*
	 * "w" arg is used in the fileOut File Pointer because the lab specifically says the file does not exist,
	 * it is however more dangerous and therefore often "a" arg is preferred.
	 */
	FILE *fileIn = fopen(inPath, "r");
	FILE *fileOut = fopen(outPath, "w");

	/*
	 *Checking for failure to open conditions of both FILE pointers, and ending program if so.
	 */
	if (fileIn == NULL) {
		fprintf(stderr, "FileIn failed to open, exiting program...");
		return 0;
	} else if (fileOut == NULL) {
		fprintf(stderr, "FileOut failed to open, exiting program...");
		return 0;
	} else {
		/*
		 * While there is still strings in fileIn File, using default delimiters, and while no errors are presented
		 * from fileOut or fileIn File pointers, this loop will print using the buffer[] as a bridge between fscanf and fprintf.
		 */
		while (fscanf(fileIn, "%s", buffer) == 1 && ferror(fileOut) == 0
				&& ferror(fileIn) == 0) {
			fprintf(fileOut, "The word I read from FileIn.txt -> %s\n", buffer);
		}

		/*
		 * Closing files after use to free their resources.
		 */
		fclose(fileIn);
		fclose(fileOut);
		printf("File Copied!");
	}
	return EXIT_SUCCESS;
}
