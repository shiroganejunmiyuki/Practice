#include <iostream>
using namespace std;

struct Node {
    int data;    // 存储数据
    Node* next;  // 指向下一个节点
};

int main() {
    // 创建 3 个节点
    Node* head = new Node{1, nullptr};  
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    // 连接节点
    head->next = second;
    second->next = third;

    // 遍历链表
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
