#include <gtest/gtest.h>

#include <Table/MemoryTable.hpp>

struct MockMemoryTable: public MemoryTable{
    MockMemoryTable(){
        rows.push_back({
            {"name", "test"},
            {"age", 20},
            {"weight", 50.8},
        });
    }
};

TEST(MemoryTable, degree){
    MockMemoryTable table;
    EXPECT_EQ(table.degree(), 3);
}