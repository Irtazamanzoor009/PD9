#include<iostream>
using namespace std;
main()
{
    string fruit;
    int kg, amount[4];
    string fruits[4]={"peach","apple","guava", "watermelon"};
    int price[4]={60,70,40,30};
    cout<<"Enter the name of fruit: ";
    cin>>fruit;
    cout<<"Enter Kgs: ";
    cin>>kg;
    int i=0;
    for(i=0; i<4; i++)
    {
        amount[i] = kg * price[i];
    }
    for(int i=0; i<4; i++)
    {
        if(fruit == fruits[i])
        {
             cout<<"Price of "<<fruit<<" is: "<<amount[i]<<endl;
        }
    }
}