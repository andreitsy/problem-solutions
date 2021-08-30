
#include <stdio.h>
#include <limits.h>
#include <criterion/criterion.h>

/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward
as forward. For example, 121 is palindrome while 123 is not.
*/

bool isPalindrome(int x){
	int init_val = x;
	int reverse_x = 0;
	if (x < 0) return false;
	while (x > 0) {
		reverse_x = reverse_x * 10 + (x % 10);
		x /= 10;
	}
	return reverse_x == init_val;
}

Test(basic_tests, should_pass_all_the_tests_provided)
{
	cr_expect_eq(isPalindrome(-123), 0);
	cr_expect_eq(isPalindrome(121), 1);
	cr_expect_eq(isPalindrome(123), 0);
	cr_expect_eq(isPalindrome(10), 0);
	cr_expect_eq(isPalindrome(101), 1);
}