#include <stdio.h>
#include <stdlib.h>
#define STACK_MAX_SIZE 10
void push(int);
void pop();
void display();
void isEmpty();
void peek();
int main() {
int op, x;
while(1) {
printf("1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit\n");
printf("Enter your option : ");
scanf("%d", &op);
switch(op) {
case 1:
printf("Enter element : ");
scanf("%d", &x);
push(x);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
isEmpty();
break;
case 5:
peek();
break;
case 6:
exit(0);
}
}
}

#define size 10
//define the top to -1

int stack[size],top=-1,i;
void push(int val){
//write your code here to push an element
if(top==size-1) {
printf("Stack is overflow.");
printf("\n");
}
else{
top++;
stack[top]=val;
printf("Successfully pushed.\n");
}
}
void display() {
//Write your code here to display the stack
int i;
if(top==-1){
printf("Stack is empty.\n");
}
else {
printf("Elements of the stack are : ");
for(i=top;i>=0;i--) {
printf("%d ",stack[i]);
}
printf("\n");
}
}
void pop() {
//write your code here to pop an element
if(top==-1) {
printf("Stack is underflow.");
printf("\n");
}
else{
i=stack[top];
top--;
printf("Popped value = %d\n",i);
}
}
void isEmpty() {
//write your code here to check whether the stack is empty not
if(top==-1){
printf("Stack is empty.\n");
}
else
{
printf("Stack is not empty.\n");
}
}
void peek(){
   if(top==-1){
printf("Stack is underflow.\n");
}
else{
printf("Peek value = %d\n",stack[top]);
}
 
}
