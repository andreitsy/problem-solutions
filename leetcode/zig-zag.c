#include <stdio.h>
#include <limits.h>
#include <criterion/criterion.h>

/*
The string "PAYPALISHIRING" is written in a zigzag
pattern on a given number of rows like this: 
(you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and
make this conversion given a number of rows:

string convert(string s, int numRows);
*/


char * convert(char * s, int numRows)
{

}

Test(basic_tests, should_pass_all_the_tests_provided)
{
	cr_assert_str_eq(convert("PAYPALISHIRING", 3), "PAHNAPLSIIGYIR");
}