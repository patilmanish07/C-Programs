//Program which return prime numbers.in the linkedlist.
// Input:- 11->20->17->41->22->89.
// Output :- 11  17  41  89

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

int DisplayPrime(PNODE head, int no)
{
                                 
	int iIdx = 1;               	
    bool flag = false;                            
    
	while(head != NULL)
    {
		if(no%(head->data)== 0)
		{
			flag = true;
			break;
		}
        head = head -> next;
        iIdx++;		
	} 

	
    if((head ->next)==(no/2) +1)		
	{
		return iIdx = -1;	
	}
	return iIdx;
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
   
    iRet = DisplayPrime(first,iSer);

    printf("Prime element's in the linkedlist are :%d",iRet);

}