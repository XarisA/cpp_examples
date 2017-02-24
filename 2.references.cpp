  // A reference type is simply an alias for another type.  It "refers to" or "references" another type in your code.  A reference type overloads the use of the & operator.  So far you have seen the & operator used to represent the address-of operator for obtaining the address of a variable.  References also use this operator to denote a reference to another variable.
// You declare a reference type using a syntax similar to declaring a pointer variable.  That is, you declare the data type of the C++ variable or object that will be referred to, then you use the & character followed immediately by the reference type name.  Finally, it's important to note that when declaring a reference, you must assign it at that time.  It behaves similar to a constant in this sense.  An example demonstrates the declaration.

#include <iostream>
using namespace std;

int main(){

	int num = 3;
    int &refNum = num;

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;

    refNum++;    // increment refNum by 1

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;
    cout << "refNum is located at " << &refNum << " and num is located at " << &num << endl;

}
