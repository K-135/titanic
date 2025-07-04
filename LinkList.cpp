#include "../include/LinkList.hpp"

LinkList::LinkList() {
    head = new Node(); 
    head->next = nullptr;
}

LinkList::~LinkList() {
    Node* p = head->next;
    while (p) {
        Node* temp = p;
        p = p->next;
        delete temp;
    }
    delete head;
}

// 其他成员函数实现（同之前代码，此处省略，需完整复制）