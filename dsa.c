#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){
    struct node *head, *newnode, *temp;
    head = NULL;
int choice = 1;
while (choice){
    newnode=(struct node*)malloc(sizeof(struct node));
if (newnode == NULL){
    printf("Memory allocation failed\n");
    return 1;
}
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = NULL;
if (head == NULL){
    head =  temp = newnode;
}
else{
    temp->next = newnode;
    temp = newnode;
}
printf("Do you want to continue (0/1): ");
scanf("%d", &choice);
}
newnode == (struct node*)malloc(sizeof(struct node));
if (newnode == NULL){
    printf("Memory allocation failed\n");
    return 1;
}
printf("\nenter data to insert ar beginning: ");
scanf("%d", &newnode->data);
newnode->next = head;
head = newnode;
printf("\nLinked list after insertion:\n");
temp = head;
while (temp != NULL){
    printf("%d -> ", temp->data);
    temp = temp->next;
}
printf("NULL\n");
return 0;
}