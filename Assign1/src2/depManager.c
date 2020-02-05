#include "depManager.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void depTestandAdd(char *depArr, int depCount) {

	char *depName=(char *) malloc(sizeof(char)*8);

	int depIndexCount = 0;

	while (depIndexCount < depCount) {
		printf("%s\n", "Enter Department Name: ");
		scanf("%s",depName);
		if (strlen(depName) == 7) {
			depArr[depIndexCount] = depName;
			depIndexCount++;
		} else {
			printf("Invalid length of DepName");
		}
	}
}
