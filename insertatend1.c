#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

struct Node

{

 int data;

 struct Node* next;

};

struct Node* head = NULL;

void insertNode(int);
void printNode();



void insertNode(int x)

{

 struct Node* newNode = (struct Node* )malloc(sizeof(struct Node));

 struct Node* temp1 = head;



 newNode->data = x;

 newNode->next = NULL;

 if(head == NULL)

 {

  head = newNode;

  return ;
 }



 while(temp1->next != NULL)

 {

  temp1 = temp1->next;

 }

 temp1->next = newNode;

}

void printNode()

{

 struct Node* temp2 = head;

 if(temp2 == NULL)

 {

  printf("list is empty");

  return;

 }

 printf("list is:");

 while(temp2 != NULL)

 {

  printf("%d ",temp2->data);

  temp2 = temp2->next;

 }

 printf("\n");

}



void main()

{

 clrscr();
        insertNode(445);
 printNode();

 insertNode(2);

 printNode();



}

