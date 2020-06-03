// LPetelin_lab14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct queue_node {
	char job[20];
	queue_node *next;
};

queue_node *head_ptr;
queue_node *tail_ptr;

const int QUEUE_EMPTY = 2;
const int QUEUE_ERROR = 1;
const int NOERROR = 0;

void handle_choice(int choice);
int add_job(char *job);
void display_queue();
int pop(char *job);

int pop(char *job)
{
	queue_node *temp_ptr;
	int status = NOERROR;

	if (head_ptr != NULL) {
		temp_ptr = head_ptr->next;
		strcpy(job, head_ptr->job);
		delete head_ptr;
		head_ptr = temp_ptr;
	}
	else {
		status = QUEUE_EMPTY;
	}

	return(status);
}
void display_queue() {
	queue_node *current_ptr;

	current_ptr = head_ptr;

	cout << endl;
	if (current_ptr != NULL) {
		do {
			cout << current_ptr->job << endl;
			current_ptr = current_ptr->next;
		} while (current_ptr != NULL);
	}
	else {
		cout << "Queue empty.\n";
	}
}

int add_job(char *job) {
	int status = NOERROR;

	queue_node *new_node;

	new_node = new queue_node;

	if (new_node == NULL) {
		status == QUEUE_EMPTY;
	}
	else {
		strcpy_s(new_node->job, job);
		if (tail_ptr == NULL) {
			new_node->next = NULL;
			tail_ptr = new_node;
			head_ptr = new_node;
		}
		else {
			tail_ptr->next = new_node;
			new_node->next = NULL;
			tail_ptr = new_node;
		}
	}

	return status;
}

int main()
{
	cout << "Welcome to Luke Petelin's Lab 14!" << endl;

	int choice;

	tail_ptr = NULL; 
	head_ptr = NULL; 
	do
	{
		cout << "0 - Exit\n";
		cout << "1 - Add a job to the queue\n";
		cout << "2 - Display queue\n";
		cout << "3 - Remove the top job from the queue\n";
		cout << "Enter choice: ";
		cin >> choice;
		if (choice != 0)  {
			handle_choice(choice);
		}
	
	} while (choice != 0); 

	return 0;
} 

void handle_choice(int choice)
{
	char job[20];
	switch (choice)
	{
	case 1:  
		cin.ignore(80, '\n');
		cout << "\nEnter job to add: ";
		cin.get(job, 20);
		if (add_job(job) == QUEUE_ERROR)
		{
			cout << "\nQUEUE ERROR\n\n";
		}
		break;
	case 2: 
		if (head_ptr != NULL)
		{
			display_queue();
		}
		else
		{
			cout << "\nQUEUE EMPTY\n\n";
		}
		break;
	
	case 3:  
		if (pop(job) == QUEUE_EMPTY)
		{
			cout << "\nQUEUE EMPTY\n\n";
		}
		else
		{
			cout << endl << job << " has been popped off the stack.\n";
		}
		break;
	
	default:
		cout << "\nInvalid choice: Enter 0, 1, 2, or 3.\n\n";
		break;
	}
}
