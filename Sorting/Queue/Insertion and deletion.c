#include <stdio.h>

int Queue[100], i,j, front=-1,rear =-1, ch,n;

void insert(int[],int);
int del(int[]);
void display(int[]);

int main()
{
    int itemInsert, itemDel;

    printf("Enter the number of elements you want in the Queue:\n");
    scanf("%d",&n);

    while(ch!=5)
    {
        printf("\nChoices are:\n1 for Insert\n2 for Delete\n3 for Display\n4 for Exit\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the number you want to insert:\n");
                scanf("%d",&itemInsert);
                insert(Queue,itemInsert);
                break;

            case 2:
                itemDel=del(Queue);
                printf("Item deleted: %d\n",itemDel);
                break;

            case 3:
                display(Queue);
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");


        }

    };

}

void insert(int queueInsert[], int itemIn)
{
    if(rear==n-1)
    {
        printf("Queue Overflow\n");
    }
    else if (front==-1)
    {
        front++;
        rear++;
        queueInsert[rear]=itemIn;
    }

        else
        {
            rear++;
            queueInsert[rear]= itemIn;

        }



}
int del(int queueDeleteF[])
{
    int itemDelF;

    if((front == -1) || (front>rear))
        printf("Queue Underflow");

    else
    {
        itemDelF = queueDeleteF[front]; 
        front ++;
    }

    return itemDelF;
}

void display(int queueDis[])
{
    i = front;
    while(i<=rear)
    {
        printf("%d",queueDis[i]);
        i++;

    }
}


