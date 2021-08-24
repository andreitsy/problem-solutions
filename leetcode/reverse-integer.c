#include <stdio.h>
#include <limits.h>
#include <criterion/criterion.h>

/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 
  32-bit integer range [-2^31, 2^31 - 1], then return 0.
*/

int reverse(int x)
{
  int rez = 0;
  while (x != 0)
  {
    if (x > 0 && (rez > (INT_MAX - (x % 10)) / 10)) return 0;
    if (x < 0 && (rez < (INT_MIN - (x % 10)) / 10)) return 0;
    rez = rez * 10 + (x % 10);
    x = x / 10;
  }
  return rez;
}

Test(basic_tests, should_pass_all_the_tests_provided)
{
  cr_assert_eq(reverse(0), 0, "Should be 0");
  cr_assert_eq(reverse(123), 321, "Should be 321");
  cr_assert_eq(reverse(120), 21, "Should be 21");
  cr_assert_eq(reverse(32171), 17123, "Should be 17123");
  cr_assert_eq(reverse(-123), -321, "Should be -321");
  cr_assert_eq(reverse(11123), 32111, "Should be 32111");
  cr_assert_eq(reverse(1147483647), 0, "Should be 0");
  cr_assert_eq(reverse(1534236469), 0, "Should be 0");
  cr_assert_eq(reverse(1463847412), 2147483641, "Should be 0");
}
