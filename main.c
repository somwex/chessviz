#include <stdio.h>

void printdesk(char desk[8][8])
{
    int i,j;
    printf("\n");
    for (i = 7; i >= 0; i--) {
        printf("%d|", i + 1);
        for (j = 0; j < 8; j++) {
            printf(" %c", desk[i][j]);
        }
    printf("\n");
    }
    printf("   _______________\n");
    printf("   A B C D E F G H\n");
}

int main()
{
	char desk[8][8] = {
 		"rhbqkbhr",
 		"pppppppp",
 		"........",
 		"........",
 		"........",
 		"........",
 		"PPPPPPPP",
 		"RHBQKBHR" };
    printdesk(desk);
    return 0;
};
