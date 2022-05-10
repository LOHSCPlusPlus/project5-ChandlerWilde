#include "Node.h"
#include <iostream>


Node :: Node(){
    next = nullptr;
}

Node :: Node(Inventor val){
    data = val;
    next = nullptr;
}
