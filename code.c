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


/*#include<stdio.h>
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
}*/


/*#include<stdio.h>
int main()
{
    int n,temp,rev=0,rem;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,i,flag=0;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;

    printf("Enter limit: ");
    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
*/


/*#include<stdio.h>
int main()
{
    int n,count=0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }

    printf("Digits = %d",count);

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
        printf("Largest = %d",a);
    else if(b>c)
        printf("Largest = %d",b);
    else
        printf("Largest = %d",c);

    return 0;
}*/

/*#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Sum = %d",add(x,y));
    return 0;
}*/


/*#include<stdio.h>
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Factorial = %d",factorial(n));
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[5],i;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a[5],i,sum=0;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        sum=sum+a[i];

    printf("Sum = %d",sum);

    return 0;
}*/


#include<stdio.h>
int main()
{
    int a[5],i,max;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    max=a[0];

    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    printf("Largest = %d",max);
    
    return 0;
}
