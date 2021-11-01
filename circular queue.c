//Array Implemenation of Circular Queue
// 39_it_nishita
#include <stdio.h>  
# define max 6  
int queue[max]; 
int front=-1;  
int rear=-1;  
void enqueue(int element)  
{  
    if(front==-1 && rear==-1)   
    {  
    front=0;  
    rear=0;  
    queue[rear]=element;  
    }  
    else if((rear+1)%max==front)   
    {  
    printf("\nQueue has reached it's limit.\n");  
    }  
    else  
    {  
    rear=(rear+1)%max;       
    queue[rear]=element;     
    }  
}  
int dequeue()  
{  
    if((front==-1) && (rear==-1)) 
    {  
    printf("\nQueue has reached it's limit.\n");  
    }  
 else if(front==rear)  
{  
   printf("\nThe element %d is deleted.\n", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  printf("\nThe element %d is deleted.\n", queue[front]);  
   front=(front+1)%max;  
}  
}  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
    printf("\nNo element in the queue.\n");  
    }  
    else  
    {  
    printf("\nElements in the queue are: ");  
    while(i<=rear)  
    {  
    printf("%d", queue[i]);  
    i=(i+1)%max;  
    }  
    }  
}  
int main()  
{  
    int cho=1,x;  
    while(cho<4 && cho!=0)   
    {  
    printf("\n\nPress 1: Insert an element.");  
    printf("\nPress 2: Delete an element.");  
    printf("\nPress 3: Display the elements.");  
    printf("\nEnter the operation you want to perform from above: ");  
    scanf("%d", &cho);  
    switch(cho)
	{  
    case 1:  {
	printf("Enter element to insert: ");  
    scanf("%d", &x);  
    enqueue(x);  
    break;  
	}
    case 2:  
    dequeue();  
    break;  
    case 3:  
    display();  
    break;
    default:
	printf ("\nInvalid selection. Please read the above instruction.");
	break;
	printf("Exit.");
    }
	}  
    return 0;  
}  
