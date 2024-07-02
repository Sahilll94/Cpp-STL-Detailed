#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 2, 3, 4, 5};

    // The vector should be sorted for equal_range to work correctly
    std::sort(vec.begin(), vec.end());

    int value = 2;
    auto range = std::equal_range(vec.begin(), vec.end(), value);

    std::cout << "Elements equal to " << value << " are in the range:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}
