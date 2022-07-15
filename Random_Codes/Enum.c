 #include<stdio.h>

   int main()
  {
    enum Marvellous_Batches {PPA = 0,LB = 1,Python = 2};
	const int Fees[] = {15000,16000,17000};
	const float Duration[] = {3.5,4.0,3.5};
	int choice = 0;
	
	printf("Select the batch that you want to join\n");
	printf("0 : PPA\n");
	printf("1 : logic Building\n");
	printf("2 : Python\n");
	
	scanf("%s\n",&choice);
	
	switch(choice)
	{ 
	    case PPA:
	        printf("Thank you for selecting Pre-Placement Activity batch\n");
			printf("Duration is : %d\n");
			printf("Fees are : %d\n");
			break;
			
		case LB:
             printf("Thank you for selcting logic Building batch\n");
             printf("Duration is : %d\n");
             printf("Fees are : %d\n");
			 break;
			 
		case Python:
             printf("Thank you for selecting Python batch\n");
             printf("Duration is : %d\n");
             printf("Fees are : %d\n");
			 break;

		default:
		     printf("Sorry there is no such batch\n");
			 printf("Contact Admin : 7798132556\n");
             break;
			 
    }
 
       printf("Thank you for visiting Marvellous\n");
	   
       return 0;
  }		 