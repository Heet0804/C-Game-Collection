#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,b,c,d,e,r=0,s=0,t=-1;
    char f,g,h,i,j;
    srand(time(0));
    printf("1. Toss: Players pick Odd/Even & a number (1-6); sum decides the winner.\n");
    printf("2. Batting: Batting player picks a number (1-6); if different from bowler's, runs are added.\n");
    printf("3. Out: If both players pick the same number, the batsman is out.\n");
    printf("4. Second Innings: The other player bats, aiming to chase the target.\n");
    printf("5. Winning: Higher scorer wins; same score = tie.\n"); 
    printf("Its Toss Time!!\n\n");
    printf("---->Select o(for Odd) & e(for Even):");
    scanf(" %c",&f);
    system("cls");
    printf("-->Player 1: Select a Number (1-6):\n");
    scanf("%d",&a);
    system("cls");
    printf("-->Player 2: Select a Number (1-6):\n");
    scanf("%d",&b);
    system("cls");
    if(a<1&&a>6||b<1&&b>6)
    {
        printf("Enter a Valid Input Number: ");
        return 0;
    }
    if(a>=1 && a<=6 && b>=1 && b<=6)
    {
    if(((a+b)%2==0)&& f=='e'||(a+b)!=0&&f=='o')
    {
        printf("Player 1: Wins the Toss:\n\n");
        g='1';
    }
    else 
    {
        printf("Player 2: wins the toss:\n\n");
        g='2';
    }
    }
    printf("Player %c: Select b(for Batting) or l(bowling):",g);
    scanf(" %c",&h);
    if(h=='b')
    {
        i=g;
        printf("Player %c: Bats First\n",i);
        if(g=='1')
        {
            j='2';
            printf("Player %c: Bowls First \n",j);
        }
        else
        {
            j='1';
            printf("Player %c: Bowls First\n",j);
        }
    }
    else
    {
        j=g;
        printf("Player %c: Bowls First\n",g);
        if(g=='1')
        {
            i='2';
            printf("Player %c: Bats First\n",i);
        }
        else
        {
            i='1';
            printf("Player %c: Bats First\n",i);
        }
    }
    printf("\n------------------First Innings Start------------------\n");
    while(1)
    {
        printf("Player %c: Enter runs you want to score(1-6): ",i);
        scanf("%d",&c);
        system("cls");
        printf("Player %c: Enter bowl you want to bowl(1-6): ",j);
        scanf("%d",&d);
        system("cls");
        if(c<1 && c>6 || d<1 && d>6)
        {
            printf("Enter Valid Input!");
            continue;
        }
        if(c==d)
        {
            printf("Thats OUT!!!\n");
            printf("Player %c scored %d runs:\n",i,s);
            t=s+1;
            printf("The Target to be Chased down by Player %c is %d runs:\n",j,t);
            break;
        }
        else
        {
            s+=c;
            printf("Score is %d runs:\n",s);
        }
    }
    printf("\n------------------Second Innings Start------------------\n");
    char temp=i;
    i=j;
    j=temp;
    s=0;
    while(1)
    {
        printf("Player %c: Enter runs you want to score(1-6): ",i);
        scanf("%d",&c);
        system("cls");
        printf("Player %c: Enter bowl you want to bowl(1-6): ",j);
        scanf("%d",&d);
        system("cls");
        if(c<1 && c>6 || d<1 && d>6)
        {
            printf("Enter Valid Input!\n");
            continue;
        }
        if(c==d)
        {
            printf("Thats OUT!!!\n");
            break;
        }
        else
        {
            s+=c;
            printf("Score is %d Runs:\n",s);
            if(s>=t)
            break;
        }
    }
    if(s>=t)
    {
        printf("That was Easy Win for Player %c: ",i);
        return 0;
    }
    else if(s==t)
    {
        printf("Ahha!! Thats a Unfortunate Draw!");
    }
    else
    {
        printf("That was Easy Win for Player %c: ",j);
    }
}