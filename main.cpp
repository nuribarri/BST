// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    //BST_312<string> bst;
   BST_312<int> bst;
   int s;
    //string s;
    inFile >> s;
    //s = "This is a series of words to test the tree";
    //cout << s;
    while (inFile) {
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);;
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    //s = "tree";
    s = 6;
    bst.deleteItem(s);
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;


    cout << "Checking if series is in Tree  " << endl;
//    string is = "series";
    bool isItem;
    int is = 5;
    isItem = bst.isItemInTree(is);

    if(isItem){
        cout << "Yes, the function works" << endl;
    }


    cout << "Checking make empty" << endl;
    bst.makeEmpty();
    print(bst.postOrderTraversal());
    cout << "If empty, it worked" << endl;


}

