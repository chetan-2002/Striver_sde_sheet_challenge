#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_set<Node *> s;
    Node *curr = firstHead;
    while (curr)
    {
        s.insert(curr);
        curr = curr->next;
    }
    curr = secondHead;
    while (curr)
    {
        if (s.find(curr) != s.end())
            return curr->data;
        curr = curr->next;
    }
    return -1;
}