#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	double values[16];
	int valueCount;

	signed int a;
	signed int b;

	puts("Enter two numbers such that:\na > 100\nb > 100\na + b < 100");

	printf("a: ");
	scanf("%d", &a);
	if (a < 100) {
		puts("That number was to small!!");
		return 1;
	}

	printf("b: ");
	scanf("%d", &b);
	if (a < 100) {
                puts("That number was to small!!");
		return 1;
        }


	signed int c = a + b;
	if (c >= 100) {
		puts("a + b is too big !!");
		return 1;
	}

	printf("This might help with the next step: %p\n", puts);

	puts("How many values do you want to enter?");
	scanf("%d", &valueCount);

	for (int i = 0; i < valueCount; i++) {
		scanf("%lf", &values[i]);
	}

	return 0;
}


