//
// Created by Jef DeWitt on 4/6/20.
//

#ifndef LINKED_LIST_CONTACTNODE_H
#define LINKED_LIST_CONTACTNODE_H

using namespace std;

class ContactNode {
public:
    ContactNode(string name, string phoneNum);
    void InsertAfter(ContactNode* nodeLoc);
    void GetName();
    void GetPhoneNumber();
    ContactNode* GetNext();
    void PrintContactNode();
private:
    string contactName;
    string contactPhoneNum;
    ContactNode* nextNodePtr;
};


#endif //LINKED_LIST_CONTACTNODE_H
