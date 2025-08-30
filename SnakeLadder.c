#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define win 100
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define CYAN    "\033[1;36m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"
int sl(int p)
{
    //ladder
    if(p==3) return 22;
    if(p==9) return 34;
    if(p==11) return 49;
    if(p==17) return 90;
    if(p==24) return 94;
    if(p==39) return 96;
    if(p==81) return 63;
    if(p==35) return 97;
    if(p==88) return 92;
    //snake
    if(p==99) return 2;
    if(p==91) return 64;
    if(p==62) return 38;
    if(p==59) return 19;
    if(p==70) return 47;
    if(p==50) return 8;
    if(p==47) return 18;
    return p;
}
int dice()
{
    return (rand()%6)+1;
}
int pg()
{
    int a=0,b=0,d,t=1,np;
    srand(time(0));
    while(a<win && b<win)
    {
    printf(YELLOW "--> Player %d's Turn\n" RESET, t);
    printf(CYAN "--> Press Enter to roll the dice. " RESET);
    getchar();
    d=dice();
    printf(GREEN "-->Dice Rolled: %d\n"RESET,d);
    if(t==1)
    {
        np=a+d;
        if(np<=win)
        {
            a=sl(np);
        }
        printf("-->Player 1 is at Position: %s%d%s\n\n",RED, a, RESET);
        if(a==win)
        {
            printf(GREEN "-->Congratulations\n-->Player 1 Wins"RESET);
            break;
        }
    }
    else
    {
        np=b+d;
        if(np<=win)
        {
            b=sl(np);
        }
        printf("-->Player 2 is at Position:  %s%d%s\n\n",CYAN, b, RESET);
        if(b==win)
        {
            printf(GREEN "-->Congratulations\n-->Player 2 Wins\n"RESET);
            break;
        }
    }
    if(t==1)
    {
        t=2;
    }
    else
    {
        t=1;
    }
    }
}
int main()
{
    printf("\n"CYAN"-----------Welcome to Snake Ladder Game-----------\n\n"RESET);
    pg();
}