#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    cout << "=============================================" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int i;
    for(i = 0; i < 9; i++){
        cout << x[i] << " ";
    }
    cout << endl;

    binTree tree = NULL;
    adrNode p;
    int n;

    for(n = 0; n < 9; n++){
        p = newNode_1301213106(x[n]);
        insertNode_1301213106(tree, p);
    }

    printf("\nPre Order\t\t: ");
    printPreOrder_1301213106(tree);

    printf("\n");
    printf("\nDescendant of node 9\t: ");
    printDescendant_1301213106(tree, 9);

    cout << endl << endl;

    cout << "Sum of BST Info\t\t: " << sumNode_1301213106(tree) << endl;
    cout << "Number of leaves\t: " << countLeaves_1301213106(tree) << endl;
    cout << "Height of tree\t\t: " << heightTree_1301213106(tree) << endl;

    cout << "=============================================";
    return 0;
}
