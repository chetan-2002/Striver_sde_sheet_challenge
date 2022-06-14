#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode<T> *random;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int> *, LinkedListNode<int> *> mp;
    LinkedListNode<int> *curr = head;
    while (curr)
    {
        mp[curr] = new LinkedListNode<int>(curr->data);
        curr = curr->next;
    }
    curr = head;
    while (curr)
    {
        mp[curr]->next = mp[curr->next];
        mp[curr]->random = mp[curr->random];
        curr = curr->next;
    }
    return mp[head];
}
