// au2.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
#define SQURE(x) (x)*(x)
int main()
{
	int x, y, z;
	printf("Enter sides of triangle:");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("You enter:%d %d %d\n", x, y, z);
	int a = SQURE(x) - (SQURE(y) + SQURE(z));
	int b = SQURE(y) - (SQURE(x) + SQURE(z));
	int c = SQURE(z) - (SQURE(y) + SQURE(x));
	if (a == 0 || b == 0 || c == 0) {
		printf("Triangle is right");
	}
	else {
		if (x == y && x == z && y == z) {
			printf("Triangle is equilateral\n");
		}
		else {
			if (x == y || x == z || y == z) {
				printf("Triangle is isosceles\n");
			}
			else {
				printf("Triangle is scalene\n");
			}
		}
	}
	return 0;
}