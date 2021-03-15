#include<stdio.h>
int main ()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int array[n];
    char com[2];
    int i,j,k,z,a,b;
    for(j=0;j<n;j++)
    {
        array[j]=0;
    }
    for(j=0;j<q;j++)
    {
        scanf("%s",com);
        if(com[0]=='U')
        {
            scanf("%d %d",&i,&z);
            array[i]=z;
        }
        else if(com[0]=='P')
        {
            scanf("%d %d",&a,&b);
            int max=array[a];
            for(k=a-1;k<=b;k++)
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
