#include <iostream>
using namespace std;
main()
{
    string line1;
    string line2;
    int count = 0;
    cout << "Enter string 1: ";
    getline(cin, line1);
    int length1 = line1.length();
    cout << "Enter string 2: ";
    getline(cin, line2);
    int length2 = line2.length();
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (line1[i] == line2[j])
            {

                count++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    cout << "Count: " << count;
}