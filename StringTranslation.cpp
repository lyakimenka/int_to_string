// StringTranslation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int str_to_int(string x);


int main()
{
    string user_input;

    cout << "\nAny number you enter will be considered a string."
        "\nTo convert it into an int, please enter any whole number " << endl;

    cin >> user_input;

    cout << "\nHere is your number converted: " << endl;

    int ret = str_to_int(user_input);

}

int str_to_int(string x)
{
    int result = 0;
    int i = 0;
    int sign = 1;
    int base = 0;

   
   
    if (x[i] == '-' || x[i] == '+')
    {
        sign = 1 - 2 * (x[i++] == '-');
    }

    while (x[i] >= '0' && x[i] <= '9')
    {  
        base = 10 * base + (x[i++] - '0');
        result = base * sign;
    }

    cout << "\n" << result << " ---> " << i << endl;

    return result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
