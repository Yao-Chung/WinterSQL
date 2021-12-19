#ifndef DataType_GUARD
#define DataType_GUARD

#include <any>
#include <variant>
#include <DataType/IntegerDescriptor.hpp>

using DataType = std::any;
using DataTypeDescriptor = std::variant<IntegerDescriptor>;

#endif