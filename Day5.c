#include<stdio.h>
#include<math.h>

int main()
{
int x,n=1,m;
scanf("%d",&x);
for(n=1;n<=10;n++)
{
m=n*x;
printf("%d x %d = %d\n",x,n,m);
}
}
