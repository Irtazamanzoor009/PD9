#include <iostream>
using namespace std;
main()
{
    string moviename;
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    cout << "Enter the name of movie: ";
    cin >> moviename;
    int amount;
    int count;
    bool value = false;

    for (int i = 0; i < 5; i++)
    {
        if (moviename == movies[i])
        {
            
            if (i % 2 != 0)
            {
                amount = 500 - ((500 * 5) / 100);
            value == true;
            }
            else
            {
                amount = 500 - ((500 * 10) / 100);
                
            }
        }
        // else{
        //     value == false;
        // }
    }
    if(value == true)
    {
    cout << "Price of movie: " << amount << endl;
    }
    if(value == false)
    {
        cout<<"Movie not found";
    }
}