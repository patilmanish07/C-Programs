//Program which return perfect numbers.in the linkedlist.
// Input:- 11->28->17->41->6->89.
// Output :- 6  28

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

int DisplayPerfect(PNODE head)
{
    int iSum = 0;
	int iCnt1 = 0;

    while(head != NULL)
    {
        if(iCnt1 % (head -> data) == 0)
        {
            iSum = iSum + iCnt1;
        }
		head = head -> next;
		if(iSum == iCnt1)
		{
			iSum = iSum + iCnt1;
		}
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
   
    iRet = DisplayPerfect(first);

    printf("Perfect element's in the linkedlist are :%d",iRet);

}