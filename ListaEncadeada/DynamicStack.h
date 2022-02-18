#pragma once
#include "LinkedList.h"

class DynamicStack 
{
	private:
		LinkedList* Stack;
	public:
		DynamicStack();
		~DynamicStack();
		void Insert(ItemType Content);
		void Pop();
		void Show();
		int GetSize();
		ItemType GetFirstItem();
		ItemType GetLastItem();

};
