/*Program for PostFix Evaluation */
//39_IT_Nishita
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
# define size 100

char stack[size];
int top=-1;

void push(char);
char pop();

int ischaracteradigit(char a)
{
 if(a>='0' && a<='9')
   return 1;   // true when it is a digit
 else
   return 0;  // true when it is not a digit
}

int evaluateexp(int p1,int p2,char opr)
{
 printf("\n evaluation:  op1=%d  & op2=%d , opr=%c",p1,p2,opr);
 if(opr=='+')
  return (p1+p2);
 if(opr=='-')
  return (p1-p2);
 if(opr=='*')
  return (p1*p2);
 if(opr=='/')
  return (p1/p2);
 if(opr=='%')
  return (p1%p2);

}

void push(char x)
{
if(top==size-1)
  {
     printf("Stack is FULL");
  }
else
  { 
    top++;
    stack[top]=x;
    printf("\n %d inserted in stack",x);
  }
}

char pop()
{
 char x;

 x=stack[top--];
printf("\n %d element popped out of the stack",x);
 return x;

}

void main()
{
char op1,op2;
char x;
int val;

//clrscr();

printf("\n----PostFix Evaluation---");
printf("\n Enter the expression :");

//(x=getchar())!='\n'

while((x=getchar())!='\n')
 {
    if(ischaracteradigit(x))
    {
       push(x-'0');
    }
    else
    {
       if(top == -1)
       {
	       printf("\n Stack is EMPTY");
       }
       else
	     {
	       op2=pop();
	       op1=pop();
        printf("\n Popped:  op1=%d  & op2=%d",op1,op2);

	       val = evaluateexp(op1,op2,x);
	       printf("\n evaluation ans= %d",val);
         push(val);
	     }
    }

 }

val=pop();
printf("\n Value of Expression= %d",val);

//getch();
}
