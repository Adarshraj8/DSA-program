#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data; 
	struct node *next;
}node;

node* deleteNodeAsMiddleNode(struct node *start)
{
   if(start == NULL)
   return NULL;
   if(start->next == NULL)
   {
   	 
   	return NULL;
   }
   struct node *slow_ptr = start;
   struct node *fast_ptr = start;
   
   struct node *prev;
   while(fast_ptr != NULL && fast_ptr->next != NULL)
   {
   	fast_ptr = fast_ptr->next->next;
   	prev = slow_ptr;
   	slow_ptr = slow_ptr->next;
   
   }
   prev->next = slow_ptr->next;
   free (slow_ptr);
   return start;
   
}
int main()
{	
	int a , i = 1 , n ,r , head_value; 
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
	while(p!=NULL)
	{
		printf("\t %d", p->data);
		p = p->next;
	}
	printf("\n After deletion of Middle node :");

     start = deleteNodeAsMiddleNode(start);
     
     printf(" ");
    p = start;
    while(p!=0){
    printf("\t %d",p->data);
    p = p->next;
     }
     return 0;
     }


