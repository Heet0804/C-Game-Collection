#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char a,b,g=0,h=0;
   srand(time(NULL));
    printf("\n\n\n");
    printf("-------------Welcome to Rock-Paper-Scissors Game-------------\n");
    printf("-----Instructions.-----\n");
    printf("--> 1.Select 'r' for Rock.\n");
    printf("--> 2.Select 'p' for Paper.\n");
    printf("--> 3.Select 's' for Stone.\n");
    printf("-->4. E for exit.\n");

    while(1)
    {
        printf("Enter Your Choice.");
        scanf(" %c", &a);
        if(a == 'E'||a == 'e')
        {
            printf("You made an exit:\nThank you for Playing!!\n");
            break;
        }
        if(a!='r'&&a!='p'&&a!='s')
        {
            printf("Please select a valid Input from:'r';'p';'s':");
            continue;
        }
        int b = rand() % 3;
        if (b == 0) 
        {
            b = 'r';
        }
        else if (b == 1) b = 'p';
        else b = 's';
        printf("Computer chose: %c\n", b);
        if (a == b) {
            printf("Ohh! It's a draw!\n");
        } else if ((a == 'r' && b == 'p') || (a == 'p' && b == 's') || (a == 's' && b == 'r'))
         {
            printf("Shoot! You Lost & Computer Wins!!\n");
            g++;
        } else 
        {
            printf("Congratulations!! You Win!!\n");
            h++;
        }
        printf("----------   Scoreboard  -----------\n");
        printf("     Computer      |      Player 2     \n");
        printf("------------------|-------------------\n");
        printf("         %d        |         %d       \n",g,h);
        printf("------------------|-------------------\n");
    }
}