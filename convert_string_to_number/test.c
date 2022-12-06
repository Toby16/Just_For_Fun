
#include <criterion/criterion.h>
#include "main.h"

Test(ExampleTests, ShouldPassAllTheTestsProvided)
{
	cr_assert_eq(string_to_number("1234"), 1234);
	cr_assert_eq(string_to_number("605"), 605);
	cr_assert_eq(string_to_number("1405"), 1405);
	cr_assert_eq(string_to_number("-7"), -7);
}
