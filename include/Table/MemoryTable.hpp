#ifndef MemoryTable_GUARD
#define MemoryTable_GUARD

#include <Table/Table.hpp>
#include <list>
class MemoryTable : public Table<std::unordered_set<RowType>::iterator>{
private:
    std::list<RowType> rows;
public:
    void insert(RowType row);
    std::size_t remove(std::function<bool(RowType)> filter);
    std::size_t cardinality();
    std::size_t degree();

    using iterator = std::unordered_set<RowType>::iterator;
    iterator begin();
    iterator end();
};

#endif