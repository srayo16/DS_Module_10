#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }

    void show()
    {
        cout << val << " " << prev << " " << next << endl;
    }
};

void printing(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node *&head, Node *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }

    reverse(head, curr->next);

    curr->next->next = curr;
    curr->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    printing(head);
    reverse(head, head);
    printing(head);
    return 0;
}