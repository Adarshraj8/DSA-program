#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

struct Node* head;
struct Node* end;

/*void insertatend(int data)

{

    	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));



    	temp->data=data;

    	temp->next=NULL;

    	if(head==NULL)

    	{



        		head=temp;

        		end=temp;

        		return;

    	}

    	end->next=temp;

    	end=temp;

}*/


struct Node* head;

void insertatend(int data)

{

    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

    temp->data = data;

    temp->next = head;

    head = temp;

}

void Delete(int n)

{

    struct Node* temp1 = head;

    if(n==1){

        head = temp1->next;

        free(temp1);

        return;

    }

    int i;

    for(i=1;i<n-1;i++)

    {

        temp1 = temp1->next;

    }

    struct Node* temp2 = temp1->next;

    temp1->next = temp2->next;

    free(temp2);

}

void Print()

{

    struct Node* temp = head;

    printf("List is:");

    while(temp != NULL)

    {

        printf(" %d",temp->data);

        temp= temp->next;

    }

    printf("\n");

}

int main(){

    head = NULL;

    end = NULL;

    insertatend(4);

    insertatend(2);

    insertatend(3);

    insertatend(5);
    insertatend(6);

    Print();

    int n;

    printf("Enter a position\n");

    scanf("%d",&n);

    Delete(n);

    Print();

} 
