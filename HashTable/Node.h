#ifndef Node_h
#define Node_h

namespace node_space {

template<typename U, typename V>
struct Node {
    U key;
    V data;
    Node<U, V>* next;
};

template<typename U, typename V>
class LinkedList {
public:
    LinkedList<U, V> () {
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    void init() {
        head = nullptr;
        tail = nullptr;
    }
    
    void insert(U key_val, V data_val) {
        Node<U, V>* temp = new Node<U, V>;
        temp->key = key_val;
        temp->data = data_val;
        
        if(head == nullptr && tail == nullptr){
            //if linked list is empty
            head = temp;
            tail = temp;
            
            head->next = tail;
            tail->next = nullptr;
        } else {
            //if not, insert at tail
            temp->next = nullptr;
            tail->next = temp;
            tail = temp;
        }
        
        size++;
    }
    
    void print() {
        Node<U, V>* current = new Node<U, V>;
        current = head;
        
        while(current!=nullptr){
            std::cout<<"("<<current->key<<", "<<current->data<<"); ";
            current = current->next;
        }
    }
    
private:
    int size;
    Node<U, V>* head;
    Node<U, V>* tail;
};

}

#endif
