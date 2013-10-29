#include "test_registrator.h"
#include "temp.h"

namespace test
{

}

void test::test_add_user()
{
	BOOST_TEST_MESSAGE( "Starting test_add_user" );
	BOOST_CHECK_NO_THROW(test::my_data("Brych","Serg"));


	test::my_data data("Brych","Serg");
	BOOST_CHECK_EQUAL(data.GetSurName(), "Brych");
	BOOST_CHECK_EQUAL(data.GetName(), "Serg");
	
	BOOST_TEST_MESSAGE( "Ended test_add_user" );
}

void test::test_change_user_name()
{
	test::my_data data("Brych","Serg");
	data.SetName("Serg1");
	BOOST_CHECK_EQUAL(data.GetName(), "Serg");
}