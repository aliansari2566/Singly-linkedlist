#include "linkedlist.h"



int linkedlist::count_occ(int key)
{
    node* temp;
    temp = head;
    int counter = 0;
    while (temp != NULL)

    {
        if (key == temp->data)
        {
            counter++;
        }
        temp = temp->next;
    }
    return count;

    
}

void linkedlist::Insertatbegin(int value)
{

    node* temp = new node();
    temp->data = value;
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {

        node* temp = new node();
        temp->data = value;
        temp->next = head;
        head = temp;
        count++;


    }

   
        
}
void linkedlist::InsertatEnd(int value)
{
    if (head == nullptr)
    {
        node* temp = new node();
        temp->data = value;
        head = temp;
    }
    else
    {
        node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        node* temp = new node();
        temp->data = value;
        current->next = temp;
    }
}

void linkedlist::sort()
{
    node* ptr;
    node* cptr;
    int temp = 0;
    ptr = head;
    while (ptr->next != nullptr)
    {
        cptr = ptr->next;
        while (cptr != nullptr)
        {
            if (ptr->data < cptr->data)
            {
                temp = ptr->data;
                ptr->data = cptr->data;
                cptr->data = temp;
            }
            cptr = cptr->next;
        }
        ptr = ptr->next;  
    }


}


void linkedlist::merge(node * a,node *b)
{
    if (a != NULL && b != NULL)
    {
        if (a->next == NULL)
            a->next = b;
        else
            merge(a->next, b);
    }
    else
    {
        cout << "Either a or b is NULL\n";
    }
}
/*void linkedlist::concate(node* head1, node* head2)
{
    node* ptr = nullptr;
    ptr = head1;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    ptr->next = head2;

}*/
 

bool linkedlist::IsEmpty()
{
    if (head == nullptr)
    {
        cout << "LInklist is empty " << endl;
        return true;
    }
    else
        return false;
}

int linkedlist::GetSize()
{
    return count;
}
int linkedlist::GetFirst()
{
    return head->data;
}
node * linkedlist:: Gethead()
{

    return head;
}
void linkedlist::PrintList()
{

    node* ptr;
    ptr = head;
    while (ptr != NULL) 
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

   

}

linkedlist::~linkedlist()
{
    node* previous = nullptr;
    node* current = head;
    while (current != nullptr)
    {
        previous = current;
        current = current->next;
    }
}