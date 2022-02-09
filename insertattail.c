#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data; 
	struct node *next;
}node;
/*void printdata(struct node* r)
{
	while(r != NULL)
	{
		printf("%d \n",r->data);
		r = r->next;
	}
	
}*/
node* insertNodeAsTailNode(int Tail_value, node* start)
{
    node *p;
   
    
    p = (node*)malloc(sizeof(node));
    struct node *temp = start;
    while(temp->next != NULL)
    {
    	temp = temp->next;
    	
	}
	temp->next = p;
    
    
    p->next = NULL;
    p->data = Tail_value;
   
    
    return start;
    
}
int main()
{	
	int a , i = 1 , n ,r , Tail_value; 
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
	 
 // printf(" Before insertion \n");
//  printdata(start);
  
	printf("\n Enter the value which you want to include as tail node");
	scanf("%d",&Tail_value);
     start =insertNodeAsTailNode(Tail_value , start);
  printf("Node is sucessfully inserted :\n");
  
  printf("after insertion \n");
  p=start;
 // printdata(start);
  while(p != NULL)
	{
		printf("%d \n",p->data);
		p = p->next;
	}
return 0;
}


