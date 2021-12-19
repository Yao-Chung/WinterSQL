#ifndef RowType_GUARD
#define RowType_GUARD

#include <map>
#include <vector>
#include <string>
#include <DataType/DataType.hpp>
#include <Field.hpp>

using RowType = std::map<std::string, DataType>;
using RowTypeDescriptor = std::vector<FiledDescriptor>;

#endif