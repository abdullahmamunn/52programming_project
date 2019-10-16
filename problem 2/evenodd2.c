#include <stdio.h>
#include <string.h>
int main()
{
    int t,len,last_number,i;
    char num[102],last_char;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",num);
        len = strlen(num);
        last_char = num[len-1];
        last_number = last_char - '0';
        if(last_number%2==0)
        {
           printf("even\n");
        }else{
          printf("odd\n");
        }
         printf("lenght = %d last_character = %c last_number = %d\n",len,last_char,last_number);
    }


    return 0;
}
