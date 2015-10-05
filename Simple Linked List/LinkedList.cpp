#include "StdAfx.h"
#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(void)
{
}

LinkedList::~LinkedList(void)
{
}

LinkedList::LinkedList(int data, LinkedList *NextNode)
{
	LinkedList::Data = data;
	LinkedList::Next = NextNode;
}

int LinkedList::getData(void)
{
	return LinkedList::Data;
}

void LinkedList::Print(void)
{
	std::cout << " " << LinkedList::getData();
}

