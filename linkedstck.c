#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
int main()
{
struct node *top = NULL;
struct node *newnode;
int ch, value;
while (1)
{
printf("\n--- STACK MENU ---\n");
printf("1. PUSH\n");
printf("2. POP\n");
printf("3. DISPLAY\n");
printf("4. EXIT\n");
printf("Enter your choice: ");
scanf("%d", &ch);
switch (ch)
{
case 1:
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data: ");
scanf("%d", &value);
newnode->data = value;
newnode->next = top;
top = newnode;
printf("%d pushed into stack.\n", value);
break;
case 2:
if (top == NULL)
{
printf("Stack Underflow!\n");
}
else
{
newnode = top;
printf("%d popped from stack.\n", top->data);
top = top->next;
free(newnode);
}
break;
case 3:
if (top == NULL)
{
printf("Stack is empty!\n");
}
else
{
newnode = top;
printf("Stack elements are:\n");
while (newnode != NULL)
{
printf("%d\n", newnode->data);
newnode = newnode->next;
}
}
break;
case 4:
printf("Exited successfully...\n");
exit(0);
default:
printf("Invalid choice!\n");
}
}
return 0;
}
