//
// Created by tomas on 23.05.2022.
//

#ifndef MAIN_CPP_TREE_H
#define MAIN_CPP_TREE_H
#include "iostream"
using namespace std;


class Tree {
string Tekst;
struct branch;
struct node{
    char value;
    branch *pointerToLeftBranch;
    branch *pointerToRightBranch;
};
struct branch {
    int value;
    node *pointerToNode;
};
node * root;
public:
    void copyText();
    node * createNode();
    branch * createBranch();
};


#endif //MAIN_CPP_TREE_H
