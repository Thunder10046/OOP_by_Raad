#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node()
    {
    }
};

class test
{
public:
    ll ax[100], s[100], q[100], x, rear = -1, front = -1;
    ll top = -1;
    void input()
    {
        for (ll i = 0; i < 100; i++)
            cin >> ax[i];
    }
    void transfer()
    {

        for (ll i = 0; i < 100; i++)
        {
            top++;
            s[top] = ax[i];
        }
    }
    void queueIns()
    {
        while (top >= 0)
        {
            x = s[top];
            top--;
            if (x % 2)
            {
                if (rear + 1 == front)
                    continue;
                else
                {
                    rear++;
                    q[rear] = x;
                }
            }
        }
    }
    int dequeue()
    {
        int x;
        if (rear == front)
            printf("Queue is empty..\n");
        else
        {
            if (front == 99)
                front = 0;
            else
                front++;
            x = ax[front];
            return x;
        }
    }
    void treeIns(Node *&h, int key)
    {
        Node *node = new Node();
        if (!h)
        {
            h = node;
            return;
        }
        Node *p = NULL;
        Node *q = h;
        while (q)
        {
            if (q->val > key)
            {
                p = q;
                q = q->left;
            }
            else if (q->val < key)
            {
                p = q;
                q = q->right;
            }
        }
        if (p->val > key)
            p->left = node;
        else
            p->right = node;
    }
};
int main()
{

    test obj;
    Node *h = new Node();
    int x42;
    obj.input();
    obj.transfer();
    obj.queueIns();
    for (ll i42 = 0; i42 < 100; i42++)
    {
        x42 = obj.dequeue();
        obj.treeIns(h, x42);
    }
}