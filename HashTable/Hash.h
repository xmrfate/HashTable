#ifndef Hash_h
#define Hash_h

#include "Node.h"

using namespace node_space;

namespace hash_space {

template<typename U, typename V>
class HashTable {
public:
    HashTable<U, V> () {
        size = 0;
    }
    
    void init() {
        for(int i=0;i<61;i++){
            hash_table[i].init();
        }
    }
    
    int hash_function(U key, int size){
        int hash = 0;
        int sum = 0;
        
        for(int i=0;i<size;i++){
            sum = sum + (i * (int)key[i]);
        }
        
        hash = sum % 61;
        return hash;
    }
    
    void insert(int pos, U key, V data){
        hash_table[pos].insert(key, data);
        size++;
    }
    
    void print() {
        for(int i=0;i<61;i++){
            std::cout<<"Pos "<<i<<": ";
            hash_table[i].print();
            std::cout<<std::endl;
        }
    }
    
private:
    LinkedList<U, V> hash_table[61];
    int size;
};

}

#endif
