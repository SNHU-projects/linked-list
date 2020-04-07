#include <iostream>
#include <vector>
#include "ContactNode.h"

using namespace std;

vector<string> promptUser() {
    vector<string> userData;

    string name;
    string number;

    cout << "Enter name: " << endl;
    getline(cin, name);
    userData.push_back(name);
    cout << "Enter phone number: " << endl;
    getline(cin, number);
    userData.push_back(number);

    return userData;
}

int main() {

    vector<string> userData;

    ContactNode* headObj  = nullptr; // Create intNode objects
    ContactNode* nodeObj1 = nullptr;
    ContactNode* nodeObj2 = nullptr;
    ContactNode* currObj  = nullptr;

    cout << "Person 1" << endl;
    userData = promptUser();
    cout << "You entered: " << userData.at(0) << ", " << userData.at(1) << endl << endl;

    // Front of nodes list
    headObj = new ContactNode(userData.at(0), userData.at(1));

    cout << "Person 2" << endl;
    userData = promptUser();
    cout << "You entered: " << userData.at(0) << ", " << userData.at(1) << endl << endl;

    // Insert nodes
    nodeObj1 = new ContactNode(userData.at(0), userData.at(1));
    headObj->InsertAfter(nodeObj1);

    cout << "Person 3" << endl;
    userData = promptUser();
    cout << "You entered: " << userData.at(0) << ", " << userData.at(1) << endl << endl;

    // Insert nodes
    nodeObj2 = new ContactNode(userData.at(0), userData.at(1));
    nodeObj1->InsertAfter(nodeObj2);

    // Print linked list
    cout << "CONTACT LIST" << endl;
    currObj = headObj;
    while (currObj != nullptr) {
        currObj->PrintContactNode();
        currObj = currObj->GetNext();
    }

    return 0;
}
