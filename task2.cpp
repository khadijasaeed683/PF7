#include<iostream>
using namespace std;
void generateFibonacci(int length ,int no1);

main()
{
    int length=0,no1=0;
    cout << "Enter the length of Fibonacci series: ";
    cin >> length;
    cout << no1,
    generateFibonacci( length, no1) ;
}
void generateFibonacci(int length, int no1) 
{
    int series=0,no2=1;
    for (int x=0 ; x<= length-1; x++)
    {
        series= no2+no1;
        no1=no2;
        no2= series;
        cout << ", " << series ;
    }
}