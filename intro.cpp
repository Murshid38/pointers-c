#include <iostream>

using namespace std;

// computer has a look up table which stores variable types and starting memory addresses
// each byte has a memory address and if a variable is int data type then it will store in 4 bytes(that means spanning 4 memory address)

// pointers allows us to store memory addresses and later access the value in that memory address
int main()
{
    int x = 10;

    // & operator used on variable to get the memory address of the variable location
    // * operator used on memory address value stored in the memory location
    int *ptrx = &x;
    cout << "Memory address is: " << ptrx << " and value in that memory address is: " << *ptrx << endl;

    // here the pointer variable is also a variable
    // that means that variable also stored in a memory location
    // when we store the memory address of a pointer variable then this new pointer becomes -> pointer to pointer variabl
    int **ptrrx = &ptrx;

    cout << "This is the memory address of ptrx: " << ptrrx << " and value in that memory address is: " << *ptrrx << endl;
    // since pointers are also variables we can change the memory location
    // and when we are storing a memory location we can only store a memory location of a variable which is the data type of the pointer variable
}