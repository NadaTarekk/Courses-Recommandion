#include <stdlib.h>
#include <string.h>
#include <stdio.h>



void main() {
	int plain = 0;
	printf("Enter a number between 0 and 15: ");
	scanf_s("%d", &plain);

	short A[36] = { 0 };  // Declare an array of 36 shorts
	short s[12] = { 0 };
	short t[12] = { 0 };
	short u[12] = { 0 };
	short v[4] = { 0 };


	toy_gen(A, t, s);
	toy_enc(A, t, plain, u, v);
	printf("Message after encryption: \n");
	printf("u is: \n ");
	for (int x = 0; x < 12; ++x) {
		printf("%d ", u[x]);
	}
	printf("\nv is: \n ");
	for (int x = 0; x < 4; ++x) {
		printf("%d ", u[x]);
	}
	int x = toy_dec(s, u, v);
	printf("\ndecrpted x is: %d \n", x);


}
