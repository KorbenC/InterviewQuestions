#include <stdio.h>
#define MAXSIZE 5
#define TRUE 1
#define FALSE 0

typedef int boolean;
int stack[MAXSIZE];
int top;	//index pointing to the top of stack



int main()
{
    int push(int);
    int pop();
    int input = 1,i,num;
    boolean status;

    for(;;) {
    printf("\nChoose from the following 4 operations: \n\t1-Status of stack( is empty ?)\n\t2-Add an element(Push)\n\t3-Extract an element(Pop)\n\t0-Exit\nEnter your choice: ");
    scanf("%d",&input);

    switch(input)
                 {
                       case 0:
                           printf("Alright take it easy!\n");
                           getch();
                           exit(0);        
                       case 1:
        	               status = isEmpty(top);
         	               if (status)
                              printf("\n\nStack is Empty!\n\n");
         	               else
                              printf("\n\nThe stack is not Empty!\n\n");
                       break;
                       case 2:
                           printf("\n\nEnter element: ");
                    	   scanf("%d",&num);
                    	   push(num);
                    	   printf("%d added to stack!\n", num);
                	   break;
                       case 3: 
                           i = pop();
                           if(i != 0)
                    	        printf("\nElement deleted from stack  %d \n",i);
                    	   break;
   	                   default:
                           printf("\nInvalid Choice.\n");
                  }//Switch

             }//for
}//main

boolean isEmpty(int top)
{
 	return top == NULL ? TRUE : FALSE;
 	
}//isEmpty

int push(int y)
{
    if(top > MAXSIZE)
       {
           printf("STACK FULL\n");
           return;
       }
    else
       {
           top++;
	       stack[top] = y;
       }
}//push

int pop()
{
    int a;
    if(top <= 0)
	    {
             printf("\nSorry, there is no element in the stack!\n");
	         return 0;
	    }
    else
        {
             a = stack[top];
	         top--;
        }
        return(a);
}//pop
