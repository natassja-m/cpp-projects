#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printStatistics(int sumTwo, int sumThree, int sumFour, int sumFive,
                     int sumSix, int sumSeven, int sumEight, int sumNine,
                     int sumTen, int sumEleven, int sumTwelve);

void printHistogram(int sumTwo, int sumThree, int sumFour, int sumFive,
                    int sumSix, int sumSeven, int sumEight, int sumNine,
                    int sumTen, int sumEleven, int sumTwelve);

int main(void) {
    int numRolls = 1;
    int sumTwo = 0, sumThree = 0, sumFour = 0, sumFive = 0, sumSix = 0,
        sumSeven = 0, sumEight = 0, sumNine = 0, sumTen = 0, sumEleven = 0, sumTwelve = 0;

    int die1, die2, rollTotal;

    srand(time(0)); // seed once

    while (numRolls > 0) {
        printf("Enter number of rolls (0 to quit): ");
        scanf("%d", &numRolls);

        if (numRolls >= 1) {
            for (int i = 0; i < numRolls; ++i) {
                die1 = rand() % 6 + 1;
                die2 = rand() % 6 + 1;
                rollTotal = die1 + die2;

                switch (rollTotal) {
                    case 2: sumTwo++; break;
                    case 3: sumThree++; break;
                    case 4: sumFour++; break;
                    case 5: sumFive++; break;
                    case 6: sumSix++; break;
                    case 7: sumSeven++; break;
                    case 8: sumEight++; break;
                    case 9: sumNine++; break;
                    case 10: sumTen++; break;
                    case 11: sumEleven++; break;
                    case 12: sumTwelve++; break;
                }

                printf("Roll %d is %d (%d + %d)\n", i + 1, rollTotal, die1, die2);
            }
        }
        printf("\n");
    }

    printStatistics(sumTwo, sumThree, sumFour, sumFive, sumSix, sumSeven,
                    sumEight, sumNine, sumTen, sumEleven, sumTwelve);

    printHistogram(sumTwo, sumThree, sumFour, sumFive, sumSix, sumSeven,
                   sumEight, sumNine, sumTen, sumEleven, sumTwelve);

    return 0;
}

void printStatistics(int sumTwo, int sumThree, int sumFour, int sumFive,
                     int sumSix, int sumSeven, int sumEight, int sumNine,
                     int sumTen, int sumEleven, int sumTwelve) {
    printf("\nDice Roll Statistics:\n");
    printf("2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n10: %d\n11: %d\n12: %d\n",
           sumTwo, sumThree, sumFour, sumFive, sumSix, sumSeven,
           sumEight, sumNine, sumTen, sumEleven, sumTwelve);
}

void printHistogram(int sumTwo, int sumThree, int sumFour, int sumFive,
                    int sumSix, int sumSeven, int sumEight, int sumNine,
                    int sumTen, int sumEleven, int sumTwelve) {
    printf("\nDice Roll Histogram:\n\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d: ", i);
        int count;
        switch(i) {
            case 2: count = sumTwo; break;
            case 3: count = sumThree; break;
            case 4: count = sumFour; break;
            case 5: count = sumFive; break;
            case 6: count = sumSix; break;
            case 7: count = sumSeven; break;
            case 8: count = sumEight; break;
            case 9: count = sumNine; break;
            case 10: count = sumTen; break;
            case 11: count = sumEleven; break;
            case 12: count = sumTwelve; break;
        }
        for (int j = 0; j < count; j++) {
            printf("*");
        }
        printf("\n");
    }
}
