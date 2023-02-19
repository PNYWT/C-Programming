#include <stdio.h>
#include <stdlib.h>
int func_random(void);

main() {
    int rand_num, number;
    char status;

    do {
        rand_num = func_random();
        do {
            printf("Please guess number : ");
            scanf("%d", &number);
            if (rand_num < number)
                printf("This number less than you guess\n");
            else if (rand_num > number)
                printf("This number more than you guess\n");
            else if (rand_num == number)
                printf("You win , The number is %d\n", rand_num);
        } while (rand_num != number);
        printf("\nDo you want to continue\n");
        printf("Yes:press any key , No:press n ===> ");
        status = getche();
        printf("\n\n");
    } while (status != 'n');
}
int func_random(void) {
    int num;
    static int init_num = 10;
    srand(init_num);
    num = rand() % 99 + 1;
    if (init_num != 99) init_num += 5;
    else init_num = 0;
    return num;
}

/*	
	int func_random(void) {
		int num;
		srand((unsigned)time(NULL));
		num = rand()%99+1;
		return num;
	}
*/

/*
Please guess number : 50
This number more than you guess
Please guess number : 60
This number more than you guess
Please guess number : 70
This number more than you guess
Please guess number : 80
This number less than you guess
Please guess number : 75
This number less than you guess
Please guess number : 71
This number more than you guess
Please guess number : 72
You win , The number is 72

Do you want to continue
Yes:press any key , No:press n ===> n
*/