//39_it_nishita
#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;
	};  
struct node *front;  
struct node *rear;   
void insert();  
void delete();  
void display();  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {
    	printf("Choose the operation to be performed.");
	printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
    printf("\nEnter your choice: ");  
    scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            del();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nPlease enter valid choice.\n");  
        }  
    }  
}  
void insert()  
{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nQueue overflow.\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value: ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}     
void del()  
{  
    struct node *ptr;  
    if(front == NULL)  
    {  
        printf("\nQueue underflow.\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue.\n");  
    }  
    else  
    {   printf("\nShowing queue elements: ");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}  
