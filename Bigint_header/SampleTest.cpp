#include "Bigint.h"

using namespace std;
 
int main() {
    Bigint a, b, c; // declared some Bigint variables
 
    /////////////////////////
    // taking Bigint input //
    /////////////////////////
    string input; // string to take input
 
    cin >> input; // take the Big integer as string
    a = input; // assign the string to Bigint a
 
    cin >> input; // take the Big integer as string
    b = input; // assign the string to Bigint b
   
    //////////////////////////////////
    // Using mathematical operators //
    //////////////////////////////////
 
    c = a + b; // adding a and b
    c.print(); // printing the Bigint
    puts(""); // newline
 
    c = a - b; // subtracting b from a
    c.print(); // printing the Bigint
    puts(""); // newline
 
    c = a * b; // multiplying a and b
    c.print(); // printing the Bigint
    puts(""); // newline
 
    c = a / b; // dividing a by b
    c.print(); // printing the Bigint
    puts(""); // newline
 
    c = a % b; // a modulo b
    c.print(); // printing the Bigint
    puts(""); // newline
 
    /////////////////////////////////
    // Using conditional operators //
    /////////////////////////////////
 
    if( a == b ) puts("equal"); // checking equality
    else puts("not equal");
 
    if( a < b ) puts("a is smaller than b"); // checking less than operator
 
    return 0;
}
