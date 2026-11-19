#include<stdio.h>
#define MAX 5
int front =-1;
int rear =-1;
int main()
{ int queue_overflow();
int queue_underflow();
int queue_empty();
void queue_insert(int queue[], int value);
int queue_delete(int queue[]);
void queue_display(int queue[]);
int queue[MAX], choice, x, value;
do
{ printf("Enter 1-INSERT \n 2-DELETE \n
3-DISPLAY \n Any value to EXIT \n");
scanf("%d", &choice);
switch(case)
{ case 1: if (queue_overflow())
printf("Queue Overflow \n");
else
{ printf("Enter the value to be
inserted \n");
scanf("%d", &value);
queue_insert(queue, value);
}
break;
case 2: if (queue_underflow())
printf("Queue Underflow \n");
else
{ x = queue_delete(queue);
printf("Deleted element from Queue
is %d \n", x);
}
break;
case 3: if (queue_empty())
printf("Queue is Empty \n");
else
{ printf("Queue status \n");
queue_display(queue);
}
27
break;
default: printf("Invalid input - EXIT \n");
exit(0);
} 
} while (choice >=1 && choice <=3);

return 0;
} 
