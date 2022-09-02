#include <iostream>
using namespace std;

class Factorial
{
private:
    int num; // to take number from user in_order to calculate its factorial
    int factorial = 1; // initial value of the factorial is one because factorial cannot be zero

public:
    void calculateFactorial(); // function to calculate the factorial of a given number
    void show(); // function to show the factorial of the given number
};

void
Factorial::calculateFactorial() // function definition outside the class with::
{
    cout << "Enter a number : " << endl;
    cin >> num; // to take number from the user to find the factorial of that number

    if (num == 0 || num == 1) // if given number is 0 or 1 then the factorial is 1
    {
        factorial = 1; // 0! and 1! value is 1 itself
    }
    else
    {
        while (num > 1) // if the given number is >1 then find the factorial of that number ( while loop is used because to repeat the factorial process until num<1)
        {
            factorial = factorial * num; //initial value of the factorial is 1 which is multiplied by the number updated every time
            num--; // to decrease num value ( if num=5 then 5*4*3*2*1)
        }
    }
}

void Factorial::show()
{
    cout << "Factorial : " << factorial << endl; // to display the final answer stored in the factorial
}

int main()
{
    Factorial factorial;
    factorial.calculateFactorial(); // calling this function
    factorial.show(); // calling this function
}