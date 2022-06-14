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

Node *rotate(Node *head, int k)
{
    // Write your code here.
    if (head == NULL || k == 0 || head->next == NULL)
        return head;
    int count = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        ++count;
        temp = temp->next;
    }
    k = k % count;
    temp->next = head;
    int end = count - k;
    while (end--)
    {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}