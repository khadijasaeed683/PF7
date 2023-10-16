#include<iostream>
using namespace std;

main()
{
    int number=0, sum=0;
    while (number >=0)
    {
        cout << "Enter a Number: ";
        cin >> number;
        sum= sum + number;
    } 
    cout << "Sum: " << sum;
}