#include <iostream>

int main() {
    int count = 5;
    do {
        std::cout << count << " ";
        // Missing something here?
		--count;
    } while (count > 0); 
    
    return 0;
}; //5 to 1 