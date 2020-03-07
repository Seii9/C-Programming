/*node.h
 ============================================================================
 Name        : Lab4.c
 Author      : Shubam Verma, Kyle Keogan
 Version     :
 Copyright   :
 Description : Lab4 C-Programming CST8234
 ============================================================================
 */

#ifndef NODE_H_
#define NODE_H_



/* Add employee struct and Node struct */

typedef struct employee{
	char lastName[20];
	char firstName[20];
}employee_t;

typedef struct Node{
	employee_t* emp;
	struct Node* next;
}node_t;

/*
 Prints all employee names in the following format
 LastName, firstName
 */
void print_list (node_t * head);

/*
 Adds a new node to the end of the list
 */
void addToEnd(node_t **head, employee_t *employee);

/*
 Adds a new node to the beginning of the list
 */
void addToStart(node_t ** head, employee_t *employee);

/*
 Remove the first node in the list
 */
void removeFromStart(node_t ** head);

/*
 Removes the last node in the list
 */
void removeLast(node_t **head);

/*
 Removes a node by index
 */
void remove_by_index(node_t ** head, int n);

/*
 * Takes user input for adding nodes information
 * returns constructed employee_t node pointer
 */
void addEmpFunc(employee_t *emp1, int i);

/*
 * Provides text prompts and updates for user in sequence.
 */
void text(int *counter);


#endif /* NODE_H_ */
