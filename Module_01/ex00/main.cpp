#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *Heap_poney;

	Heap_poney = new Pony("Igor", "White");
	Heap_poney->show();
}

void	ponyOnTheStack(void)
{
	Pony The_poney("Ivar", "Dark");
	The_poney.show();
}

int main()
{
	std::cout << "On stack :" << std::endl;
	std::cout << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "On heap :" << std::endl;
	ponyOnTheHeap();
}
