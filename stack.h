/******************************************************************************************
 * Stack Derived From List/Vector
 * Created by laoqin on 2020/7/22.
 ******************************************************************************************/

#ifndef STACK_LIST_STACK_LIST_H
#define STACK_LIST_STACK_LIST_H

//#define STACK_LIST
#define STACK_VECTOR

#ifdef STACK_LIST
#include "../ListNode/List.h"

template <typename T>
class Stack:public List<T> { // Stack derived from List
public:
    void push(const T &e){ //
        insertAsLast(e);
    }
    T pop(){
        // T temp=trailer->pred->data;
        // remove(trailer->pred);
        // return temp;
        return remove( last() );
    }
    T &top(){
        // return trailer->pred->data;
        return last()->data;
    }
    // Other ADT interfaces can be used directly (such as size(),empty() and etc.)
};
#endif

#ifdef STACK_VECTOR
#include "vector.h"

template <typename T>
class Stack: public Vector<T> { // Stack derived from List
public:
    void push(const T &e){ //
        push_back(e);
    }
    T pop(){
        //return remove(_size-1);
        return remove( size()-1 ); // 为什么不能使用protected 的_size??
    }
    T &top(){
        // return trailer->pred->data;
       // return _elem[size()-1]; // _size和_elem都不能用吗？
       return (*this)[size()-1];
    }


    // Other ADT interfaces can be used directly (such as size(),empty() and etc.)
};

#endif

#endif //STACK_LIST_STACK_LIST_H
