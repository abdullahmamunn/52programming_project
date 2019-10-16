#include <stdio.h>
int main()
{
    int num,t,i,k;
    scanf("%d",&t);
    for(k=1;k<=t;k+=1)
    {
        scanf("%d",&num);
        printf("Case %d:",k);
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
               {
                    printf(" %d",i);
               }

        }
        printf("\n");
    }
    return 0;
}
