#include <gtest/gtest.h>

#include <DataType/IntegerDescriptor.hpp>

TEST(IntegerDescriptor, ID) {
    IntegerDescriptor i;
    EXPECT_STREQ(i.id().c_str(), "INTEGER");
}

TEST(IntegerDescriptor, ID_Fail) {
    IntegerDescriptor i;
    EXPECT_STRNE(i.id().c_str(), "INTEGER");
}