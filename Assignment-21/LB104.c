//Program which display largest digits in the linkedlist.(don't consider 0)
// Input:- 11->250->532->419.
// Output :- 1->5->5->9.

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

void DisplayLarge(PNODE head)
{
    int iMax = 0;

    while(head != NULL)
    {
        if(iMax < (head -> data))
        {
            iMax = (head -> data);
        }

        head = head -> next;
    }
	printf("Largest element in the linkedlist is :",iMax);
}


int main()
{
    PNODE first = NULL;

    int iCnt = 0, iValue = 0,iSer = 0, iRet = 0, iEle=0;

    printf("Enter no of elements:");
    scanf("%d",&iEle);

    for(iCnt = 1; iCnt <= iEle;iCnt++)
    {
        printf("Enter %dth Element:",iCnt);
        scanf("%d",&iValue);

        Insert(&first,iValue);
    }

    Display(first);
   
    DisplayLarge(first);
	
	return 0;

}