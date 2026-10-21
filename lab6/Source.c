#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
task_one();
task_two();
homework();
int main() {
	task_one();
	task_two();
	homework();
}
int task_one() {
	puts("TASK ONE----------------------------------------------------------------------------------------------------------------");
	int years;
	puts("Enter the year:");
	scanf_s("%d", &years);
	if (years % 4 == 0) {
		printf("The year %d is a leap year \n", years);
	}
	else {
		printf("The year %d is not a leap year \n", years);
	}
	return 0;
}
int task_two() {
	puts("TASK TWO----------------------------------------------------------------------------------------------------------------");
	double x;
	double f;
	puts("Enter x:");
	scanf_s("%lf", &x);
	f = x <= 7 ? (-3 * x) + 9 : 1 / (x - 7);
	printf("F = %lf\n", f);
	return 0;
}
int homework() {
	puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
	int a, b, c;
	puts("Enter 3 numbers:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && c > b)
		printf("The product of the two largest numbers: %d", a * c);
	if (b > a && c > a)
		printf("The product of the two largest numbers: %d", b * c);
	if (a > c && b > c)
		printf("The product of the two largest numbers: %d", a * b);

}