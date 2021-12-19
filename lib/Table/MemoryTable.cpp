#include <Table/MemoryTable.hpp>

void MemoryTable::insert(RowType row){
    rows.push_back(row);
}

std::size_t MemoryTable::remove(std::function<bool(RowType)> filter){
    std::size_t remove_number = 0;
    for(auto row=rows.begin(); row!=rows.end(); ++row){
        if(filter(*row) == true){
            rows.erase(row);
            remove_number += 1;
        }
    }
    return remove_number;
}

std::size_t MemoryTable::cardinality(){
    return (std::size_t)rows.size();
}

std::size_t MemoryTable::degree(){
    if(rows.empty()){
        return 0;
    }
    return (std::size_t)(*rows.begin()).size();
}

MemoryTable::iterator MemoryTable::begin(){
    return rows.begin();
}

MemoryTable::iterator MemoryTable::end(){
    return rows.end();
}