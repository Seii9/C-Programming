/*
 ============================================================================
 Name        : Lab2.c
 Author      : Shubam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int pnum, arr[7], i = 0, count = 0, j = 0;

	printf("Please enter a phone number: ");
	scanf("%d", &pnum);

	while (pnum > 0) {
		arr[i] = pnum % 10;
		pnum = pnum / 10;
		i++;
		count++;
	}

	for (j = count - 1; j >= 0; j--) {
		if (j == 3) {
			printf("-");
		}
		printf("%d", arr[j]);
	}
}
