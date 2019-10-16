// C program to implement stack operations
//https://github.com/ARJUNRAGHUNANDANAN/C-Programs

#include<stdio.h>
#include<stdlib.h>

//Push Operation Declaration
int push(int Array[50],int stackTop,int size)
{
 int element;
if(stackTop>=size-1)
    {
    printf("STACK OVERFLOW - CANNOT ADD ADDITIONAL ELEMENTS\n\n");
    }
else
    {stackTop+=1;
    printf(" \n Enter an element  :");
    scanf("%d",&Array[top]);
    }
 return stackTop;
}

//Pop Operation Declaration
int pop(int Array[50],int stackTop,int size)
{
 int element;
 if(stackTop<1)
    {
    print("\n STACK UNDERFLOW - NO ELEMENTS IN THE STACK  \n");
    }
 else
    {
    element=Array[stackTop];
    printf("%d DELETED FROM STACK",element);
    stackTop-=1;
    }
return top;
}

//Display Operation Declaration
void display(int top,int A[50])
{
 int i;
printf("the stack is");
for(i=0;i<=stackTop;i++)
  printf("%d",Array[i]);
}

//Initialising Interface for program
main()
{
  int Array[50],pinflip,size,stackTop=0,count=1;
 printf("Enter size of the stack:");
scanf("%d",&size);
do
{
  printf("enter 1 for insertion\n enter 2 for deletion\n enter 3 for display\n enter 4 for exit\n\n enter your choice");
 scanf("%d",&pipflip);
switch(pinflip)
    {
    case 1 : stacktTop=push(Array,stackTop,size);
                    break;
    case 2 : stackTop=pop(Array,stackTop,size);
                    break;
    case 3 : display(stackTop,Array);
                    break;
    case 4 : count=0;
                     break;
    default : printf("\n ENTER VALID CHOICES    | 1 | 2 | 3 | 4 |       :");
    }
}while(count!=0)
}

