#include<iostream>
#include<memory>
#include "DynamicStack.h"
#include "DynamicQueue.h"
int main()
{
	std::unique_ptr<DynamicStack> Stack(new DynamicStack());
	Stack->Insert(1);
	Stack->Insert(2);
	Stack->Insert(3);
	Stack->Pop();
	Stack->Pop();
	Stack->Show();

	std::cout << "\n";

	std::unique_ptr<DynamicQueue> Queue(new DynamicQueue());
	Queue->Insert(1);
	Queue->Insert(2);
	Queue->Insert(3);
	Queue->Remove();
	Queue->Remove();
	Queue->Show();
	system("PAUSE");
	return 0;
}