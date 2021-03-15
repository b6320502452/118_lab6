#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n][100],tmp[100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(toupper(s[j][0])>toupper(s[j+1][0]))
            {
                strcpy(tmp,s[j+1]);
                strcpy(s[j+1],s[j]);
                strcpy(s[j],tmp);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",s[i]);
    }
}
