
// gtest/gtest.h must be included here
#include <gtest/gtest.h>
#include "../code/Vector10.h"

#include <fstream>
#include <iostream>

class test_Vector10 : public ::testing::Test {
protected:
	static void SetUpTestCase(){
	}

	// This function runs only once before any TEST_F function
	static void TearDownTestCase(){
		std::ofstream outgrade("./total_grade.txt");
		if(outgrade.is_open())
		outgrade.clear();

		outgrade << total_grade;
		outgrade.close();
	}

	// This function runs after all TEST_F functions have been executed
	void add_points_to_grade(int points){
		if(!::testing::Test::HasFailure()){
			total_grade += points;
		}
	}

	// this function runs before every TEST_F function
	void SetUp() override {}

	// this function runs after ever TEST_F function
	void TearDown() override {}
	
    Vector10 testvec;
	static int total_grade;
};

int test_Vector10::total_grade = 0;

TEST_F(test_Vector10, Initialization){
    for(int ii=0; ii<10; ii++){
        EXPECT_EQ(0,testvec.ValueAt(ii));
        add_points_to_grade(10);
    }
}

