#include <Table/MemoryTable.hpp>

void MemoryTable::insert(RowType row){

}

std::size_t MemoryTable::remove(std::function<bool(RowType)> filter){

}
std::size_t MemoryTable::cardinality(){

}
std::size_t MemoryTable::degree(){
    
}

MemoryTable::iterator MemoryTable::begin(){
    return rows.begin();
}

MemoryTable::iterator MemoryTable::end(){
    return rows.end();
}