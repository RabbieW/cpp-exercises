//x2-1-3
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << "ʮ����" << dec << a << endl;//ʮ���ƣ�dec�� 
	cout << "ʮ������" << hex << a << endl;//ʮ�����ƣ�hex�� 
	cout << "�˽���" << setbase(8) << a << endl; //setbase(n)
}
