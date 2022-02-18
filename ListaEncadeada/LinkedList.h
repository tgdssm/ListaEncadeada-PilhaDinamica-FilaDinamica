#pragma once
#include"Item.h"

class LinkedList
{
private:
	Item* Head;
	Item* Tail;

public:
	LinkedList();
	~LinkedList();
	void InsertBegin(ItemType Content);
	void InsertEnd(ItemType Content);
	void RemoveFirstItem();
	void RemoveLastItem();
	bool bIsEmpty();
	void ShowList();
	void ShowReverseList();
	int GetSize();
	ItemType GetFirstItem();
	ItemType GetLastItem();

};

