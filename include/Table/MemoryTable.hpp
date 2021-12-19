#ifndef MemoryTable_GUARD
#define MemoryTable_GUARD

#include <Table/Table.hpp>

class MemoryTable : public Table{
public:
    void insert(RowType);
    std::size_t remove(std::function<bool(RowType)> filter);
    std::size_t cardinality();
    std::size_t degree();
    template<class T> T::iterator begin();
    template<class T> T::iterator end();
};

#endif