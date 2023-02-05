#include <iostream>
using namespace std;
main()
{
    int size;
    int transform, transformation;
    int count = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int number[size];
    cout << "Transformation nedded to be done: ";
    cin >> transform;
    bool value = false;
    transformation = transform * 2;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> number[i];
        if ((number[i] % 2 == 0))
        {
            number[i] = number[i] - transformation;
        }
        else
        {
            number[i] = number[i] + transformation;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }
}