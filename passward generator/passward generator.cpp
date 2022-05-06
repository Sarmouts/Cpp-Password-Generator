#include <cstdlib>
#include <ctime>
#include <iostream>

typedef unsigned int uint;

int main() {
	while (1)
	{
		srand((uint)time(0));
		char randCh;
		uint Len;
		std::cout << "Your passward lenght: ";
		std::cin >> Len;
		for (uint i = 0; i < Len; i++) {
			randCh = (rand() % 94) + 33;
			std::cout << randCh;
		}
		std::cout << "\n";
		system("pause");
	}
}