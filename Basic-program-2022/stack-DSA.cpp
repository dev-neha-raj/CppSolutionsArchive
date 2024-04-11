#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
 
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = new int;
    // before pushing the element...
    if(isEmpty(s)){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }
    // after pushing the element...
    s->arr[0]=7;
    s->top++;
    if(isEmpty(s)){
    	cout<<"The stack is empty"<<endl;
	}
     else{
        cout<<"The stack is not empty"<<endl;
    }  
}
