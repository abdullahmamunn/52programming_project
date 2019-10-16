#include <stdio.h>

int main()
{
  int t,n,i;
  scanf("%d",&t);
  for( i = 1; i<=t; i++){
    scanf("%d",&n);
    long long int fact = 1,k;
        for(k=2;k<=n;k++){
        fact = fact*k;
    }
    printf("%lld\n",fact);
  }

    return 0;
}
