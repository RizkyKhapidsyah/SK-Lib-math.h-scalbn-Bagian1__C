#include <stdio.h>      /* printf */
#include <float.h>      /* FLT_RADIX */
#include <math.h>       /* scalbn */
#include <conio.h>

int main() {
	double x, hasil;
	int n;

	x = 7.30;
	n = 9;
	hasil = scalbn(x, n);
	printf("%f * %d^%d = %f\n", x, FLT_RADIX, n, hasil);

	_getch();
	return 0;
}