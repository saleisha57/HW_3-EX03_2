#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello 
#include<iostream>
#include<stdexcept>
#include <boost/test/unit_test.hpp>
#include <exception>
#include "readint.h"

using namespace std;

BOOST_AUTO_TEST_CASE(Test_1)
{
  BOOST_CHECK(read_int("Please enter a number within the range: ", -3, 3) );
}

BOOST_AUTO_TEST_CASE(Test_2)
{
   BOOST_CHECK(read_int("Please enter a number within the range: ", 5, 1) );
}

BOOST_AUTO_TEST_CASE(Test_3)
{
   BOOST_CHECK(read_int("Please enter a number within the range: ", 0, 4) );
}

BOOST_AUTO_TEST_CASE(Test_4)
{
   BOOST_CHECK(read_int("Please enter a number within the range: ", 0, 0) );
}

