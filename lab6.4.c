#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int score[n],a,b;
    for(i=0;i<n;i++)
    {
        score[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        score[a-1]+=1;
        score[b-1]+=1;
    }
    int max=score[0],min=score[0],lover=0,loser=0;
    for(i=1;i<n;i++)
    {
        if(max<score[i])
        {
            max=score[i];
            lover=i;
        }
        if(min>score[i])
        {
            min=score[i];
            loser=i;
        }
    }
    printf("%d %d",lover+1,loser+1);
}
