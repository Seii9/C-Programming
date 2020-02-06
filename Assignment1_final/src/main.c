#include <stdio.h>

#include "assTable.h"
#include "depManager.h"
#include "empManager.h"
#include "helper.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int empCount;

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

	char *ptrDepNameArry[depCount];

//    char depArr[depCount];

	depTestandAdd(ptrDepNameArry, depCount);

//    /---Print DEp-------/

	printStringArray(ptrDepNameArry, depCount);

	int assTable[empCount][depCount];
	initilaize2DArray((int*) assTable, empCount, depCount);

	/* ------------Menu------------------------------------- */
//	int end=-5;
	int choice = 0;

	while (choice != 4) {
		int empSearchTerm;
		char *depSearchTerm;
		int addedEmpId, addedDepId;
		empSearchTerm = 0;
		printf("%s",
				"Choose one of 4 actions:\n1. Adding an employee to a department.\n2. Removing an employee from a department.\n3. See Association table.\n4. Quit the program.\n");
		scanf("%d", &choice);

		switch (choice) {

		case 1:

			//Prompting for Emp Id.
			printf("%s", "Please enter employee id: ");
			scanf("%d", &empSearchTerm);

			//Collecting the index of the Employee.
			addedEmpId = searchEmpId(empId, empCount, empSearchTerm);

			//Prompting for Dep Id.
			printf("%s", "Please enter department id: ");
			scanf("%s", depSearchTerm);

			//Collecting the index of the Department.
			addedDepId = searchDepArray(ptrDepNameArry, depCount,
					depSearchTerm);

			if (addedDepId < 0) {
				printf("\n Unable to find the entered Department.");
			} else if (addedEmpId < 0) {
				printf("\n Unable to find the entered Employee.");
			} else {
				//setting the value to 1(Work for the Department).
				assTable[addedEmpId][addedDepId] = 1;
			}
			break;
		case 2:

			//Prompting for Emp Id.
			printf("%s", "Please enter employee id: ");
			scanf("%d", &empSearchTerm);

			//Collecting the index of the Employee.
			addedEmpId = searchEmpId(empId, empCount, empSearchTerm);

			//Prompting for Dep Id.
			printf("%s", "Please enter department id: ");
			scanf("%s", depSearchTerm);

			//Collecting the index of the Department.
			addedDepId = searchDepArray(ptrDepNameArry, depCount,
					depSearchTerm);

			if (addedDepId < 0) {
				printf("\n Unable to find the entered Department.");
			} else if (addedEmpId < 0) {
				printf("\n Unable to find the entered Employee.");
			} else {
				//setting the value to 0(Doesn't work for the Department).
				assTable[addedEmpId][addedDepId] = 0;
			}

			break;
		case 3:

			print2DArray(*assTable, empCount, depCount);
			break;
		case 4:
			printf("Exiting program...");
//			end = 1;
			break;
		default:
			printf("Invalid choice\n");
		}
	}
	return 0;
}
