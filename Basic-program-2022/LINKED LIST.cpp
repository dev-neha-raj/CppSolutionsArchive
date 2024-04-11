#include<iostream>
using namespace std;
//creating the linked list
struct node{
	int data;
	struct node *next;	
};

int main()
{
	// declaration of nodes
struct node * first;
struct node* second; 
struct node * third;
// memory allocation 
first= (struct node*)malloc(size of(struct node));
second= (struct node*)malloc(size of(struct node));
third= (struct node*)malloc(size of(struct node));
first->data=10;
first->next=second;

Second->data=20;
second-> next= third;

third-> data=30;
third->next=NULL;	
}
