#pragma once
class LinkedList
{

private:
	
public:
	int Data;
	LinkedList *Next;

	LinkedList(void);
	LinkedList(int data, LinkedList *Next);
	~LinkedList(void);
	LinkedList NextNode(void);
	void Print(void);
	int getData(void);
};

