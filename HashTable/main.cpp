//
//  main.cpp
//  HashTable
//
//  Created by Brandon Jinright on 11/18/19.
//  Copyright © 2019 Brandon Jinright. All rights reserved.
//

#include <iostream>
#include "Hash.h"

using namespace std;
using namespace hash_space;

int str_size(string str);

int main(int argc, const char * argv[]) {
    HashTable<string, string> hash;
    int hash_val;
    
    //initialize hash table
    hash.init();
    
    hash_val = hash.hash_function("Dummy Value", 16);
    hash.insert(hash_val, "Dummy Value", "256-222-4444");
    
    hash_val = hash.hash_function("Brandon Jinright", 12);
    hash.insert(hash_val, "Brandon Jinright", "256-998-2862");
    
    hash.print();
    
    return 0;
}

int str_size(string str) {
    int size = 0;
    
    
    
    return size;
}
