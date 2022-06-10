#include <bits/stdc++.h>
using namespace std;
template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int k)
{
    if (k == 0)
        return head;

    LinkedListNode<int> *dummy = new LinkedListNode<int>(0);
    dummy->next = head;
    LinkedListNode<int> *slow = dummy;
    LinkedListNode<int> *fast = dummy;
    for (int i = 1; i <= k; ++i)
    {
        fast = fast->next;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}
