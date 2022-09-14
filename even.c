#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter the Number=");
    scanf("%d",&num);
    if(num%2==0)
         count=1;
    if(count==1)
    {
       printf("It is Even Number");
       printf("\nThe Even Number is %d",num);
    }
    else
       printf("It is Not Even Number");
       
 }
