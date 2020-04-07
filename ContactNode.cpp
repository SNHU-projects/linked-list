//
// Created by Jef DeWitt on 4/6/20.
//

#include <iostream>
#include "ContactNode.h"

using namespace std;

// Constructor
ContactNode::ContactNode(string name, string phoneNum) {
    this->contactName = name;
    this->contactPhoneNum = phoneNum;
}

/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
void ContactNode::InsertAfter(ContactNode* nodeLoc) {
    ContactNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}

// Print dataVal
void ContactNode::PrintContactNode() {
    cout << "Name: " << this->contactName << endl;
    cout << "Phone number: " << this->contactPhoneNum<< endl;
}

// Grab location pointed by nextNodePtr
ContactNode* ContactNode::GetNext() {
    return this->nextNodePtr;
}
