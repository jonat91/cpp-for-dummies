//
// BitTest - initialize two variables and output the
// results of applying the ~, &, |, and ^ operators

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // set output format to hexadecimal
    cout.setf(ios::hex);

    // initialize two arguments
    int nArg1;
    nArg1 = 0x1234;

    int nArg2;
    nArg2 = 0x00ff;

    // now perform each operation in turn
    // first the unary NOT operator

    cout << "nArg1 = 0x" << nArg1 << "\n";
    cout << "nArg2 = 0x" << nArg2 << "\n";
    cout << "~nArg1 = 0x" << ~nArg1 << "\n";
    cout << "~nArg2 = 0x" << ~nArg2 << "\n";

    // now the binary AND operator
    cout << "nArg1 & nArg2 = 0x" << (nArg1 & nArg2) << "\n";
    cout << "nArg1 | nArg2 = 0x" << (nArg1 | nArg2) << "\n";
    cout << "nArg1 ^ nArg2 = 0x" << (nArg1 ^ nArg2) << "\n";

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}