#include <iostream>
#include "stack.h"

 // ********************************************
using namespace std;

void convert(Stack<char>& S,__int64 n,int base){
    static char digit[] //0<n,1<base<=16,新进制下的数位符号，可视base的取值范围适当扩充
    ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    __int64 reminder=n;
    int temp; // 余数
    while( 0 < reminder ){ // 商不为0
        temp = reminder % base;
        S.push(digit[temp]);//输出低位
        reminder =reminder / base ;
    }
}

void display(Stack<char> S){
    //cout<<n<<" in "<<base<<"-system is: "<<endl;
    while(!S.empty()){
        cout<<S.top();
        S.pop();
    }
    cout<<endl;
}


int main() {
    Stack<char> S;
    convert(S,100,2);
    display(S);

    // 1100100  -> 100

    return 0;
}