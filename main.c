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

  while(1)
  {
    system("cls");

      printf("\n MENU\n1.PUSH\n2.POP\n3.PEEP\n4.DISPLAY\n");
      printf("Enter your choice");
      scanf("%d",&c);

      switch(c)
      {
          case 1:
              printf("enter the umber to be added to stack");
              scanf("%d",&x);
              t=push(x);
              if(t=1)
                printf("the number was added succesfully");

              else
                ptintf("the stack is full");
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
      }
      getch();
  }
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
    if(h.top==-1)
        printf("THE STACK WAS EMPTY!!!!");

    else
    {
    printf("\nthe number which are stacked are \n");

    for(int i=0;i<h.top+1;i++)
    {
        printf("\n %d",h.a[i]);
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


