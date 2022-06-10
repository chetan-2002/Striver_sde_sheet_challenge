#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    Node<int> *a = first;
    Node<int> *b = second;
    Node<int> *temp = new Node<int>(0);
    Node<int> *head = temp;
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            temp->next = a;
            a = a->next;
        }
        else
        {
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }
    if (a != NULL)
    {
        temp->next = a;
    }
    if (b != NULL)
    {
        temp->next = b;
    }
    return head->next;
}
