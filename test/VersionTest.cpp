#include <gtest/gtest.h>

#include "../lib.h"

TEST(VersionTest, DemoVersionTest){
    ASSERT_GT(version(),0);
}
