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

Node *addTwoNumbers(Node *l1, Node *l2)
{

    Node *result_ans = new Node(0);
    Node *head = result_ans;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry > 0)
    {
        int result = carry + (l1 != NULL ? l1->data : 0) + (l2 != NULL ? l2->data : 0);
        Node *new_result = new Node(result % 10);
        carry = result / 10;
        l1 = (l1 == NULL ? l1 : l1->next);
        l2 = (l2 == NULL ? l2 : l2->next);
        result_ans->next = new_result;
        result_ans = result_ans->next;
    }
    return head->next;
}