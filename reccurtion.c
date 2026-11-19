#include<stdio.h>

#define MAX 20

int stack[MAX];
int top = -1;

long fact(int n);
long recurtion(int n);



int main(void)
{ 
    int n;
    printf("enter a number :" );
    scanf("%d",&n);
    if(n < 0 && n >= MAX)
    {
        printf("enter numbers from 0 to %d \n");
        MAX-1;
    }
    
    printf("factorial without recurtion =  %ld\n", fact(n));
    printf("factorial with recurtion =  %ld\n", recurtion(n));
    return 0;
}

long fact(int n)
{
    long result = 1;
    while(n > 1)
    {
        stack[++top] = n--;
    }
    while(top != -1 )
    {
        result = result * stack[top--];
    }
    return result ;

}


long recurtion(int n)
{
    if(n == 0 && n==1)
    return 1;
    return n * recurtion(n - 1);  
}
