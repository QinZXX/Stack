#include <iostream>
#include "stack.h"

int main() {
    std::cout << "Stack Definition!" << std::endl;
    Stack<int> a;
    for(int i=0;i<10;i++)
        a.push(i);
    a.traverse([](int &a){std::cout<<a<<"->";});

    for(int i=0;i<10;i++){
        std::cout<<a.pop()<<"->";
    }

    a.traverse([](int &a){std::cout<<a<<"->";});

    return 0;
}