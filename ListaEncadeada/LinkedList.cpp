#include<iostream>
#include"LinkedList.h"

LinkedList::LinkedList()
{
	Head = nullptr;
	Tail = nullptr;
}

LinkedList::~LinkedList()
{
	delete Head;
}

void LinkedList::InsertBegin(ItemType Content)
{
	if (bIsEmpty())
	{
		Head = new Item(Content);
		Tail = Head;
	}
	else
	{
		Item* NewItem = new Item(Content);


		// NewItem->SetNextItem faz com que o NextItem de NewItem seja o Endereço apontado por Head
		// Sendo assim o valor apoantado por Head já não é mais o primeiro elemento da lista,
		// pois nenhum dos elementos da lista aponta para o primeiro elemento
		NewItem->SetNextItem(Head);

		// Como o endereço de Head já não é mais o primeiro elemento da lista, setamos o endereço de NewItem como elemento anterior
		// ao endereço de Head
		Head->SetPreviousItem(NewItem);

		// Dessa maneira Head passa a pontar para o endereço de NewItem, pois nenhum dos elementos da lista aponta para ele
		Head = NewItem;
	}
}

void LinkedList::InsertEnd(ItemType Content)
{
	if (bIsEmpty())
	{
		Head = new Item(Content);
		Tail = Head;
	}
	else
	{
		Item* NewItem = new Item(Content);
		// Tail->NextItem deixa de apontar para nullptr e passa a apontar para o endereço de NewItem como proximo elemento
		Tail->SetNextItem(NewItem);

		// NewItem->SetPreviousItem aponta para o endereço contido em Tail como elemento anterior ao endereço de NewItem
		NewItem->SetPreviousItem(Tail);

		// Como Tail->GetNextitem já não aponta mais para nullptr, assim Tail não é mais o ultimo elemento da lista
		// Devemos colocar o endereço de NewItem em Tail pois NewItem->GetNextItem aposta para nullptr
		Tail = NewItem;
	}
}

void LinkedList::RemoveFirstItem()
{
	ItemType ContentRemoved;
	if (bIsEmpty())
	{
		std::cout << "Não foi possivel remover. Lista vazia" << std::endl;
	}
	else if (!Head->GetNextItem()) // Se tiver apenas um elemento na lista
	{
		ContentRemoved = Head->GetValue();
		delete Head;
		Head = nullptr;
		Tail = nullptr;
	}
	else
	{
		Item* NewFirstItem = Head->GetNextItem();
		NewFirstItem->SetPreviousItem(nullptr);
		delete Head;
		Head = NewFirstItem;
	}
}

void LinkedList::RemoveLastItem()
{
	ItemType ContentRemoved;
	if (bIsEmpty())
	{
		std::cout << "Não foi possivel remover. Lista vazia" << std::endl;
	}
	else if (!Head->GetNextItem()) // Se tiver apenas um elemento na lista
	{
		ContentRemoved = Head->GetValue();
		delete Head;
		Head = nullptr;
		Tail = nullptr;
	}
	else
	{
		Item* NewLastItem = nullptr;
		Item* CurrentItem = Head;
		while (CurrentItem->GetNextItem())
		{
			CurrentItem = CurrentItem->GetNextItem();
		}
		NewLastItem = CurrentItem->GetPreviousItem();
		NewLastItem->SetNextItem(nullptr);
		Tail = NewLastItem;
		delete CurrentItem;
	}
}

bool LinkedList::bIsEmpty()
{
	return !(Head);
}

void LinkedList::ShowList()
{
	if (bIsEmpty())
	{
		std::cout << "Lista vazia" << std::endl;
	}
	else
	{
		Item* CurrentItem = Head;
		while (CurrentItem)
		{
			std::cout << CurrentItem->GetValue() << std::endl;
			CurrentItem = CurrentItem->GetNextItem();
		}
	}
}

void LinkedList::ShowReverseList()
{
	if (bIsEmpty())
	{
		std::cout << "Lista vazia" << std::endl;
	}
	else
	{
		Item* CurrentItem = Tail;
		while (CurrentItem)
		{
			std::cout << CurrentItem->GetValue() << std::endl;
			CurrentItem = CurrentItem->GetPreviousItem();
		}
	}
}

int LinkedList::GetSize()
{
	Item* CurrentItem = Head;
	int Elements{ 0 };
	while (CurrentItem)
	{
		CurrentItem = CurrentItem->GetNextItem();
		Elements++;
	}
	return Elements;
}

ItemType LinkedList::GetFirstItem()
{
	if (bIsEmpty())
	{
		std::cout << "Lista vazia" << std::endl;
	}
	else
	{
		return Head->GetValue();
	}
}

ItemType LinkedList::GetLastItem()
{
	if (bIsEmpty())
	{
		std::cout << "Lista vazia" << std::endl;
	}
	else
	{
		return Tail->GetValue();
	}
}
