#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIN     100
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define CYAN    "\033[1;36m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"

int sl(int p) {
    // Ladder
    if (p == 3) return 22;
    if (p == 9) return 34;
    if (p == 11) return 49;
    if (p == 17) return 90;
    if (p == 24) return 94;
    if (p == 39) return 96;
    if (p == 81) return 63;
    if (p == 35) return 97;
    if (p == 88) return 92;

    // Snake
    if (p == 99) return 2;
    if (p == 91) return 64;
    if (p == 62) return 38;
    if (p == 59) return 19;
    if (p == 70) return 47;
    if (p == 50) return 8;
    if (p == 47) return 18;

    return p;
}

int dice() {
    return (rand() % 6) + 1;
}

int pg() {
    int a = 0, b = 0, d, t = 1, np;
    srand(time(0));

    while (a < WIN && b < WIN) {
        if (t == 1) {
            printf(YELLOW "--> Your Turn\n" RESET);
            printf(CYAN "--> Press Enter to roll the dice... " RESET);
            getchar();
            d = dice();
            printf(GREEN "--> You rolled a %d!\n" RESET, d);
            np = a + d;
            if (np <= WIN) {
                a = sl(np);
            }
            printf("--> You are at position: %s%d%s\n\n", RED, a, RESET);
            if (a == WIN) {
                printf(GREEN "\n🎉 Congratulations! You Win! 🎉\n" RESET);
                break;
            }
            t = 2;
        } else {
            printf(YELLOW "--> Computer's Turn\n" RESET);
            d = dice();
            printf(GREEN "--> Computer rolled a %d!\n" RESET, d);
            np = b + d;
            if (np <= WIN) {
                b = sl(np);
            }
            printf("--> Computer is at position: %s%d%s\n\n", CYAN, b, RESET);
            if (b == WIN) {
                printf(RED "\n Computer Wins! Better luck next time.\n" RESET);
                break;
            }
            t = 1;
        }
    }
    return 0;
}

int main() {
    printf(CYAN "\n----------------------------------- Welcome to Snake & Ladder -----------------------------------\n\n" RESET);
    pg();
    return 0;
}
