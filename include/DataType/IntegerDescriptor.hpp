#ifndef IntegerDescriptor_GUARD
#define IntegerDescriptor_GUARD

#include <DataType/DataTypeDescriptorBase.hpp>

class IntegerDescriptor: public DataTypeDescriptorBase{
public:
    std::string id();
};

#endif