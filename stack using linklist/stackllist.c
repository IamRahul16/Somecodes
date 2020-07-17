#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next; 
};
struct node* top = NULL;

void push(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    struct node* temp;
    if(top==NULL) return;
    else
    temp=top;
    top=top->next;
    free(temp);
}
void print()
{
    struct node *tp = top;
    printf("Stack: ");
    while(tp!=NULL)
    {
    printf("%d  ",tp->data);
    tp=tp->next;
    }  
    printf("\n");
}
int main()
{
    push(4);
    push(9);
    push(12);
    pop();
    print();
    
    return 0;
}