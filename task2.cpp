#include <iostream>
using namespace std;
int generateFibonacci(int length);

main()
{
	cout << "Enter the length of the Fibonacci series: ";
	int length, series=0;
	cin >> length;
	while(series<=length)
	{
	 cout <<generateFibonacci(series) << " " ;
	series++;
	}
}
int generateFibonacci(int length)
{	int output;
	if(length==0)
	return 0;
	else if(length==1)
	return 1;
	else
	{return generateFibonacci(length-1)+generateFibonacci(length-2) ;
	}
}
