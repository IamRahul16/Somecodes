#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

struct node *head;

void print()
{
    if(head==NULL){
      cout <<"\nUnderflow";
    }
    else{
        node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<"\n";
            temp = temp->next;
        }
    }
}

void insert()
{
    int data,n,i;
    cout<<"Enter data: ";
    cin>> data;
    cout<<"Enter position: ";
    cin>> n;
    node *temp = new node();
    temp->data = data;
    temp->next=NULL;
    if(n==1){
        temp->next=head;
        head = temp;
        return;
    }

    node *temp1 = head;
    for(i=1;i<n-1;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

int main()
{
    head = NULL;
    char c = 'n';

    do{
        cout<< "1. Display";
        cout<< "\n2. Enter at nth position ";
        cout<< "\nEnter your choice\n";
        int x;
        cin>>x;
        switch(x){
            case 1: print();
            break;

            case 2: insert();
            break;
        }
        cout<< "\nDo you want to continue: ";
        cin>>c;
    }
    while(c=='y' || c=='Y');
    return 0;
}
