#include <stdio.h>

int main()
{
    int x,k,a[10],c=0;
    scanf("%d%d",&x,&k);
    for(i=0;i<=x;i++)
    {
        scanf("%d",a[i]);
    }
    for(int i=0;i<=k;i++)
    {
        c=c+a[i];
    }
    printf("sum",c);

    return 0;
}
