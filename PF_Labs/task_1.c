#include <stdio.h>
#include<math.h>
int sum(int x, int n)
{
    int add=0,i,a;
for(int i=0;i<=n;i++)
    {
     a=pow(x,i);
         add=add+a;}
        return(add);
    }
    
int main()
{
    int rzlt,x,n;
printf("enter x");
scanf("%d",&x);
printf("enter n");
scanf("%d",&n);
rzlt=sum(x,n);
printf("%d\n",rzlt);

    return 0;
}
