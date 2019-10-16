#include <stdio.h>
#include <math.h>

int main(){
  int num,sqr_root,t;
  scanf("%d",&t);
  while(t--){
      scanf("%d",&num);
      sqr_root = sqrt(num);
      if(sqr_root*sqr_root == num){
          printf("YES\n");
      }
      else{
          printf("NO\n");
      }
  }
  return 0;
}