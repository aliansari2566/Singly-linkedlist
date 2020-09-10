
#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linkedlist
{
    node* head = nullptr;
    int count = 0;
public:

    void Insertatbegin(int);
    void InsertatEnd(int);
    void merge(node * , node * );

    void sort();
    //void concate(node*, node*);
  
    bool IsEmpty();
    int GetSize();
    int GetFirst(); 
    node* Gethead();
    void PrintList();
    int count_occ(int key);
    ~linkedlist();

};
