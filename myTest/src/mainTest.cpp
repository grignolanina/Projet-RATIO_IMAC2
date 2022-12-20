#include <gtest/gtest.h>
#include <iomanip>
#include <numeric>


#include "constructor.hpp"
#include "plus.hpp"
#include "minus.hpp"
#include "multiple.hpp"
#include "divise.hpp"
#include "Ratio.hpp"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
