#include <stdio.h>
#include <string.h>
int main()
{
  char ar[1000000];
  int t,i,j,c,len;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("\n%[^\n]",ar);
    c = 0;
    len = strlen(ar);
    for(j=0;j<len;j++){
        if(ar[j]==' ' && ar[j+1]!=' ' && ar[j+1]!='\0')
            c++;
    }
    printf("%d\n",c+1);

  }

     return 0;

}
