#include <stdio.h>

main() {
	int num[5], i, max, min, sum = 0;
	float avg = 0.0;

	for (i = 0; i < 5; i++) {
		num[i] = 0;
		printf("Enter number%d : ", i + 1);
		scanf("%d", &num[i]);
	}
	max = num[0];
	min = num[0];
	for (i = 0; i < 5; i++) {
		if (num[i] > max)
			max = num[i];
		else if (num[i] < min)
			min = num[i];
		sum = sum + num[i];
	}
	avg = (float) sum / 5;
	printf("\nMax value is %d", max);
	printf("\nMin value is %d", min);
	printf("\nSum of your number is %d", sum);
	printf("\nAverage of your number is %.2f", avg);
}

/* result
Enter number1 : 1
Enter number2 : 12
Enter number3 : 31
Enter number4 : 40
Enter number5 : 29
Max value is 40
Min value is 1
Sum of your number is 113
Average of your number is 22.60
*/