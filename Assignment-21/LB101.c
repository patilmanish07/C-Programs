//Program which reverse each element of linkedlist.
// Input:- 11->28->17->41->6->89.
// Output :- 11->82->71->14->6->98.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node * next;

};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void Insert(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*head) == NULL)
    {
        (*head) = newn;

    }

    else
    {
        PNODE temp = NULL;
        temp = (*head);

        while ((temp -> next) != 0)
        {
            temp  = temp ->next;
        }

        temp -> next = newn;

    }

}


void Display(PNODE head)
{
    while(head != NULL)
    {   
        printf("| %d |->",head -> data);
        head = head -> next;
    }

}

void Reverse(PNODE head)
{
    int iRev = 0;

   
}


int main()
{
    PNODE first = NULL;

    int iCnt = 0, iValue = 0;

    printf("Enter no of elements:");
    scanf("%d",&iEle);

    for(iCnt = 1; iCnt <= iEle;iCnt++)
    {
        printf("Enter %dth Element:",iCnt);
        scanf("%d",&iValue);

        Insert(&first,iValue);
    }

    Display(first);
   
    Reverse(first);
	
	return 0;

}