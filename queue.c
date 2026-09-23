#include<stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
if(rear==size-1)
printf("queue is full");
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=ele;
rear++;
}
else
{
queue[rear]=ele;
rear++;
}
}
void display()
{
printf("\nqueue is");
for(int i=front;i<=rear;i++)
printf("\n%d",queue[i]);
}
int main() 
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
display(); 
}

