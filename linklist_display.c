#include <stdio.h>
#include <stdlib.h>

int main()
{
// data type as struct node
    struct node{
        int data;
        struct node* next;
    };
 struct node *head,*newnode,*temp; //temp will be used to traverse around the list
 // head for head node
 //newnode is created at everytime while we are creating a new node
 
 head = 0; int choice =1;
 while (choice){
    newnode = (struct node*)malloc(sizeof(struct node));
//malloc returns void pointer so typecast
    printf("Enter Data ");
    scanf("%d",&newnode -> data);

    newnode -> next=0;

    if(head==0){   //copy newnode to head
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue (0,1)? ");
    scanf("%d",&choice);
 }
 //struct node *s;
 //traversing the list
	temp=head;
    printf("\nThe Node Elements Are:");
    while(temp!=NULL)
        {
			printf("\t%d",temp->data);
			temp=temp->next;
		}

 return 0;
}
