/*
 ============================================================================
 Name        : Assign1.c
 Author      : Kyle Keogan
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "helper.h"
#include "empManager.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int empCount;

	printf("%s\n",
			"Please enter the number of employees you would like to add: ");
	scanf("%d", &empCount);

	int empId[empCount];
	empTestandAdd(empId, empCount);

	//printIntArray(empId, empCount);

	return EXIT_SUCCESS;
}
