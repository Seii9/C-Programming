
#include "empManager.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int empCount;

	printf("%s\n",
			"Please enter the number of employees you would like to add: ");
	scanf("%d", &empCount);

	int empId[empCount];
	empTestandAdd(empId, empCount);

	//printIntArray(empId, empCount);


	/*--------------------------------------------- Department */

	int depCount;

	printf("%s\n", "Enter number of Departments in company.");
	scanf("%d", &depCount);

	char depArr[depCount];

	depTestandAdd(depArr, depCount);



	return EXIT_SUCCESS;
}
