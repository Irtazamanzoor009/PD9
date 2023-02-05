#include<iostream>
using namespace std;
main()
{

    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    string symbol[size];
    
    int count=0;
    for(int i=0; i<size; i++)
    {
         cout<<"Enters symbols: ";
         cin>>symbol[i];
         
        if( symbol[0]==symbol[1] && symbol[1]==symbol[2] && symbol[2]==symbol[size-1] )
         {
            count++;
         }
    }   
    if(count>0)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}