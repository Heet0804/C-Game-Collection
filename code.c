#include<stdio.h>
int main()
{
    char a,b,c,r,p,s,g=0,h=0,round=0;
    char d='y',e,f;
    printf("\n\n\n");
    printf("-------------Welcome to Rock-Paper-Scissors Game-------------\n");
    printf("-------------Instructions-------------------\n");
    printf("--> 1.Select 'r' for Rock.\n");
    printf("--> 2.Select 'p' for Paper.\n");
    printf("--> 3.Select 's' for Stone.\n");
    do
    {
    printf("Player 1:\nEnter your choice:\n");
    printf("1.Rock(r)\n2.Paper(p)\n3.Scissors(s)\n");
    scanf(" %c",&a);
    system("cls");
    printf("\n");
    printf("Player 2:\nEnter your Choice:\n");
    printf("1.Rock(r)\n2.Paper(p)\n3.Scissors(s)\n");
    scanf(" %c",&b);
    system("cls");
    if(a==b)
    {
        printf("Match Tied!\n");
    }
    else if((a=='r'&&b=='p')||(a=='p'&&b=='s')||(a=='s'&&b=='r'))
    {   
        printf("Player 2 Wins!!\nCongratulations!!\n");
        g=g+1;
    }
    else
    {
        printf("Player 1 Wins!\nCongratulations!!\n");
        h=h+1;
    }
    round++;
    printf("----------   Scoreboard  -----------\n");
    printf("     Player 1     |      Player 2     \n");
    printf("------------------|-------------------\n");
    printf("         %d        |         %d       \n",h,g);
    printf("------------------|-------------------\n");
    printf("Totals Rounds:%d\n\n",round);
    if(round%3==0)
    {
    printf("Do you want to Continue?(y/n): ");
    scanf(" %c",&d);
    }
    } while (d=='y'||d=='Y');
    {
    printf("----------    Game Over   ----------\n");
    printf("----------   Final Score  -----------\n");
    printf("     Player 1     |      Player 2     \n");
    printf("------------------|-------------------\n");
    printf("         %d       |         %d       \n",h,g);
    printf("------------------|-------------------\n");
    printf("Total Matches Player:%d\n",round);
    printf("-------------Thank You for Playing-------------");
    }
}