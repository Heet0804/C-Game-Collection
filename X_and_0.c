#include<stdio.h>
#define RED     "\033[1;31m"
#define BLUE    "\033[1;34m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"
#define WHITE   "\033[1;37m"
void board(char a,char b,char c,char d,char e,char f,char g,char h,char i)
    {
        printf("\n %c | %c | %c\n",a,b,c);
        printf("---+---+---");
        printf("\n %c | %c | %c\n",d,e,f);
        printf("---+---+---");
        printf("\n %c | %c | %c\n",g,h,i);
    }
int main()
{
    printf("- Welcome to Tic-Tac-Toe Game.");
    printf("- Player 1 will choose 'X' or 'O'.\n");
    printf("- Players will take turns selecting a position by entering a number (1-9).\n");
    printf("- The first player to align 3 marks in a row, column, or diagonal wins!\n");
    printf("- If all positions are filled without a winner, the game ends in a draw.\n\n");
    int p1=0,p2=0,r=0;
    char z;
   do
   {
    char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
    char j,k,t;
    int l,m,v,u=0;
    printf("Enter Player 1 Choice(X or O): ");
    scanf(" %c",&j);
    if(j=='X'||j=='x')
    {
        k='O';
    }
    else
    {
        k='X';
    }   
    t=j;
    board(a,b,c,d,e,f,g,h,i);
    printf("\n");
    for(m=0;m<9;m++)
    {
        printf("Player %c, select a no.(1-9):",t);
        scanf("%d",&l);
        v=0;
        if(l==1 && a=='1')
        {
            a=t;
            v=1;
        }
        else if(l==2 && b=='2')
        {
            b=t;
            v=1;
        }
        else if(l==3 && c=='3')
        {
            c=t;
            v=1;
        }
        else if(l==4 && d=='4')
        {
            d=t;
            v=1;
        }
        else if(l==5 && e=='5')
        {
            e=t;
            v=1;
        }
        else if(l==6 && f=='6')
        {
            f=t;
            v=1;
        }
        else if(l==7 && g=='7')
        {
            g=t;
            v=1;
        }
        else if(l==8 && h=='8')
        {
            h=t;
            v=1;
        }
        else if(l==9 && i=='9')
        {
            i=t;
            v=1;
        }
       else
       {
        printf("Invalid Choice:\n");
        m--;
        continue;
       }
       board(a,b,c,d,e,f,g,h,i);
       if((a==b && b==c)||(d==e && e==f)||(g==h && h==i)||(a==d && d==g)||(b==e && e==h)||(c==f && f==i)||(a==e && e==i)||(c==e && e==g))
       {
        printf("Player %c wins.\n",t);
       if(t==j)
       {
        p1++;
       }
       else
        p2++;
       u=1;
       break;
    }
    t = (t == j) ? k : j;
    }
    if(m==8&&u==0)
    {
    printf("Draw.");
    }
    r++;
    printf("----------   Scoreboard  -----------\n");
    printf("     Player %c     |      Player %c    \n",j,k);
    printf("------------------|-------------------\n");
    printf("         %d        |         %d       \n",p1,p2);
    if(r<3)
    {
        printf("Do you want to Continue: ");
        scanf(" %c",&z);
    }
    else
    {
        z='n';
    }
}
while(r < 3 && (z == 'y' || z == 'Y')); 

    printf("----------    Game Over   ----------\n");
    printf("----------   Final Score  -----------\n");
    printf("     Player %c    |      Player %c     \n",'X','O');
    printf("------------------|-------------------\n");
    printf("         %d       |         %d       \n",p1,p2);
    printf("------------------|-------------------\n");

}