#include"Item.h"

Item::Item(ItemType Content)
{
	this->Content = Content;
	NextItem = nullptr;
	PreviousItem = nullptr;
}
Item* Item::GetNextItem()
{
	return NextItem;
}
Item* Item::GetPreviousItem()
{
	return PreviousItem;
}
ItemType Item::GetValue()
{
	return Content;
}
void Item::SetNextItem(Item* NextItem)
{
	this->NextItem = NextItem;
}

void Item::SetPreviousItem(Item* PreviousItem)
{
	this->PreviousItem = PreviousItem;
}
