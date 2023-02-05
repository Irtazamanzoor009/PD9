#include <iostream>
using namespace std;
main()
{
    string color, compare;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    string pattern[size];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter color name: ";
        cin >> pattern[i];
    }
    compare = pattern[0];
    for (int i = 1; i < size; i++)
    {
        if (compare != pattern[i])
        {
            count++;
            compare = pattern[i];
        }
        else
        {
            count = count;
        }
    }
    cout << "Count: " << count << endl;
    int calc = size * 2;
    int result = (calc + count);
    cout << "Result: " << result;
}