#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;  
	struct node *next;
}node;
/*void printdata(struct node* p )
{
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}*/
 
node* deleteatnode( node* start)
{

	struct node* p = start;
	struct node* q = start->next;
	while(q->next!=NULL)
	{
		p = p->next; 
		q = q->next;
		
	}
	p->next = NULL;
	free(q);
	return start;	
}
int main()
{	
	int a , i = 1 , n ,r , node_data , position;     
	node *p,*q,*start;
	printf("Enter the number of nodes");
	scanf("%d",&n);

	printf("Enter node %d  \n",i);   
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;
	p->next = NULL;
	start = p; 

	for(i=2;i<=n;i++)                
	 	{
	 		printf("Enter node %d  \n",i);
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
		}

	p = start;

      printf("after deletoin\n");
     start = deleteatnode(start);
      p = start;
   // printdata(start);
     p=start;
       // p=start;
       while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
	
return 0;
}
