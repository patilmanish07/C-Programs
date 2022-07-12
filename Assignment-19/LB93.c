// Program in which addition of all elements in linkedlist.
// Input:- 10->20->30->40.
// Output :- 100


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
        printf("|%d|->",head -> data);
        head = head -> next;
    }


}

int AdditionOfElemenst(PNODE head)
{
    PNODE temp = head;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum += temp ->data;
        temp = temp -> next;
    }


    return iSum;
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
   
    iRet = AdditionOfElemenst(first);

    printf("Sum of all the elements in Linked list is :%d\n",iRet);
}