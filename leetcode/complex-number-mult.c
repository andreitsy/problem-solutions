#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <criterion/criterion.h>

/*
A complex number can be represented as a string on the form "real+imaginaryi" where:

real is the real part and is an integer in the range [-100, 100].
imaginary is the imaginary part and is an integer in the range [-100, 100].

i^2 == -1.

Given two complex numbers num1 and num2 as strings, 
return a string of the complex number that represents their multiplications.
*/

#define MAX_SIZE 100

double get_real_part(char *num) {
	double rez = 0;
	char *p = num;
	char rez_char[MAX_SIZE];
	int i = 0;
	while(*p != '+') {
		rez_char[i++] = *p;
		++p;
	}
	rez_char[i] = '\0';
	rez = atof(rez_char);
	return rez;
}

double get_img_part(char *num) {
	double rez = 0;
	char *p = num;
	char rez_char[MAX_SIZE];
	int i = 0;
	while(*p != '+') {
		++p;
	}
	++p;
	while(*p != 'i') {
		rez_char[i++] = *p;
		++p;
	}
	rez_char[i] = '\0';
	rez = atof(rez_char);
	return rez;
}


char *complexNumberMultiply(char *num1, char *num2)
{
	char *buffer = malloc(sizeof(char) * (MAX_SIZE + 1));
	int x_re = (int)get_real_part(num1);
	int x_img = (int)get_img_part(num1);
	int y_re = (int)get_real_part(num2);
	int y_img = (int)get_img_part(num2);

	int rez_re = x_re * y_re - x_img * y_img;
	int rez_img = x_re * y_img + x_img * y_re;

	sprintf(buffer, "%d+%di", rez_re, rez_img);
	return buffer;
}

Test(basic_tests, should_pass_all_the_tests_provided)
{
	cr_assert_str_eq(complexNumberMultiply("1+-1i", "1+-1i"), "0+-2i");
	cr_assert_str_eq(complexNumberMultiply("1+1i", "1+1i"), "0+2i");
	cr_assert_str_eq(complexNumberMultiply("1+2i", "10+-2i"), "14+18i");
}