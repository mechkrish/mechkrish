#include<stdio.h>
void main()
{
    int e,j,k=0;
    printf("enter the number=");
    scanf("%d",&e);
    j=e;
  while(j!=0)
  {
   j=j/10;
   ++k;
  }
  printf("numbers of digits for %d=%d",e,k);
}
