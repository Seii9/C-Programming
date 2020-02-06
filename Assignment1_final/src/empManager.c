#include "empManager.h"
#include <stdio.h>

void empTestandAdd(int *empId, int empCount) {
	long empIdInput = 0;
	short empIndexCount = 0;
	short countLen;
	long divider;
	while (empIndexCount < empCount) {

		printf("%s", "Please Enter Employee ID: ");
		scanf("%ld", &empIdInput);
		countLen = 0;
		divider = empIdInput;
		while (divider > 0 && empIndexCount < empCount) {
			divider /= 10;
			countLen++;
		}
		if (countLen == 5) {
			empId[empIndexCount] = empIdInput;
			empIndexCount++;
		} else {
			printf("%s\n", "Invalid employee ID length");
		}
	}
}
