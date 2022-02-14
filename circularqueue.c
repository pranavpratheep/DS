#include<stdio.h>
#define MAX 4

    void insert();  
    int delete();  
    void display();  
    int front = -1, rear = -1;  
    int queue[MAX];
    
int main()
{
int op;
    
    do{
        printf("\n\nEnter option :\n");
        printf("1.insert\t2.delete\t3.exit\t4.display\n");
        scanf("%d", &op);
        
        if(op == 1)
        {
           insert();
           
        }
        else if(op == 2)
        {
           delete();
           
        }
        else{
                display();
            }    
    }while(op != 3);
}

int isFull()
{
  if ((front == rear + 1) || (front == 0 && rear == MAX - 1)) 
  return 1;
  return 0;
}
int isEmpty() 
{
  if (front == -1) 
  return 1;
  return 0;
}
void insert()
{

  int element;  
  printf("Enter the element\n");  
  scanf("\n%d",&element); 
       
  if (isFull())
    printf("\n Queue is full!! \n");
  else 
  {
    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = element;
  }
}
int delete() 
{
 int element;
  if (isEmpty())
   {
    printf("\n Queue is empty !! \n");
    return (-1);
  } 
  else 
  {
    element = queue[front];
    if (front == rear) 
    {
      front = -1;
      rear = -1;
    }
  else
  {
    front = (front + 1) % MAX;
  }
    printf("\n Deleted element : %d \n", element);
    return (element);
  }
}

void display()
{
 int i;
 if (isEmpty())
 printf(" ");
 else
   {
    printf("\n Queue : ");
    for (i = front; i != rear; i = (i + 1) % MAX) 
    {
      printf("%d ", queue[i]);
    }
    printf("%d ", queue[i]);
   
  }
}


