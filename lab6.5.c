#include<stdio.h>
int main()
{
    int w,h,i,j,count=0,land;
    scanf("%d %d",&w,&h);
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            scanf("%d",&land);
            count+=land;
        }
    }
    if(count%(w*h)>(w*h)/2)
        printf("%d",(w*h)-count%(w*h));
    else
        printf("%d",count%(w*h));
    return 0;
}
