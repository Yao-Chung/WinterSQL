#ifndef Column_GUARD
#define Column_GUARD

#include <string>
#include <DataType/DataType.hpp>
#include <cstddef>

struct ColumnDescriptor{
    std::string name;
    DataTypeDescriptor dataType;
    DataType defaultValue;
    bool nullable;
    bool updatable;
    bool selfReference;
    bool identity;
    bool generative;
    std::size_t position;
};
#endif