#include <stdbool.h>
#include <criterion/criterion.h>

extern void do_test (bool b, const char *expected);

Test (Bool_to_word, sample_tests)
{
  do_test(true, "Yes");
  do_test(false, "No");
}
