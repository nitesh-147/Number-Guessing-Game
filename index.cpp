#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int count = 1;
    cout << "GUESS A NUMBER(1-100): ";
    while (true)
    {
        
        int input;
        cin >> input;
        if(input==num)
        {
            cout<<"CONGRATULATION! YOU HAVE GUESSED THE NUMBER IN "<<count<<" TIMES"<<endl<<endl;
            break;
        }
        else if(input<num)
        {
            cout<<"THE NUMBER YOU GUESSED IS SMALLER. GUESS A BIGGER NUMBER."<<endl<<endl;
            cout << "GUESS THE NUMBER AGAIN: ";
        }
         else
        {
            cout<<"THE NUMBER YOU GUESSED IS BIGGER. GUESS A  SMALLER NUMBER."<<endl<<endl;
            cout << "GUESS THE NUMBER AGAIN: ";
        }
           count++;
    }
    return 0;
}