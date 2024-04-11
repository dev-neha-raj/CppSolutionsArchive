#include<iostream>
using namespace std;
// performing push and pop operations, before performing that operation
// let's check if stack is empty or full...
struct stack{
	int size; // determines the size of the array
	int top; // points to the top index of an element
	int* arr;// assign memory
};
int isEmpty(struct stack* s){
 	if(s->top==-1){
 		return 1;
	 }
 	else{
 		return 0;
	 }	
 }
int isFull(struct stack* s){
 	if(s->top==s->size-1){
 		return 1;
	 }
	 else{
	 	return 0;
	 }
 }
 int main(){
 	struct stack s;
 	 s->size= 40;
 	 s->top= -1;
 	 s->arr= new int;
 	 if(isEmpty(s)){
 	 	cout<<"The stack is empty"<< ;
	  }
	  else{
	  	cout<<"The stack is full"<< ;
	  }
 }
