#include <iostream>
using namespace std;


//basic calculator function
int main ()
{

    //initialize local variables
    float firstInputValue, secondInputValue, resolution;
    char operand;
    //instruct user to input values
    //grab values
    cout << "Please enter a number:";
    cin >> firstInputValue;
    cout << "Please enter an operator:";
    cin >> operand;
    cout << "Please enter another number:";
    cin >> secondInputValue;
    //determine the kind of operation to be used
    //operate on the values given accordingly
    //catch values that are inoperable and print to terminal
    if (operand== '+')
    {resolution = firstInputValue+secondInputValue;
    cout << firstInputValue << operand << secondInputValue << "=" << resolution << ".\n";}
    else if (operand== '-')
    {resolution = firstInputValue-secondInputValue;
    cout << firstInputValue << operand << secondInputValue << "=" << resolution << ".\n";}
    else if (operand== '*')
    {resolution = firstInputValue*secondInputValue;
    cout << firstInputValue << operand << secondInputValue << "=" << resolution << ".\n";}
    else if (operand== '/')
    {resolution = firstInputValue/secondInputValue;}
    else {printf ("Sorry, this calculator isn't that smart.");};

    return 0;
}
