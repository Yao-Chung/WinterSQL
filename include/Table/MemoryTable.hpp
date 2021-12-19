#ifndef MemoryTable_GUARD
#define MemoryTable_GUARD

#include <Table/Table.hpp>
#include <list>
class MemoryTable : public Table<std::list<RowType>::iterator>{
protected:
    std::list<RowType> rows;
public:
    void insert(RowType row);
    std::size_t remove(std::function<bool(RowType)> filter);
    std::size_t cardinality();
    std::size_t degree();

    using iterator = std::list<RowType>::iterator;
    iterator begin();
    iterator end();
};

#endif