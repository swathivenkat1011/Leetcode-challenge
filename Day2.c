#include<stdio.h>
#include<math.h>
 int main()
 {
     int n,t,sum=0;
     printf("Enter the number\t");
     scanf("%d",&n);
     while(n>0)
     {
         t=n;
         while(t>0)
         {
             t=t%10;
             sum=sum+(t*t);
             t=t/10;
         }
         if(sum==1)
         {
             printf("Happy number");
             break;
         }
         else if(sum==4)
         {
             printf("Not a Happy number");
             break;
         }
         else
         {
          n=sum;
          sum=0;
         }
     }
      return 0;
 }
