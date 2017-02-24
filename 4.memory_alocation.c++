// Allocating memory during runtime of an application is a common requirement.  For example, you may not know how many objects your application will need until the application is running.  Allocating memory to newly created objects at runtime makes use of pointers.  This is the only way to gain access to memory for new objects when your application is running.

int main(){
// declare a pointer to int and allocate space for it
// with the keyword new
int *pInt = new int; 

// declare a pointer to double and allocate space for it
// with the keyword new
double * pDouble = new double;

// store the value 3 in the memory location
// pointed to by pInt
*pInt = 3; 

// store the value 5.0 in the memory location
// pointed to by pDouble
*pDouble = 5.0;

// One final point that we need to make in your use of pointers and dynamic memory allocation is releasing memory.   Each time you allocate memory in your application, it is reserved by the operating system so that other applications cannot access that memory address.  This has security implications as well as importance for separation of application code to prevent system wide crashes if an errant application behaves badly.

// If you do not release the memory in your application, the operating system will not reclaim it and this is known as a memory leak.  It is compounded if your application continues to dynamically allocate memory and doesn't release it.
delete pInt;
delete pDouble;

}
//Ensure that every time that you call new keyword, you ensure that a delete keyword is present.

