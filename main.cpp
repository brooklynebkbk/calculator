#include <iostream>
using namespace std;


//basic calculator function
int main ()
{

    //initialize local variables
    float a, b, r;
    char o;
    //instruct user to input values
    //grab values
    cout << "Please enter a number:";
    cin >> a;
    cout << "Please enter an operator:";
    cin >> o;
    cout << "Please enter another number:";
    cin >> b;
    //determine the kind of operation to be used
    //operate on the values given accordingly
    //catch values that are inoperable and print to terminal
    if (o== '+')
    {r = a+b;
    cout << a << o << b << "=" << r << ".\n";}
    else if (o== '-')
    {r = a-b;
    cout << a << o << b << "=" << r << ".\n";}
    else if (o== '*')
    {r = a*b;
    cout << a << o << b << "=" << r << ".\n";}
    else if (o== '/')
    {r = a/b;}
    else {printf ("Sorry, this calculator isn't that smart.");};

    return 0;
}
