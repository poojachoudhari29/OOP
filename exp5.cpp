#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *insert_first(int data1)
    {
        node *head = new node;
        head->data = data1;
        head->next = NULL;
        return head;
    }

    void insert_at_end(int data2, class node *head)
    {
        node *p = new node;
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        p->data = data2;

        p->next = NULL;
        temp->next = p;
    }

    node *insert_at_first(int data1, class node *head)
    {
        node *p = new node;
        node *temp = head;

        p->data = data1;
        p->next = temp;
        return p;
    }

    void delete_at_end(node *head)
    {
        node *p = head->next;
        node *q = head;

        while (p->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
        q->next = NULL;
        delete p;
    }

    node *delete_at_first(node *head)
    {
        node *p = head->next;
        node *q = head;
        delete q;
        return p;
    }

    void print(class node *head)
    {
        class node *p = head;
        cout << "The list is-" << endl;
        while (p)
        {
            cout << p->data;
            cout << " ";
            p = p->next;
        }
    }
};


int main()
{
    int element, choice;
    node n;
    node *head;

    ;

    cout << "Insert the element" << endl;
    cin >> element;
    head = n.insert_first(element);
    n.print(head);

    while (1)
    {
        cout << "\nChoose\n"
             << "Insert at first-1  "
             << "Insert at End-2 "
             << "Delete first-3 "
             << "Delete last-4 "
             << "Print list-5 " << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Insert the element" << endl;
            cin >> element;
            head = n.insert_at_first(element, head);
            n.print(head);
        }

        else if (choice == 2)
        {
            cout << "Insert the element" << endl;
            cin >> element;
            n.insert_at_end(element, head);
            n.print(head);
        }
        else if (choice == 3)
        {
            head = n.delete_at_first(head);
            n.print(head);
        }
        else if (choice == 4)
        {
            n.delete_at_end(head);
            n.print(head);
        }
        else if (choice == 5)
        {
            n.print(head);
            break;
        }
    }

    return 0;
}