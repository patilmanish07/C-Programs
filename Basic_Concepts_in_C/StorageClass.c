#include<stdio.h>

extern int I = 11;

int J;

/* Here both a & b are global variables means memory at 
    at Data Section-> Non-Bss sectn. for initialised value.
    & Bss for uninitialised value.
    Scope :- Throughout the program.
    Default value :- 0/0.0/'\0',depends.
    Lifetime:- throughout the program.
    Linkage:- Internal.
 */

void Demo()
{
     auto int A = 20;

}                    
 /* Memory :- Stack Section.           
    Default value :- Garbage.
    Scope:- Only till function.
    Lifetime:- Throughout the function.
    Linkage:-  No linkage.
 */


void Hello()
{
    int X = 10;

}
 /* Memory :- Stack Section.           
    Default value :- Garbage.
    Scope:- Only till function.
    Lifetime:- Throughout the function.
    Linkage:-  No linkage.
 */


void StaticFn()
{
    static int A = 30;

}
 /* Memory :- Data Section.           
    Default value :- 0/0.0/'\0'
    Scope:- Only till function.
    Lifetime:- Throughout the function.
    Linkage:-  No linkage.
 */


void RegisterFn()
{

        register int K = 50; 
}
 /* Memory :- CPU Section.           
    Default value :- Garbage.
    Scope:- Only till function.
    Lifetime:- Throughout the function.
    Linkage:-  No linkage.
 */


 

