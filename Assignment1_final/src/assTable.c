#include "assTable.h"

#include <stdio.h>
#include <string.h>

int searchEmpId(int *array, int empCount, int searchTerm) {
	int index;

	for (index = 0; index < empCount; index++) {
		if (array[index] == searchTerm) {
//			printf("%d", index); //for testing purposes
			return index;
		}

	}
	return -1;
}

int searchDepArray(char *array[], int depCount, char *searchTerm) {
	int index;

	for (index = 0; index < depCount; index++) {
		if (strcmp((array[index]), searchTerm) == 0) {
//			printf("%d", index); //for testing purposes
			return index;
		}

	}
	return -1;
}
