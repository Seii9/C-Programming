/*
 ============================================================================
 Name        : Lab4.c
 Author      : Shubam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	node_t *head = NULL;
	employee_t *emp1;

	int i = 0;

	/*6. Adding to the end of the list. -----------------------------*/
	for (i = 0; i < 3; i++) {
		emp1 = (employee_t*) malloc(sizeof(employee_t));
		printf("Enter details of Employee %d\n", i + 1);

		printf("First Name: ");
		scanf("%s", emp1->firstName);

		printf("Last Name: ");
		scanf("%s", emp1->lastName);

		addToEnd(&head, emp1);

	}
	printf("Adding to the end of the list\nList: \n");
	print_list(head);

	/*7. Adding to the Start of the list. -----------------------------*/
	for (i = 0; i < 3; i++) {
		emp1 = (employee_t*) malloc(sizeof(employee_t));
		printf("Enter details of Employee %d\n", i + 1);

		printf("First Name: ");
		scanf("%s", emp1->firstName);

		printf("Last Name: ");
		scanf("%s", emp1->lastName);

		addToStart(&head, emp1);

	}
	printf("Adding to the Start of the list\nList: \n");
	print_list(head);

	/*8. Delete the first three elements ------------------------------*/
	printf("\nList: \n");
	for (i = 0; i < 3; i++) {
		removeFromStart(&head);
	}

	printf("Delete the first three elements\nList: \n");
	print_list(head);

	/*9. Delete the Last three elements ------------------------------*/
	for (i = 0; i < 3; i++) {
		removeLast(&head);
	}
	printf("Delete the Last three elements\nList: \n");
	print_list(head);

	/*read 3 new employee information from the user and add them to the
	end of the list.*/

	for (i = 0; i < 3; i++) {
		emp1 = (employee_t*) malloc(sizeof(employee_t));
		printf("Enter details of Employee %d\n", i + 1);

		printf("First Name: ");
		scanf("%s", emp1->firstName);

		printf("Last Name: ");
		scanf("%s", emp1->lastName);

		addToEnd(&head, emp1);

	}

	print_list(head);

	printf("Last:\n");

	remove_by_index(&head,1);

	print_list(head);



}

