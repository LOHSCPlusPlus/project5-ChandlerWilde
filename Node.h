#pragma once
#include "Inventor.h"
struct Node {

    Node *next;
    Inventor data;
    Node();
    Node(Inventor val);

};
