#include<stdio.h>
#include<stdlib.h>
void push(void); 
void pop(void);
void peek(void);
void display(void); int stack[20],i,x,ch,top=0, size=5;
int main(){
while(ch!=5)
{
printf("stack operations:1.push 2.pop 3.peek 4.display 5.exit\n");
scanf("%d", &ch);
switch(ch)
{
case 1:push();break;
case 2:pop(); break;
case 3: peek(); break;
case 4:display(); break;
case 5:break;
}
}
}
void push()
{
printf("enter the value to push: \n"); 
scanf("%d", &x);
if(top==size)
{
printf("stack overflow\n");
}
else
stack[top++]=x;
}
void pop()
{
if(top==0)
printf("stack is empty\n");
else
printf("the elements to be deleted is %d\n", stack [top]);
top--;
}
void peek()
{
printf("the top element in the stack is %d\n", stack[top]);
}
void display()
{
if(top!=0)
{
printf("the elements in the stack are:");
for(i=0;i<=top; i++) 
printf("%d\n",stack[i]);
}
else
printf("stack is empty\n");
}
