#include <stdio.h>
#include <stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    if(top>=N)
        printf("Stack Overflow.\n");
    else
    {
        int item;
        printf("Enter the item to be inserted: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop()
{
    if(top<0)
        printf("stack underflow!");
    else
    {
        printf("Topmost element will be deleted");
        top--;
    }
}
void display()
{
    printf("The new stack is:\n");
    for(int i=N;i>=0;i--)
        printf("%d",stack[i]);
}
void main()
{
    int choice;
    while(1)
    {
        printf("Enter\n 1.push\n 2.pop\n 3.display\n 4.exit\n :----->");
        scanf("%d",&choice);
        switch(choice)
        {
        case (1):push();break;
        case (2):pop();break;
        case (3):display();break;
        case (4):exit(0);
        }
    }
}
