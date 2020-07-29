#include <iostream>
#include "stack.h"

 // ********************************************
using namespace std;

void convert(Stack<char>& S,__int64 n,int base){
    static char digit[] //0<n,1<base<=16,�½����µ���λ���ţ�����base��ȡֵ��Χ�ʵ�����
    ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if( 0<n ){ // ������Ϊ0
        S.push(digit[n%base]);//�����λ
        convert(S,n/base,base); // �ݹ�õ�����λ�����������
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