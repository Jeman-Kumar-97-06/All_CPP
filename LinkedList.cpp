#include <iostream>
#include <chrono>

int main() {
	auto start   = std::chrono::high_resolution_clock::now();

	for (int i = 1000; i>1; i--){
		std::cout << i << "\n";
	}

	auto end     = std::chrono::high_resolution_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
	std::cout << "Time taken: " << elapsed.count() << " microseconds\n";
	std::cout << "Time taken: " << elapsed.count()/1000.0 << " milliseconds\n";
	return 0;
}
