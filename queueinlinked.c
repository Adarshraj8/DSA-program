#include <stdio.h>
#include <stdlib.h>

struct element{
	int data;
	struct element *link;
	
};
 typedef struct element node;
node *cur, *first,*last;

void create();
void insertion();
void delete();
void display();

void create()
{
	int i,n;
		printf("\n enter no of elements in the list \n");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			if(i==0)
			{
				first = (node*)malloc(sizeof(node));
				cur = first;
			}
			else
			{
				cur->link =(node*)malloc(sizeof(node));
				cur=cur->link;
			}
			printf("enter the data \n");
			scanf("%d",&cur->data);
			
			}
			
			last=cur;
			cur->link=NULL;
			
			
		}
		
		void insertion()
		{
			printf("enter the data to insert \n");
			cur = (node*)malloc(sizeof(node));
			scanf("%d",&cur->data);
			cur->link==NULL;
			last->link=cur;
			last=cur;
			
		}
		
		void delete()
		{
			if(first==NULL)
			printf("queue is empty\n");
			else{
			cur =first;
			first = first->link;
			cur->link=NULL;
			printf("\ndeleted elements is %d\n",cur->data);
			free(cur);
			
		}
	}

      void display()
      {
      	cur = first;
      	while(cur!=NULL)
      	{
      		printf("\n");
      		cur=cur->link;
		  }
	  }
	  
	  void main()
	  {
	  	int op;
	  	while(1)
	  	{
	  		printf("*******Menu*******\n");
	  		printf("1.create \n 2.insert \n 3.delete \n 4.exit \n");
	  		printf("enter option \n");
	  		scanf("%d",&op);
	  		
	  		switch(op)
	  		{
	  			case 1: create();
	  			break;
	  			case 2: insertion();
	  			break;
	  			display();
	  			break;
	  			case 3: delete();
	  			break;
	  			display();
	  			break;
	  			
	  		
			  	case4:return(0);
			  	
	  			default:printf("wrong choise");
			  }
		  }
		
	  	
	  }
	  

