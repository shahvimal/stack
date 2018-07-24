#include <stdio.h>
#include <stdlib.h>


int push(int);
int pop();
int peep();
int isfull();
int isempty();

struct stack
{
    int top,n;
    int a[100];
}h;

int main(void)
{
    int c,t,x;
  h.top=-1;
  printf("enter the number of stack");
  scanf("%d",&h.n);
	int i=1;
		dec_bin();
  /*while(i==1)
  {

      printf("\n MENU!!!!\n1.PUSH\n2.POP\n3.PEEP\n4.DISPLAY\n5.EXIT\n");
      printf("Enter your choice");
      scanf("%d",&c);

      switch(c)
      {
          case 1:
              printf("enter the Number to be added to stack");
              scanf("%d",&x);
              t=push(x);
              if(t=1)
                printf("The number was added succesfully");

              else
                ptintf("he stack is full");
              break;

          case 2:
              t=pop();
              if(t=1)
              printf("THE NUMBER WAS deleted sucessfully");
              else
                printf("the stack was empty");
              break;

          case 3:
              t=peep();
              if(t>=-1)
                printf("THE topmost number is %d",h.a[t]);

              else
                printf("THE STACK WAS EMPTY!!!!");
              break;

          case 4:
              display();
              break;
	  
	  case 5:
		i=0;
		break;
      }
  }*/
}

int push(int x)
{
    if(isfull()==0)
    {
        ++h.top;
        h.a[h.top]=x;
        return 1;
    }
   else
        return 0;
}

int pop()
{
    if(isempty()==0)
    {
        h.a[h.top]=0;
        h.top--;
        return 1;
    }
    else
        return 0;
}

int peep()
{
    if(isempty==0)
    {
       return h.top;
    }
    else
        return -1;
}

void display()
{
int i;
    if(h.top==-1)
        printf("THE STACK WAS EMPTY!!!!");

    else
    {
    printf("\nthe number which are stacked are \n");

    for(i=h.top;i>=0;i--)
    {
        printf(" %d",h.a[i]);
    }
    }
}

int isfull()
{
    if(h.top==h.n)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(h.top==-1)
        return 1;
    else
        return 0;
}


void dec_bin()
{
	int dec,r;
	printf("Enter the the decimal!!!!");
	scanf("%d",&dec);
	while(dec>0)
	{ 
	r=dec%2;
	push(r);
	dec/=2;  
	}
	printf("the binary number is");
	display();
}


void infix_to_postfix()
{
	char infix[100];
	char postfix[100];
  printf("Enter the infix expression");
}