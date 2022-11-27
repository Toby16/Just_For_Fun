#include <criterion/criterion.h>

int points(const char* const games[10]);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
  {
    const char* const games[10] = {"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"};
    int expected = 30;
    int submitted = points(games);
    cr_assert_eq(expected, submitted,
                 "Expected: %d  Submitted: %d\n", expected, submitted);
  }
  {
    const char* const games[10] = {"1:1","2:2","3:3","4:4","2:2","3:3","4:4","3:3","4:4","4:4"};
    int expected = 10;
    int submitted = points(games);
    cr_assert_eq(expected, submitted,
                 "Expected: %d  Submitted: %d\n", expected, submitted);
  }
  {
    const char* const games[10] = {"0:1","0:2","0:3","0:4","1:2","1:3","1:4","2:3","2:4","3:4"};
    int expected = 0;
    int submitted = points(games);
    cr_assert_eq(expected, submitted,
                 "Expected: %d  Submitted: %d\n", expected, submitted);
  }
  {
    const char* const games[10] = {"1:0","2:0","3:0","4:0","2:1","1:3","1:4","2:3","2:4","3:4"};
    int expected = 15;
    int submitted = points(games);
    cr_assert_eq(expected, submitted,
                 "Expected: %d  Submitted: %d\n", expected, submitted);
  }
  {
    const char* const games[10] = {"1:0","2:0","3:0","4:4","2:2","3:3","1:4","2:3","2:4","3:4"};
    int expected = 12;
    int submitted = points(games);
    cr_assert_eq(expected, submitted,
                 "Expected: %d  Submitted: %d\n", expected, submitted);
  }
}
