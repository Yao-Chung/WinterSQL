#ifndef Table_GUARD
#define Table_GUARD

#include <cstddef>
#include <iterator>
#include <functional>
#include <RowType.hpp>
#include <Column.hpp>
#include <list>
#include <map>

template<class Iter>
struct Table{
    virtual void insert(RowType) = 0;
    virtual std::size_t remove(std::function<bool(RowType)> filter) = 0;
    virtual std::size_t cardinality() = 0;
    virtual std::size_t degree() = 0;

    virtual Iter begin() = 0;
    virtual Iter end() = 0;
};

struct TableDescriptor{
    std::map<std::string, ColumnDescriptor> columns;
    std::string superTable;
    std::list<std::string> derivedTables;
};

#endif