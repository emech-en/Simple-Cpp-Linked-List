// ListOmumi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	LinkedList *s1;
	LinkedList *s2 = new LinkedList();
	LinkedList *s = new LinkedList(10,NULL);
	int temp;
	
	std::cout << "Enter your first number : ";
	std::cin >> temp;
	s = new LinkedList(temp,NULL);
	s2 = s;

	for(int i=0 ; i<9; i++)
	{ 
		std::cout << "Enter the "<< i+2 <<"th number: ";
		std::cin >> temp;
		s1 = new LinkedList(temp,NULL);
		s2->Next = s1;
		s2 = s2->Next;
	}


	std::cout<<"\n\nEntered numbers in order:\n\t";
	while(s!= NULL)
	{

		s->Print();
		std::cout<<"  ";
		s = s->Next;
	}

	std::cout<<"\n\nPress any button to exit...";
	_getch();

	return 0;
}

