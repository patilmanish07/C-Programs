// Lastoccurence of linkedlist & function return position of element is found.
// Input:- 30
// Output :- 6

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

int LastOccurance(PNODE head, int no)
{   
    PNODE temp = head;
    int iIdx = 1, iLOcc = 0;
    bool flag = false;

    while(temp != NULL)
    {
        if((temp -> data)== no)
        {
            iLOcc = iIdx;

        }

        temp = temp -> next;
        iIdx++;
    }


    return iLOcc;
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

    printf("\nEnter no to search:");
    scanf("%d",&iSer);
    
    iRet = LastOccurance(first,iSer);

    printf("Index of last occurance:%d",iRet);

}
