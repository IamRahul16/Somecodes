#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;

void print()
{
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}

/*void insert(int data){
        struct node *temp= (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = head;
        head = temp;

 }*/
void insert(int newData){
    struct node* temp1 =(struct node*)malloc(sizeof(struct node));
    temp1->data = newData;
    temp1->next = NULL;

    if (head == NULL){ // empty list
        head = temp1;
        return;
    }

    struct node* temp2 = head;
   // temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

void del(int n){
    struct node* temp1 = head;
    if(n==0){
        printf("Invalid position\n");
        return;
    }

    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }

    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
    struct node* temp2 = temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}

int main()
{
    int n;
    head=NULL;
    insert(4);
    insert(5);
    insert(8);
    insert(9);
    print();
    printf("\nEnter the position: \n");
    scanf("%d",&n);
    del(n);
    print();
    return 0;
}
