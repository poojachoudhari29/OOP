#include <iostream>
#include <stdlib.h>
using namespace std;
class Stack
{
private:
    int *stack_array = NULL;
    int top, size;

public:
    Stack(int x)
    {
        size = x;
        stack_array = (int *)calloc(sizeof(int), size);
        top = -1;
    }
    int isFull()
    {
        if (top == size - 1)
        {
            return 1;
        }

        return 0;
    }
    int push(int data)
    {
        if (isFull() == 0)
        {
            top++;
            stack_array[top] = data;
            return 1;
        }
        cout<<"The stack is full "<<endl;
        return 0;
    }
    int pop()
    {
        if (top >= 0)
        {
            top--;
            return 1;
        }
       cout<<"The stack is empty "<<endl;
       return 0;
    }
    void Display()
    {
        if (top > -1)
        {

            for (int i = 0; i <= top; i++)
            {
                cout  << stack_array[i]<<" ";
            }
        }
    }
};

int main()
{
    Stack S1(10);
    int choice, data;
    while (1)
    {
        cout << "\nChoose from following\n"
             << "1-Push  2-pop  3-Display" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Give the data" << endl;
            cin >> data;
            S1.push(data);
            S1.Display();
        }
        else if (choice == 2)
        {
            S1.pop();
            S1.Display();
        }
        else if (choice == 3)
        {
            S1.Display();
            break;
        }
    }
}
