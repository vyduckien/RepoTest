/* Just a program that perform arithemtic operations
 * Author: Kien Vy
 * Email: duckien.21@gmail.com
 * Date: 02/21/2021
 */

#include <stdio.h>
#include "functions.h"
#include <math.h>

int main(void) {

		printf("Hello World\n");
		
		/* Take input from user */
		int x, y;
		printf("Insert x, y: ");
		scanf("%d %d", &x, &y);
		int a;
		int b;

		/* Let user choose operation */
		int c;
		printf("1. Addition\n");
		printf("2. Multiplication\n");
		printf("Choose operation (1 - 2 ): ");
		scanf("%d", &c);
		switch(c) {
		case 1:
				printf("%d\n", add(x, y));
				break;
		case 2:
				printf("%d\n", multiply(x,y));
				break;
		}
		
	printf("Gay");
}
        