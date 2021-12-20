#ifndef BaseTable_GUARD
#define BaseTable_GUARD

#include <misc.hpp>
#include <Table/Table.hpp>

using BaseTable = Site<Table>;
class BaseTableDescriptor : public TableDescriptor{
public:
    std::string name;
};
using PersistentBaseTableDescriptor = BaseTableDescriptor;

#endif