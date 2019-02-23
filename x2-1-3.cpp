//x2-1-3
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << "十进制" << dec << a << endl;//十进制（dec） 
	cout << "十六进制" << hex << a << endl;//十六进制（hex） 
	cout << "八进制" << setbase(8) << a << endl; //setbase(n)
}
