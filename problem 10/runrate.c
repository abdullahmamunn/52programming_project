#include <stdio.h>

int main()
{
    int target,current_r,b,ball_played,t;
    double current_rr,require_rr;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&target,&current_r,&b);
        ball_played = 300 - b;
        current_rr = ((current_r) * 1.0/ball_played)*6;
        require_rr = ((target - current_r + 1) * 1.0/b)*6;
        if(require_rr<0)
        {
            require_rr = 0;
        }

        printf("%0.2lf %0.2lf\n",current_rr,require_rr);

    }
     return 0;
}
