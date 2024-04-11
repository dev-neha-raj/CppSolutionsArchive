#include <stdio.h>
#include <stdlib.h>
struct queue{
	int size;
	int f;
	int r;
	int* arr;	
};
int isEmpty(struct queue *q){
	if(q->r== q->f){
		return 1;
	}
	else {
		return 0;
	}
}
int isFull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
// enqueue function
void enqueue(struct queue *q, int val){
	if(isFull(q)){
		printf("Queue is Full");
	}
	else {
		q->r++;
		q->arr[q->r]=val;
		printf("Enqueued Element: %d\n",val);
	}
}
// dequeue function
int dequeue(struct queue *q){
	int a=-1;
	if(isEmpty(q)){
		printf("Queue is empty");
	}
	else{
		q->f++;
		a= q->arr[q->f];
	}
}
int main(){
	struct queue q;
	q.size =100;
	q.r=q.f=0;
	q.arr = (int*) malloc(q.size*sizeof(int));
	enqueue(&q,13);
	enqueue(&q,23);
	enqueue(&q,54);
	printf("\n");
	printf("Dequeueing element %d\n",dequeue(&q));
	printf("Dequeueing element %d\n",dequeue(&q));
	printf("Dequeueing element %d\n",dequeue(&q));
	printf("\n");
	enqueue(&q,43);
	enqueue(&q,33);
	enqueue(&q,84);
	
	if(isEmpty(&q)){
		printf("Queue is empty\n");
	}
	if(isFull(&q)){
		printf("Queue is full\n");
	}
return 0;		
}
