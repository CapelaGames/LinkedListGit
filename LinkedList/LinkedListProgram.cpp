// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    cout << "Hello World!\n";

    LinkedList list;
    
    list.DeleteNode(0);

    list.InsertNode(3, 1);
    list.DeleteNode(0);
    list.InsertNode(3, 2);
    list.InsertNode(3, 3);
    list.InsertNode(3, 4);
    list.DeleteNode(6);
    list.InsertNode(3, 5);
    list.InsertNode(3, 6);
    list.InsertNode(3, 7);
    
    cout << "Elements are : \n";

    list.DeleteNode(3);

    list.PrintList();
    cout << endl;
    list.PrintListBackwards();
    cout << endl;

    string s;
    cin >> s;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
