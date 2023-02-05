#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a word: ";
    getline(cin, name);
    int counter = name.length();
    if(counter % 2 == 0)
    {
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}