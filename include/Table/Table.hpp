#ifndef Table_GUARD
#define Table_GUARD

#include <cstddef>
#include <iterator>
#include <functional>
#include <RowType.hpp>

struct Table{
    using TableIterator = std::iterator<std::random_access_iterator_tag, RowType>;
    virtual void insert(RowType) = 0;
    virtual std::size_t remove(std::function<bool(RowType)> filter) = 0;
    virtual std::size_t cardinality() = 0;
    virtual std::size_t degree() = 0;
    virtual TableIterator begin() = 0;
    virtual TableIterator end() = 0;
};


#endif