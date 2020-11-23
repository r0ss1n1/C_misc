#include <stdio.h>
/* Charles Thomas Wallace Truscott */
/* github.com/r0ss1n1 */

double perform_sum(float p, float q, float r, float s);
char * return_string(char char_input[30]);

char sum_text[30] = "The sum of the values is: ";
int main(void) {
	float p, q, r, s;
	p = 1.99;
	q = 0.11;
	r = 0.015;
	s = 1.215;

	printf("%s\t%f\n", return_string(sum_text), perform_sum(p, q, r, s));
	return 0;
}

double perform_sum(float p, float q, float r, float s) {
	return p + q + r + s;
}

char * return_string(char char_input[30]) {
	return (char *) char_input;
}