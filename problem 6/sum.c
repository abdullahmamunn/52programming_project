#include <stdio.h>

int main()
{
   int num,lsd,msd,t;
    scanf("%d",&t);
     while(t--){
          scanf("%d",&num);
          lsd = num%10;
             while(num!=0){
                 msd = num % 10;
                 num = num/10;
             }
             printf("Sum = %d\n",lsd+msd);
     }

    return 0;
}

