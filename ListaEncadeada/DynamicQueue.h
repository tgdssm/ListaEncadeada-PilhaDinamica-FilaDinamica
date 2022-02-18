#pragma once
#include"LinkedList.h"
class DynamicQueue
{
private:
	LinkedList* Queue;

public:
	DynamicQueue();
	~DynamicQueue();
	void Insert(ItemType Content);
	void Remove();
	void Show();
	int GetSize();
	ItemType GetFirstItem();
	ItemType GetLastItem();
};
