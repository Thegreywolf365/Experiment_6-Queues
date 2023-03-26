#include<stdio.h>
int queue [2];
int front = -1;
int rear = -1;
int data;
void enqueue(int data);
void dequeue();
//Enqueue
void enqueue(int data)
{
    if (rear == 3){
        printf("Overflow");
    }
    else{rear= rear+1;
        printf("Enter data\n");
        scanf("%d",data);
        queue[rear]= data;
        if(front==1){
            front=0;

        }}}
//Dequeue
void dequeue()
{if (front==-1){
        printf("underflow");

    }
    else if (front>rear){
        front=-1;
        rear=-1;
    }
    else {
        printf("%d\n", front);
        front=front+1;

    }
}
int main(){
    int choice;
    do {
        printf("\n 1. Enqueue \n 2. Dequeue \n");
        scanf("%d",&choice);
        if(choice==1)
        {
            enqueue(data);
        }
        else if(choice==2)
        {
            dequeue();
        }
    }
    while (choice !=0);
    return 0;
}
