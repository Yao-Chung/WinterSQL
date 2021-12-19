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
    std::list<RowType> &getRows(){
        return rows;
    }
};

TEST(MemoryTable, degree){
    MockMemoryTable table;
    EXPECT_EQ(table.degree(), 3);
}

TEST(MemoryTable, cardinality){
    MockMemoryTable table;
    EXPECT_EQ(table.cardinality(), 1);
}

TEST(MemoryTable, insert){
    MockMemoryTable table;
    std::list<RowType> &rows = table.getRows();
    table.insert({
        {"name", "HAHA"},
        {"age", 28},
        {"weight", 78.8},
    });
    EXPECT_EQ(rows.size(), 2);
}

TEST(MemoryTable, removeAll){
    MockMemoryTable table;
    std::size_t remove_number = table.remove([](RowType) -> bool {
        return true;
    });
    EXPECT_EQ(remove_number, 1);
}

