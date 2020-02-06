#include <stdio.h>

#include "assTable.h"
#include "depManager.h"
#include "empManager.h"
#include "helper.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int empCount;
	int end = 0;

	printf("%s\n",
			"Please enter the number of employees you would like to add: ");
	scanf("%d", &empCount);

	int empId[empCount];
	empTestandAdd(empId, empCount);

	printIntArray(empId, empCount);

	/*--------------------------------------------- Department */

	int depCount;
//    char size;

	printf("%s\n", "Enter number of Departments in company.");
	scanf("%d", &depCount);

	char ptrDepNameArry[depCount];

//    char depArr[depCount];

	depTestandAdd(ptrDepNameArry, depCount);

//    /---Print DEp-------/

//    printStringArray(ptrDepNameArry, depCount);

	int assTable[empCount][depCount];
	initilaize2DArray((int*) assTable, empCount, depCount);

	/* ------------Menu------------------------------------- */
	int choice = 0;
	int empSearchTerm;
	char *depSearchTerm;
	while (end < 1) {
		choice = 0;
		empSearchTerm = 0;
		printf("%s",
				"Choose one of 4 actions:\n1. Adding an employee to a department.\n2. Removing an employee from a department.\n3. See Association table.\n4. Quit the program.\n");
		scanf("%d", &choice);

		switch (choice) {

		case 1:
			printf("%s", "Please enter employee id: ");
			scanf("%d", &empSearchTerm);
			printf("%d\n", searchEmpId(empId, empCount, empSearchTerm));
			printf("%s", "Please enter department id: ");
			scanf("%s", depSearchTerm);
			printf("%d", searchDepArray(ptrDepNameArry, depCount, depSearchTerm));
			break;
		case 2:

			break;
		case 3:

			print2DArray((int*) assTable, empCount, depCount);
			break;
		case 4:
			printf("Exiting program...");
			end = 1;
			break;
		default:
			printf("Invalid choice\n");
		}
	}
	return 0;
}
