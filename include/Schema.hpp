#ifndef Schema_GUARD
#define Schema_GUARD

#include <string>
#include <Table/BaseTable.hpp>
#include <map>
struct Schema{
    std::string name;
    std::map<std::string, BaseTableDescriptor> baseTables;
};

#endif