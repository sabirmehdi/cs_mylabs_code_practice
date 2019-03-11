#include<stdio.h>
#include<math.h>
 void add(int M1[3][3],int M2[3][3]);
   int main()
   { int M1[3][3];
      int M2[3][3];
      int i,j;
  printf("enter array elements\n");
   for(i=0;i<3;i++)
  {
      
      for(j=0;j<=2;j++)
      {
      scanf("%d",&M1[i][j]);
      }
  }
  printf("\nenter element of 2nd Array\n");
    for(i=0;i<3;i++)
  {
      for(j=0;j<=2;j++)
      {
      scanf("%d",&M2[i][j]);
      }
  
  }
  add(M1,M2);
     return 0;  
       
   }
   void add(int M1[3][3],int M2[3][3])
   {
       int sum[3][3];
       int i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<=2;j++)
       {
           sum[i][j]=(M1[i][j])*(M2[i][j]);
       }
       
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<=2;j++)
       {
           printf(" %d ",sum[i][j]);
       }
       printf("\n");
   }
   }
