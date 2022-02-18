#include "DynamicQueue.h"

DynamicQueue::DynamicQueue()
{
	Queue = new LinkedList();
}

DynamicQueue::~DynamicQueue()
{
	delete Queue;
}

void DynamicQueue::Insert(ItemType Content)
{
	Queue->InsertEnd(Content);
}

void DynamicQueue::Remove()
{
	Queue->RemoveFirstItem();
}

void DynamicQueue::Show()
{
	Queue->ShowList();
}

int DynamicQueue::GetSize()
{
	return Queue->GetSize();
}

ItemType DynamicQueue::GetFirstItem()
{
	return Queue->GetFirstItem();
}

ItemType DynamicQueue::GetLastItem()
{
	return Queue->GetLastItem();
}
