#include <iostream>


using namespace std;


int main(){
    //ask question

    cout<<"please input side a : ";

    //input
    //a = height b = width
    
    int a = 0;

    cin >> a;

    //ask question 2

    cout<<"please input side b : ";

    //input 2

    int b = 0;

    cin >> b;

    //draw
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
    


    }