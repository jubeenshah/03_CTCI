#include <string>
#include <sstream>
#include <iostream>
#include <array>

int main(int argc, char const *argv[]) {

    // 1. initialize
    std::vector<int> v0;
    std::vector<int> v1(5, 0);
    // 2. make a copy
    std::vector<int> v2(v1.begin(), v1.end());
    std::vector<int> v3(v2);
    // 2. cast an array to a vector
    int a[5] = {0, 1, 2, 3, 4};
    std::vector<int> v4(a, *(&a + 1));
    // 3. get length
    std::cout << "The size of v4 is: " << v4.size() << std::endl;
    // 4. access element
    std::cout << "The first element in v4 is: " << v4[0] << std::endl;
    // 5. iterate the vector
    std::cout << "[Version 1] The contents of v4 are:";
    for (int i = 0; i < v4.size(); ++i) {
        std::cout << " " << v4[i];
    }
    std::cout << std::endl;
    std::cout << "[Version 2] The contents of v4 are:";
    for (int& item : v4) {
        std::cout << " " << item;
    }
    std::cout << std::endl;
    std::cout << "[Version 3] The contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        std::cout << " " << *item;
    }
    std::cout << std::endl;
    // 6. modify element
    v4[0] = 5;
    // 7. sort
    sort(v4.begin(), v4.end());
    // 8. add new element at the end of the vector
    v4.push_back(-1);
    // 9. delete the last element
    v4.pop_back();
}
