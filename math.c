#include <stdio.h>
#include "math.h"

float add(void) {

	float sum = 0, input1 = 0, input2 = 0;

	printf("Enter two numbers to add\n");
	scanf("%f %f", &input1, &input2);
	sum = input1 + input2;
	printf("%0.2f + %0.2f = %0.2f\n", input1, input2, sum);

	return sum;
}

float sub(void) {

	float sum = 0, input1 = 0, input2 = 0;

	printf("Enter two numbers to subtract\n");
	scanf("%f %f", &input1, &input2);
	sum = input1 - input2;
	printf("%0.2f - %0.2f = %0.2f\n", input1, input2, sum);

	return sum;
}

float multiply(void) {

	float sum = 0, input1 = 0, input2 = 0;

	printf("Enter two numbers to multiply\n");
	scanf("%f %f", &input1, &input2);
	sum = input1 * input2;
	printf("%0.2f * %0.2f = %0.2f\n", input1, input2, sum);

	return sum;
}

float divide(void) {

	float sum = 0, input1 = 0, input2 = 0;

	printf("Enter two numbers to divide\n");
	scanf("%f %f", &input1, &input2);
	sum = input1 / input2;
	printf("%0.2f / %0.2f = %0.2f\n", input1, input2, sum);

	return sum;
}