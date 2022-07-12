//Program which return maximum/largest no. in the linkedlist.
// Input:- 110->230->320->240.
// Output :- 320

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
        printf("%d\t",head -> data);
        head = head -> next;
    }

}

int MaximumElement(PNODE head)
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
    return iMax;
}


int main()
{
    PNODE first = NULL;

    int iCnt = 0, iValue = 0, iSer = 0, iRet = 0, iEle=0;

    printf("Enter no of elements:");
    scanf("%d",&iEle);

    for(iCnt = 1; iCnt <= iEle;iCnt++)
    {
        printf("Enter %dth Element:",iCnt);
        scanf("%d",&iValue);

        Insert(&first,iValue);
    }

    
    Display(first);
   
    iRet = MaximumElement(first);

    printf("Maximum element in the linkedlist is :%d",iRet);

}