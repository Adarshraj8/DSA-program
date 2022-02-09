#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main()
{
	int i,n,a;
	struct node *p , *q , *head;

	printf("Enter the number of nodes");
	scanf("%d",&n);

	printf("Enter the value of head node");
	scanf("%d",&a);

	q = (struct node *)malloc(sizeof(struct node));
	q->data = a;
	q->next = NULL;

	head = q;
	p = head;

	for(i=1;i<n;i++)
	{
    printf("Enter the value of next node");
	scanf("%d",&a);

	q = (struct node *)malloc(sizeof(struct node));
	q->data = a;
	q->next = NULL;

	p->next = q;
	p = p->next;
	}

	printf(" ");

	p = head;

	while(p!=0){
		printf(" %d ",p->data);
		p = p->next;
	}
	return 0;
}
