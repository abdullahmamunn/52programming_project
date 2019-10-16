#include<stdio.h>
#include<string.h>
int main(){

 char str[1000];
 int i,count,len,t;
 scanf("%d",&t);
 while(t--){
     scanf("%d",&t);
     scanf("%[^\n]",str);
     count = 0;
     len = strlen(str);
     for(i=0; i<len; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count = count + 1;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count = count + 1;
        }

 }
   printf("Number of vowels = %d\n",count);
 }

 return 0;

}
