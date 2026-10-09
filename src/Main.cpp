#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while (i == 0) {
        cout << " Hello World ";
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get();
    return 0;
}