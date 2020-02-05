#include "empManager.h"
#include <stdio.h>

void empTestandAdd(int *empId, int empCount) {
	int empIdInput = 0;
	int empIndexCount = 0;
	int countlen;

	while (empIndexCount < empCount) {

		printf("%s", "Please Enter Employee ID: ");
		scanf("%d", &empIdInput);
		countlen = 0;
		while (empIdInput > 0 && empIndexCount < empCount) {
			empIdInput /= 10;
			countlen++;
		}
		if (countlen == 5) {
			empId[empIndexCount] = empIdInput;
			empIndexCount++;
		} else {
			printf("%s\n", "Invalid employee ID length");
		}
	}
}
