/*Lab4.c
 ============================================================================
 Name        : Lab4.c
 Author      : Shubam Verma, Kyle Keogan
 Version     :
 Copyright   :
 Description : Lab4 C-Programming CST8234
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "node.h"


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	node_t *head = NULL;
	employee_t *emp1;

	int *counter = (int*)malloc(sizeof(int));
	*counter = 0;
	int i = 0;

	/*6. Adding to the end of the list. -----------------------------*/
	text(counter);
	for (i = 0; i < 3; i++) {
		emp1 = (employee_t*) malloc(sizeof(employee_t));
		addEmpFunc(emp1,i);
		addToEnd(&head, emp1);
	}
	text(counter);
	print_list(head);

	/*7. Adding to the Start of the list. -----------------------------*/
	text(counter);
	for (i = 0; i < 3; i++) {
		emp1 = (employee_t*) malloc(sizeof(employee_t));
		addEmpFunc(emp1,i);
		addToStart(&head, emp1);
	}
	text(counter);
	print_list(head);

	/*8. Delete the first three elements ------------------------------*/
	text(counter);
	print_list(head);
	for (i = 0; i < 3; i++) {
		removeFromStart(&head);
	}
	text(counter);

	print_list(head);

	/*9. Delete the Last three elements ------------------------------*/
	for (i = 0; i < 3; i++) {
		removeLast(&head);
	}
	text(counter);
	print_list(head);

	/*read 3 new employee information from the user and add them to the
	end of the list.---------------------------------------------------*/
	text(counter);


	for (i = 0; i < 3; i++) {
		emp1 = (employee_t*) malloc(sizeof(employee_t));
		addEmpFunc(emp1,i);
		addToEnd(&head, emp1);
	}

	/*Deleting 1 element at index 1-------------------------------------*/

	text(counter);
	print_list(head);

	text(counter);


	remove_by_index(&head,1);

	print_list(head);

	/*Exiting program----------------------------------------------------*/
	text(counter);

}

