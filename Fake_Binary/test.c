#include <criterion/criterion.h>

extern void doTest (const char *input, const char *expected);

Test(Tests, SampleTests)
{
	doTest("45385593107843568", "01011110001100111");
	doTest("509321967506747", "101000111101101");
	doTest("366058562030849490134388085", "011011110000101010000011011");
	doTest("15889923", "01111100");
	doTest("800857237867", "100111001111");
}
