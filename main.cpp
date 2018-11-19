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
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
    cout << "Testing the Tree for type [string] " << endl << endl;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << endl << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    cout << "Making the tree empty" << endl;
    bst.makeEmpty();


    cout << "inserting '9'" << endl;
    s = "9";
    bst.insertItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    //s = "9";
    cout << "is '9' in the tree?" << endl;
    if(bst.isItemInTree(s)){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    cout << "---------------------------------------" << endl;
    cout << "Testing the Tree for type [Int] " << endl << endl;
    BST_312<int> int_test;

    int item = 162;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 378;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 95;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 72;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 105;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 205;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 406;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 193;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 321;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 393;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 1052;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 172;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 200;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 305;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 98;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 3;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    item = 85;
    cout << "inserting ... " << item << endl;
    int_test.insertItem(item);

    cout << "postorder traversal is " << endl;
    print(int_test.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(int_test.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(int_test.inOrderTraversal());
    cout << endl;

    cout << "is 172 in the tree? " << endl;
    if(int_test.isItemInTree(172)){
        cout << "yes" << endl << endl;
    }
    else {
        cout << "no" << endl;
    }

    cout << "number of nodes in tree : " << int_test.countNodes() << endl << endl;

    cout << "deleting 200 from the tree "<< endl;
    int_test.deleteItem(200);
    cout << "number of nodes after deleting the item " << int_test.countNodes() << endl << endl;

    cout << "deleting 1052 from the tree " << endl;
    item = 1052;
    int_test.deleteItem(item);
    cout << "number of nodes after deleting the item " << int_test.countNodes() << endl << endl;

    cout << "making tree empty... " << endl;
    int_test.makeEmpty();
    cout << "number of nodes in tree " << int_test.countNodes() << endl << endl;
    cout << "trying to print traversals of empty trees... " << endl << endl;
    print(int_test.preOrderTraversal());
    print(int_test.postOrderTraversal());
    print(int_test.inOrderTraversal());

    item = 72;
    cout << "inserting ... " << item << endl << endl;
    int_test.insertItem(item);

    cout << "postorder traversal is " << endl;
    print(int_test.postOrderTraversal());
    cout << "---------------------------------------" << endl << endl;
    cout << "Testing the Tree for type [char] " << endl;
    BST_312<char> char_test;

    char c = 'T';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'H';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'U';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'I';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'Z';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'D';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'K';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'B';
    cout << "inserting ... " << c << endl;
    char_test.insertItem(c);

    c = 'X';
    cout << "inserting ... " << c << endl << endl;
    char_test.insertItem(c);


    cout << "postorder traversal is " << endl;
    print(char_test.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(char_test.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(char_test.inOrderTraversal());
    cout << endl;

    cout << "number of nodes in tree : " << char_test.countNodes() << endl << endl;

    cout << "is X in the tree? " << endl;
    if(char_test.isItemInTree('X')){
        cout << "yes" << endl << endl;
    }
    else {
        cout << "no" << endl;
    }
    cout << "is C in the tree? " << endl;
    if(int_test.isItemInTree('C')){
        cout << "yes" << endl << endl;
    }
    else {
        cout << "no" << endl;
    }
    cout << "deleting I from the tree "<< endl;
    char_test.deleteItem('I');
    cout << "number of nodes after deleting the item " << char_test.countNodes() << endl << endl;

    cout << "deleting U from the tree " << endl;
    item = 'U';
    char_test.deleteItem(item);
    cout << "number of nodes after deleting the item " << char_test.countNodes() << endl << endl;

    cout << "making the tree empty" << endl;
    char_test.makeEmpty();

    cout << "printing an empty list " << endl;
    print(char_test.preOrderTraversal());

    cout << "---------------------------------------" << endl << endl;

    BST_312<double> double_test;
    double x = 162;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 378;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 95;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 72;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 105;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 205;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 406;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 193;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 321;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 393;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 1052;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 172;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 200;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 305;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 98;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 3;
    cout << "inserting ... " << x << endl;
    double_test.insertItem(x);

    x = 85;
    cout << "inserting ... " << x << endl << endl;
    double_test.insertItem(x);

    cout << "preorder traversal is " << endl;
    print(double_test.preOrderTraversal());
    cout << endl;

    cout << "---------------------------------------" << endl << endl;






}

