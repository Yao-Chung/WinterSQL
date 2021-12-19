#ifndef Field_GUARD
#define Field_GUARD

#include <utility>
#include <string>
#include <cstddef>
#include <DataType/DataType.hpp>

using Field = std::pair<std::string, DataType>;

struct FiledDescriptor{
    std::string name;
    DataTypeDescriptor dataType;
    std::size_t position;
};

#endif