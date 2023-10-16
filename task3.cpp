#include<iostream>
using namespace std;
int totalDigits (int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
}
int totalDigits (int number)
{
    int no1, result=0;
    while (no1!=0)
    {
        no1= number%10;
        result=result+1;
    }
    return result;
}