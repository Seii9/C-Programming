/*
 * nodes.c
 *
 *  Created on: Feb. 24, 2020
 *      Author: verma
 */
#include <stdlib.h>
#include <stdio.h>
#include "node.h"


void print_list(node_t *head) {
	node_t *current = head;
	while (current != NULL) {
		printf("%s, %s\n", &current->emp->lastName, &current->emp->firstName);
		current = current->next;
	}
}

void addToEnd(node_t **head, employee_t *employee) {

	if (*head == NULL) {
		(*head) = (node_t*) malloc(sizeof(node_t));
		(*head)->emp = employee;
		(*head)->next = NULL;
	} else {
		node_t *temp = (node_t*) malloc(sizeof(node_t));
		temp->emp = employee;
		temp->next = NULL;
		node_t *p = (node_t*) malloc(sizeof(node_t));
		p = *head;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = temp;
	}
}

void removeLast(node_t **head) {

	node_t *current = *head;

	if ((*head)->next==NULL) {
		/*current=(*head)->next;*/
		free(*head);
		*head=NULL;
		return;
	}

	/*get to the second to the last node in the list*/

	while (current->next->next != NULL) {
		current = current->next;
	}

	free(current->next);
	current->next = NULL;

	/*This is not working*/
	/*IF there's only one item in the list, remove it*/

}

void addToStart(node_t **head, employee_t *employee) {
	node_t *new_node;
	new_node = (node_t*) malloc(sizeof(node_t));
	new_node->emp = employee;
	new_node->next = *head;
	*head = new_node;
}

void removeFromStart(node_t **head) {

	node_t *next_node = NULL;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
}
void remove_by_index(node_t ** head, int n){

	node_t* current= *head;

	for(int i=0;i<n-1;i++){
		current=current->next; /*i=0 -> 1*/
	}

/*

	node_t* temp;
	temp = current;   1 -> 2
	current=temp; current->next=current->next->next;
	free(temp);
*/


	node_t* temp;
	temp = current->next;  /* 1 -> 2*/
	current->next=temp->next; /*current->next=current->next->next;*/
	free(temp);




}


