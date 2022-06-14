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

bool detectCycle(Node *head)
{
    //	Write your code here
    Node *slow = head;
    Node *fast = head;
    if (head == NULL)
        return false;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}