#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZE];
int rear=0,front=0;
void insertq(int item)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(r1==front)
printf("queue is full");
else
{
rear=r1;
q[rear]=item;
}
}
int deleteq1()
{
if(front==rear)
printf("queue is empty");
else
{
front=(front+1)%SIZE;
return q[front];
}
}
int searchq(int item)
{
int t;
t=front;
t=(t+1)%SIZE;
d0
{
if(q[t]==item)
return t+1;
t=(t+1)%SIZE;
}
while(t!=rear);
return 0;
}
void main()
{
int item,opt,ans;
do
{
print("\n 1.insert \n");
print("\n 2.delete \n");
print("\n 3.search \n");
print("\n 4.exit \n");
print("enter your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("data:");
       scanf("%d",item);
       insertq(item);
       insert(item);
       break;
case 2:item=deleteq1();
       printf("deleted=%d",item);
       break;
case 3:printf("enter the number to search:");
       scanf("%d",&item);
       ans=searchq(item);
       if(ans==0)
       printf("not found");
       else
       printf("item found at %d position  ",ans);
       brak;
case 4:exit(0);
}
}
while(1);
}
