#include"DynamicStack.h"

DynamicStack::DynamicStack()
{
	Stack = new LinkedList();
}

DynamicStack::~DynamicStack()
{
	delete Stack;
}

void DynamicStack::Insert(ItemType Content)
{
	Stack->InsertEnd(Content);
}

void DynamicStack::Pop()
{
	Stack->RemoveLastItem();
}


void DynamicStack::Show()
{
	Stack->ShowReverseList();
}

int DynamicStack::GetSize()
{
	return Stack->GetSize();
}

ItemType DynamicStack::GetFirstItem()
{
	return Stack->GetFirstItem();
}

ItemType DynamicStack::GetLastItem()
{
	return Stack->GetLastItem();
}
