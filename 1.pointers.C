#include <iostream>

using namespace std;

int main()
{

    int num = 3;            // an integer variable holding the value 3

    //Create a pointeer variable to an int type
    int* pNum; //int * pNum      //int *pNum

    //Assign the address of pNum to num
    //so that it points to the num variable in memory

    pNum = &num; //& The address operator

    // or in one step
    //int *pNum = &num;

    cout << num << endl;      //output the value of num
    cout << &num << endl;     //output the address of num to compare with the..
    cout << pNum << endl;     //..value in pNum

    cout << *pNum << endl;    // output the underlying value of num by using the dereference operator

    *pNum = 45;               //we are using the dereference operator to change the underlying value of num, indirectly
    cout << *pNum << endl;      
    cout << num << endl;      //the value of num and *pNum are precisely the same value. 
    cout << pNum << endl;

    return 0;
}

// NOTE: A word of caution when using pointers.  You should always initialize a pointer variable to NULL, nullptr, 0, or with a memory address.   Leaving a pointer variable uninitialized is an error that can result in difficult to find bugs and create security issues for your code.

// Using the dereference operator, you can gain direct access to the underlying value in the variable num.

/*The dereference operator is another source of confusion for those who are new to pointers.  The reason is because we are "overloading" the use of the * symbol.  It is used as the pointer symbol and also as the dereference symbol and as the multiply operator. */