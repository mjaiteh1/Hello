//
//  main.cpp
//  Hello
//
//  Created by Mariama Jaiteh on 9/3/16.
//  Copyright © 2016 Mariama Jaiteh. All rights reserved.
//

#include <iostream>
#include <string> // Gives you string Functions
using namespace std;


int getFactorial(int number){
    
    int sum;
    if(number == 1) sum = 1;
    else sum = getFactorial(number -1)* number;
    return sum;
}

int main(int argc, const char * argv[]) {
    
    for(int x = 5; x>= 1; x--)
    {
        for(int y = 1; y <= x; y++)
        {
            cout << "X";
        }
        cout <<endl;
    }
    
    
    for(int x = 1; x <= 5; x++)
    {
        for(int y = 1; y<= x; y++)
        {
            cout << "x";
        }
        cout << endl;
    }
    
    
    int n, c, first = 0, second = 1, next;
    
    cout << "Enter the number of terms of Fibonacci series you want" << endl;
    cin >> n;
    
    cout << "First " << n << " terms of Fibonacci series are :- " << endl;
    
    for ( c = 0 ; c < n ; c++ )
    {
        if ( c <= 1 )
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }
    
    /// Strings
    string s1("Happ");
    string s2;
    string s3;
    //Copy strings
    s2 = s1;
    s3.assign(s1);
    // strings are arrays of characters.
    string s5 = "codgdjkgd";
    cout << s5[2] << endl;
    s1.at(2);// also works like an array
    
    string counting = "hello";
    
    int num1;
    int num2;
    int num3;
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    int sum = num1 + num2 + num3;
    cout << sum << endl;
    
    
    
    
    
    
    
      return 0;

}
