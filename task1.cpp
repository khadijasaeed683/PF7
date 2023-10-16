#include<iostream>
using namespace std;
void printTable(int number);


main()
{
    int number;
    cout << "Enter Table Number: ";
    cin >> number;
    printTable(number);
}
void printTable(int number){
    int table=0;

    for (int x=1 ; x<=10 ; x++)
    {
       table= number*x;
       cout << number << "x" << x << '=' << table << endl;
    }

}