#ifndef DataTypeDescriptorBase_GUARD
#define DataTypeDescriptorBase_GUARD

#include <string>

struct DataTypeDescriptorBase{
    virtual std::string id() = 0;
};

#endif