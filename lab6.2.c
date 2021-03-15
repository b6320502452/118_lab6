#include<stdio.h>
int main()
{
    int n,num1,num2,count=0;
    scanf("%d %d %d",&n,&num1,&num2);
    int a,b;
    for(int i=0;i<n;i++)
    {
        a=num1%10;
        num1/=10;
        b=num2%10;
        num2/=10;
        if(a==b)
        {
            count++;
        }
    }
    printf("%d %d",count,n-count);
}
