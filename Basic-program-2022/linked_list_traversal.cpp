#include<stdio.h>
#include<stdlib.h>
struct Node *f=NULL;
struct Node *r= NULL;

struct Node{
	int data;
	struct Node *next;
};
//linked list traversal
void LL_Traversal(struct Node* ptr){
	printf("Printing the elements of the Linked List\n");
	while(ptr != NULL){
		printf("Elements:%d\n",ptr->data);
		ptr= ptr->next;
	}	
}
// enqueue operation
void enqueue(int val){
	struct Node *n= (struct Node *) malloc(sizeof(struct Node));
	if(n==NULL){
		printf("Queue is full\n");
	}
	else {
		n->data=val;
		r->next=NULL;
		if(f==NULL){
			f=r=n;
		}
	   else{
	   	r->next=n;
	   	r=n;
	   }
	   }
	}
//dequeue operation 
int dequeue(){
	int val=-1;
	struct Node *ptr= f;
	if (f==NULL){
		printf("Queue is empty\n");
	}
	else{
		f=f->next;
		val= ptr->data;
		free(ptr);
	}
	return val;
}
// driver code
int main(){
	LL_traversal(f);
	printf("Dequeueing the element\n",dequeue);
	enqueue(23);
	enqueue(13);
	enqueue(45);
	enqueue(56);
	printf("Dequeueing the element\n",dequeue);
	printf("Dequeueing the element\n",dequeue);
	printf("Dequeueing the element\n",dequeue);
	printf("Dequeueing the element\n",dequeue);
	LL_traversal(f);
	return 0;	
}

