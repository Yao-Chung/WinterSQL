#ifndef IntegerDescriptor_GUARD
#define IntegerDescriptor_GUARD

#include <DataType.hpp>
#include <DataTypeDescriptorBase.hpp>
class IntegerDescriptor: public DataTypeDescriptorBase{
public:
    std::string id();
};

#endif