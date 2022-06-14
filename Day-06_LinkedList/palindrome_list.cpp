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

bool isPalindrome(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int> *curr = head;
    vector<int> vec;
    while (curr)
    {
        vec.push_back(curr->data);
        curr = curr->next;
    }
    int low = 0;
    int high = vec.size() - 1;
    while (low < high)
    {
        if (vec[low++] != vec[high--])
            return false;
    }
    return true;
}