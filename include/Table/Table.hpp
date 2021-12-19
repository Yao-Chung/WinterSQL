#ifndef Table_GUARD
#define Table_GUARD

#include <cstddef>
#include <iterator>
#include <functional>
#include <RowType.hpp>

struct Table{
    virtual void insert(RowType) = 0;
    virtual std::size_t remove(std::function<bool(RowType)> filter) = 0;
    virtual std::size_t cardinality() = 0;
    virtual std::size_t degree() = 0;
    template<class T> T::iterator begin();
    template<class T> T::iterator end();
};

#endif