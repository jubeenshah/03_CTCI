#include <iostream>
//g++ -std=c++11 01-Introduction.cpp 
int main()
{
    int a0[5];
    int a1[5] = {1,2,3};

    int size = sizeof(a1) / sizeof(*a1);
    std::cout << "The size of a1 is :" << size << std::endl;

    std::cout << "The first element is :" << a1[0] << std::endl;

    std::cout << "Version[1] of iterating through the array" << std::endl;

    for (int i = 0; i < size; ++i) {

        std::cout << " " << a1[i];
    }

    std::cout << "Version[2] of iterating" << '\n';

    for (int&  item:a1) {
      std::cout << " " << item;
    }

    std::cout <<std::endl;
    a1[0] = 4;
    std::sort(a1, a1 + size);



    return 0;
}
