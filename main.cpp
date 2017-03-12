#include <iostream>
#include <iomanip>

using namespace std;

namespace bfh
{
    template <class T>
        inline void swap(T& valueA, T& valueB)
        {
            T temp = valueA;
            valueA = valueB;
            valueB = temp;
        }
}

int main(void)
{
    int firstNumber = 5;
    int secondNumber = 10;
    double firstFloatNumber = 7.2;
    double secondFloatNumber = 3.2;
    char firstCharacter = 'A';
    char secondCharacter = 'F';

    cout << "first is : " << setw(4) << firstNumber << " | second is : " << setw(4) << secondNumber << endl;
    bfh::swap(firstNumber, secondNumber);
    cout << "first is : " << setw(4) << firstNumber << " | second is : " << setw(4) << secondNumber << endl;

    cout << "first is : " << setw(4) << firstFloatNumber << " | second is : " << setw(4) << secondFloatNumber << endl;
    bfh::swap(firstFloatNumber, secondFloatNumber);
    cout << "first is : " << setw(4) << firstFloatNumber << " | second is : " << setw(4) << secondFloatNumber << endl;

    cout << "first is : " << setw(4) << firstCharacter << " | second is : " << setw(4) << secondCharacter << endl;
    bfh::swap(firstCharacter, secondCharacter);
    cout << "first is : " << setw(4) << firstCharacter << " | second is : " << setw(4) << secondCharacter << endl;

    return 0;
}



