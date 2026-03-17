/*#include <stdio.h>
int main()
{
  printf("Hello World");
  return 0;
}*/


/*#include <stdio.h>
int main()  
{  
    int a, b, c;  
    printf("Enter three numbers: ");  
    scanf("%d %d %d", &a, &b, &c);  
    if (a >= b && a >= c)  
        printf("%d is the largest number.", a);  
    else if (b >= a && b >= c)  
        printf("%d is the largest number.", b);  
    else  
        printf("%d is the largest number.", c);  
    return 0;  
}*/


/*#include <stdio.h>
int main()
{
    int num1,num2,sum;
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    printf("Sum of two numbers: %d",sum);
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num1;
    if (num1 >= 1)
    {
        printf("number is positive");
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    if (num1 %2==0)
    {
        printf("number is even");
    }
    else{
        printf("number is  odd");
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++){
        printf(" \n",i);
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int i=1;
    while(i<=20){
        printf(" \n ",i);
        i++;
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int i = 10;
    do
    {
        printf("\n %d", i);
        i--;

    } while (i >= 0) 
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int a,b,choice;;
    printf("1.add\n 2.sub\n 3.multiple\n 4.division\n");
    scanf("%d %d",&a,&b);
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:
          printf("addition:%d",a+b);
          break;
        case 1:
          printf("subration:%d",a-b);
          break;
        case 1:
          printf("multiply:%d",a*b);
          break;
        case 4:
          printf("division:%d",a/b);
          break;
        default:
          printf("Enter the correct choice");
          break;

    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,i,fact=1;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("Factorial = %d",fact);

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}*/


#include<stdio.h>
int main()
{
    int n,rev=0,rem;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    printf("Reverse = %d",rev);

    return 0;
}
