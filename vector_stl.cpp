#include <iostream>
using namespace std;
class Polish
{
    int stack[20];
    int top = -1;

public:
    void push(int x)
    {
        stack[++top] = x;
    }
    int pop()
    {
        return stack[top--];
    }
    void PostFix(char *e)
    {
        int n1, n2, n3, num;
        while (*e != '\0')
        {
            if (isdigit(*e))
            {
                num = *e - 48;
                push(num);
            }
            else
            {
                n1 = pop();
                n2 = pop();
                switch (*e)
                {
                case '+':
                    n3 = n1 + n2;
                    break;
                case '-':
                    n3 = n2 - n1;
                    break;
                case '*':
                    n3 = n1 * n2;
                    break;
                case '/':
                    n3 = n2 / n1;
                    break;
                }
                push(n3);
            }
            e++;
        }
        cout << "=" << pop();
    }
};

int main()
{
    char exp[20];
    char *e;
    cout << "Enter the expression :: ";
    cin >> exp;
    Polish p;
    cout << "\nThe result of expression " << exp;
    p.PostFix(exp);
    return 0;
}