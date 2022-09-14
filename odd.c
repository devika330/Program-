#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter the Number=");
    scanf("%d",&num);
    if(num%2!=0)
         count=1;
    if(count==1)
    {
       printf("It is Odd Number");
       printf("\nThe Odd Number is %d",num);
    }
    else
       printf("It is Not Odd Number");
       
 }
