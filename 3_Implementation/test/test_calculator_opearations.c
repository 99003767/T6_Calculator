#include "unity.h"
#include "operation.h"
#include"trignometry.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);

void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_trig(void);
void test_trig1(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);

  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_trig);
   RUN_TEST(test_trig1);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  

}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
 
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  

}
void test_trig(void) {
  TEST_ASSERT_EQUAL(0.893997, sin_angle(90));
  
  
}
void test_trig1(void) {
  TEST_ASSERT_EQUAL(0, cos_angle(90));
  
  
}
