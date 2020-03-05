/*
 * node.h
 *
 *  Created on: Feb. 24, 2020
 *      Author: verma
 */

#ifndef NODE_H_
#define NODE_H_
#include <stdio.h>

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
 Adds a new node to the beginning of thr list
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


#endif /* NODE_H_ */
