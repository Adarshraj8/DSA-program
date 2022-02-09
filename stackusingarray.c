#include<stdio.h>

#define MAX_SIZE 101

int A[MAX_SIZE]; 
int top = -1;  
 
void push(int x) 
{
  if(top == MAX_SIZE -1) { 
		printf("Error: stack overflow\n");
		return;
	}
	top++;
	
	A[top] = x;
}

void pop() 
{
	if(top == -1) { 
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

int Top() 
{
	return A[top];
}

int IsEmpty()
{
    if(top == -1) return 1;
    return 0;
}

void print() {
	int i;
	printf("Stack: ");
	for(i = 0;i<=top;i++)
		printf("%d ",A[i]);
	printf("\n");
}

int main() {	
 
     
	push(5);print();

	push(10);print();
    push(6);print();

	push(12);print();

     pop();print();
	push(13);print();

}

