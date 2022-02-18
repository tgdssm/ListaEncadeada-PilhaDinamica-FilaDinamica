#pragma once

typedef int ItemType;
class Item
{
	private:
		ItemType Content;
		Item* NextItem;
		Item* PreviousItem;
	public:
		Item(ItemType Content);
		Item* GetNextItem();
		Item* GetPreviousItem();
		ItemType GetValue();
		void SetNextItem(Item *NextItem);
		void SetPreviousItem(Item* PreviousItem);
};
