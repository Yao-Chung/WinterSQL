#include <Table/MemoryTable.hpp>

void MemoryTable::insert(RowType row){
    rows.insert(row);
}

std::size_t MemoryTable::remove(std::function<bool(RowType)> filter){
    std::size_t remove_number = 0;
    for(auto row: rows){
        if(filter(row) == true){
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
    // template<class T> T::iterator begin();
    // template<class T> T::iterator end();