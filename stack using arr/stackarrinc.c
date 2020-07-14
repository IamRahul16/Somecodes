#include <stdio.h>
#define MAXSIZE 101
int A[MAXSIZE]; 
int top = -1;   //initialize the top

void push(int x)
{
    if(top==MAXSIZE-1)
    {
        printf("Error: Stack overflow"); // stack is full
        return;
    }
    A[++top] = x;
}

void pop()
{
    if(top==-1)
    {
        printf("Error : Stack Underflow"); //stack is empty
        return;
    }
    top--;
}

int Top()
{
 return A[top];
}

int isEmpty()
{
    if(top==-1) return 1; //true
    return 0;  //false
}

void print()
{
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    //print function is used to check the implementation
    push(10);print();
    push(5);print();
    push(7);print();
    pop();print();
    push(11);print();
    
    return 0;
}
