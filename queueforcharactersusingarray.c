#include<stdio.h>
#define MAX 5
char queue[MAX];
int rear=-1,front=-1;
void enqueue();
void dequeue();
void show();
int main()
{
    int ch;
printf("1.enqueue\n \n2.dequeue\n \n3.show\n \n4.exit\n");

    while(1)
    {
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    
    enqueue();
    break;
    
     case 2:
    
    dequeue();
    break;
    
     case 3:
    
    show();
    break;
    
     case 4:
    
    printf("exit");
    
    default:
    
    printf("wrng ch");

}
} 
}
void enqueue()
{
    int item;
if(rear==MAX-1)
{
    printf("q is owerflow");
}
else{
if(front==-1)
{
    front= 0;
}
printf("enter item=");
scanf("%s",&item);
rear++;
queue[rear]=item;
}
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("q is underflow");
    }
    else
    {
        printf("%c",queue[front]);
    front++;
    }
}
void show()
{
int i;

if(front==-1)
{
    printf("q is under");
}
else
for(i=front;i<=rear;i++)
{
    printf("%c",queue[i]);
}

}





