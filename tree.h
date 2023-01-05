#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define left(P) (P)->left
#define right(P) (P)->right

typedef int infotype;

typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode right;
    adrNode left;
};

typedef adrNode binTree;

adrNode newNode_1301213106(infotype x);
adrNode findNode_1301213106(adrNode root, infotype x);
void insertNode_1301213106(adrNode &root, adrNode p);
void printPreOrder_1301213106(adrNode root);
void printDescendant_1301213106(adrNode root, infotype x);
int sumNode_1301213106(adrNode root);
int countLeaves_1301213106(adrNode root);
int heightTree_1301213106(adrNode root);
#endif // TREE_H_INCLUDED
