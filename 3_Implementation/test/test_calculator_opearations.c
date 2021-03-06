#include <unity.h>
#include "operation.h"
#include"trignometry.h"
#include"Conversion.h"
#include "BMI.h"
/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);

void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_trig(void);
void test_trig1(void);
void conv(void);
void bmic(void);

 



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
   RUN_TEST(conv);
   RUN_TEST(bmic);

  
   



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
void conv(void)
{
TEST_ASSERT_EQUAL(13.88, P_D(10));  
}
void bmic(void)
{
  TEST_ASSERT_EQUAL(underwt, bmicon(400,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(600,7)); 

   TEST_ASSERT_EQUAL(normalwt, bmicon(530,5)); 

   TEST_ASSERT_EQUAL(normalwt, bmicon(800,6)); 

   TEST_ASSERT_EQUAL(overwt, bmicon(700,5)); 

   TEST_ASSERT_EQUAL(overwt, bmicon(900,6)); 

   TEST_ASSERT_EQUAL(obesity, bmicon(700,4)); 
 TEST_ASSERT_EQUAL(obesity, bmicon(600,4)); 
  

}

   
