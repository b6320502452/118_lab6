#include<stdio.h>
#include<string.h>
#include<math.h>
char number1[100],number2[100];
void getnum(char c[])
{
    char *dilim=" ";
    char *token;
    int count=1;
    token=strtok(c,dilim);
    while(token!=NULL)
    {
        if(count==2)
        {
            strcpy(number1,token);
        }
        if(count==3)
        {
            strcpy(number2,token);
        }
        token=strtok(NULL,dilim);
        count++;
    }
}
int ToNumber (char text[100], int len)
{
    int result = 0;
    for(int i = len - 1; i >-1; i--)
    {
        if(text[i] >= '0' && text[i] <= '9')
        {
            result = result + ((text[i] - '0') * pow(10 , (len - i - 1)));
        }
        else if (text[i] == '-')
        {
            result *= -1;
        }
        else
        {
            result *= 1;
        }
    }

    return result;
}
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    fflush(stdin);
    char com[q][100];
    int a[n],len1,len2,num1,num2;
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<q;i++)
    {
        gets(com[i]);
    }
    for(int i=0;i<q;i++)
    {
        getnum(com[i]);
        len1=strlen(number1);
        len2=strlen(number2);
        num1=ToNumber(number1,len1);
        num2=ToNumber(number2,len2);
        if(com[i][0]=='U')
        {
            a[num1-1]=num2;
        }
        else if(com[i][0]=='P')
        {
            int max=-20000;
            for(int j=num1-1;j<=num2-1;j++)
            {
                if(a[j]>max)
                {
                    max=a[j];
                }
            }
            printf("%d\n",max);
        }
    }
}
