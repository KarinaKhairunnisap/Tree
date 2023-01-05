#include "tree.h"

adrNode newNode_1301213106(infotype x){
    adrNode p = new Node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
}
adrNode findNode_1301213106(adrNode root, infotype x){
    if(root == NULL){
        return NULL;
    }else{
        if(x < info(root)){
            return findNode_1301213106(left(root), x);
        }else if(x > info(root)){
            return findNode_1301213106(right(root), x);
        }else{
            return root;
        }
    }
}
void insertNode_1301213106(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
        if(info(p) < info(root)){
            return insertNode_1301213106(left(root), p);
        }else if(info(p) > info(root)){
            return insertNode_1301213106(right(root), p);
        }else{
            cout << "Angka yang diinput sudah ada";
        }
    }

}

void printPreOrder_1301213106(adrNode root){
    if(root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301213106(left(root));
        printPreOrder_1301213106(right(root));
    }

}
void printDescendant_1301213106(adrNode root, infotype x){
    adrNode Q = findNode_1301213106(root, x);
    if(Q != NULL){
        adrNode p = left(Q);
        adrNode k = right(Q);
        printPreOrder_1301213106(p);
        printPreOrder_1301213106(k);
    }else{
        cout << "Node tidak ada" << endl;
    }
}

int sumNode_1301213106(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        return info(root) + sumNode_1301213106(left(root)) + sumNode_1301213106(right(root));
    }
}

int countLeaves_1301213106(adrNode root){
    if(root == NULL){
        return 0;
    }else if(left(root) == NULL && right(root) == NULL){
        return 1;
    }else{
        return (countLeaves_1301213106(left(root)) + countLeaves_1301213106(right(root)));
    }
}

int heightTree_1301213106(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        return (heightTree_1301213106(left(root)), heightTree_1301213106(right(root))) + 1;
    }

}
