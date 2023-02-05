#include<iostream>
using namespace std;
main()
{
    string pin;
    int count = 0;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    cout<<"Enter pin: ";
    getline(cin, pin);
    int length = pin.length();

    if(length > 4 || length < 4)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(int i=0; i<4; i++)
        {
            int code = pin[i] - '0';       // '0' it converts character into integer.
            if(code >=0 && code < 10)
            {
                count = count + 1;
            }
        }
        if(count != 4)
        {
            cout<<"Invalid input";
        }
        else 
        {
            for(int i=0; i<10; i++)
            {
                int code = (pin[i] - '0' )+ i;
                if(code < 10)
                {
                    cout<<moves[code]<<" ";
                }
                else
                {
                    code = code - 10;
                    cout<<moves[code]<<" ";
                }
            }
        }

    }
}