#include<stdio.h>
#define SIZE 5
struct queue
{
int item[SIZE];
int rear,front;
}cq;
int count=0;
void enqueue(struct queue *cq,int num)
{
if(count==SIZE)
{
printf("\nQueue overflow");
}
else
{
cq->rear=(cq->rear+1)%SIZE;
cq->item[cq->rear]=num;
count++;
}
}
void dequeue(struct queue *cq)
{
int dt;
if(count==0)
{
printf("\n Queue underflow");
}
else
{
cq->front=(cq->front+1)%SIZE;
dt=cq->item[cq->front];
printf("\nDeleted item is %d",dt);
count--;
}
}
void display(struct queue *cq)
{
int i;
if(count==0)
{
printf("\n Queue empty");
}
else
{
printf("\nContenet of queue is\n");
for(i=(cq->front+1)%SIZE;i!=cq->rear;i=(i+1)%SIZE)
{
printf("%d\t",cq->item[i]);
}
printf("%d",cq->item[cq->rear]);
}
}
int main()
{
int num,choice;
cq.front=SIZE-1;
cq.rear=SIZE-1;
printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
while(1)
{
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter the number:");
scanf("%d",&num);
enqueue(&cq,num);
break;
case 2:
dequeue(&cq);
break;
case 3:
display(&cq);
break;
case 4:
exit(0);
}
}
return 0;
}
