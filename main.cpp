#include <iostream>
#include "linkedlist.h"

using namespace std;


int main()
{
	linkedlist obj;
	linkedlist obj2;
	
	
	
	obj.Insertatbegin(4);
	obj.Insertatbegin(87);
	obj.InsertatEnd(50);
	obj.InsertatEnd(9);
	obj.InsertatEnd(6);
	obj.InsertatEnd(5);

	

	obj2.Insertatbegin(1);
	obj2.Insertatbegin(3);
	obj2.InsertatEnd(7);
	obj2.InsertatEnd(13);
	obj2.InsertatEnd(17);


	
	
	cout << "first linked list \n";
	obj.PrintList();

	cout << "second linked list \n";
	obj2.PrintList();
	
	cout << "After concate and Before sort \n";
	obj.merge(obj.Gethead(), obj2.Gethead());
	obj.PrintList();
	node* result=nullptr;
	cout << "linklist After sort \n";
	obj.sort();
	obj.PrintList();
   
	
	 
	return 0;
}

