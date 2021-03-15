#include<stdio.h>
#include<string.h>
int main ()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int array[n];
    char com[2];
    int i,z,a,b;
    for(int j=0;j<n;j++)
    {
        array[j]=0;
    }
    for(int j=0;j<q;j++)
    {
        scanf("%s",com);
        if(toupper(com[0])=='U')
        {
            scanf("%d %d",&i,&z);
            array[i]=z;
        }
        else if(toupper(com[0])=='P')
        {
            scanf("%d %d",&a,&b);
            int max=array[a];
            for(int k=a+1;k<=b;k++)
            {
                if(max<array[k])
                {
                    max=array[k];
                }
            }
            printf("%d\n",max);
        }
    }
}
