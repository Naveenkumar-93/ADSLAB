#include<stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top = NULL;
/* PUSH operation */
void PUSH(int value)
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
if (newnode == NULL)
{
printf("Stack Overflow: Memory not available\n");
return;
}
newnode->data = value;
newnode->next = top;
top = newnode;
printf("%d pushed into the stack\n", value);
}
/* POP operation */
void POP()
{
struct node *temp;
if (top == NULL)
{
printf("Stack Underflow: Stack is empty\n");
return;
}
temp = top;
printf("Popped element: %d\n", top->data);
top = top->next;
free(temp);
}
/* Linear Search operation */
void LINEAR_SEARCH(int key)
{
struct node *temp = top;
int position = 1;
while (temp != NULL)
{
if (temp->data == key)
{
printf("%d found at position %d from the top\n",
key, position);
return;
}
temp = temp->next;
position++;
}
printf("%d not found in the stack\n", key);
}
/* Display stack */
void DISPLAY()
{
struct node *temp = top;
if (top == NULL)
{
printf("Stack is empty\n");
return;
}
printf("Stack elements (Top to Bottom): ");
while (temp != NULL)
{
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
/* Main function */
int main()
{
int choice, value;
do
{
printf("\n--- STACK USING SINGLY LINKED LIST ---\n");
printf("1. PUSH\n");
printf("2. POP\n");
printf("3. LINEAR SEARCH\n");
printf("4. DISPLAY\n");
printf("5. EXIT\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter value to push: ");
scanf("%d", &value);
PUSH(value);
break;
case 2:
POP();
break;
case 3:
printf("Enter value to search: ");
scanf("%d", &value);
LINEAR_SEARCH(value);
break;
case 4:
DISPLAY();
break;
case 5:
printf("Exiting program...\n");
break;
default:
printf("Invalid choice\n");
}
} while (choice != 5);
return 0;
}
