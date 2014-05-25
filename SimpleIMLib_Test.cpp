
#include <stdexcept>
#include "Image2D.h"

#include "gtest/gtest.h"


namespace{
	class SimpleIMLibTest : public ::testing::Test{
	protected:
			SimpleIMLibTest()
    	{
        	// You can do set-up work for each test here.
    	}

		virtual void SetUp()
    	{

    	}
	};

	TEST_F(SimpleIMLibTest, OnePGMFileIsOpened){
		std::string pgmfilename = "testimage.pgm";
		int expected_width = 12;
		int expected_height = 24;
		Image2D image = Image2D(pgmfilename);


		ASSERT_EQ(expected_width,image.getWidth());
		ASSERT_EQ(expected_height, image.getHeight());

	}
}