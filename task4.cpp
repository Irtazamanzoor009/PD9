#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int i;
    int count = 0;
    int number[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> number[i];
        while (number[i] > 0)
        {
            int rem = number[i] % 10;
            number[i] = number[i] / 10;
            if (number[i] == 7)
            {
                count++;
            }
        }
    }
    if (count > 0)
    {
        cout << "Boom! ";
    }
    else
    {
        cout << "There is no 7 in the array.";
    }
}