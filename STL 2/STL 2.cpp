#include<iostream>
#include<memory>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iterator>
using namespace std;
////class FileOpen
////{
////	FILE* f;
////public:
////	FileOpen(const char* filename, const char* mode)
////	{
////		if (!(f = fopen(filename, mode)))
////		{
////			exit(0);
////		}
////	}
////	~FileOpen()
////	{
////		fclose(f);
////	}
////};
////void f()
////{
////	FileOpen MyFile("text.txt", "r+");
////}
////template<class X>
////class std::auto_ptr
////{
////	X* ptr;
////public:
////	explicit auto_ptr(X* p = 0)throw()
////	{
////		ptr = p;
////	}
////	~auto_ptr()throw()
////	{
////		delete ptr;
////	}
////	X& operator*() const throw()
////	{
////		return*ptr;
////	}
////	X* operator->() const throw()
////	{
////		return ptr;
////	}
////};
//class TEMP
//{
//public:
//	TEMP()
//	{
//		cout << "Temp\n\n";
//	}
//	~TEMP()
//	{
//		cout << "~Temp\n\n";
//	}
//	void TEST()
//	{
//		cout << "Test\n\n";
//	}
//};
//void main()
//{
//	auto_ptr<TEMP>ptr1(new TEMP), ptr2;
//	ptr2 = ptr1;
//	ptr2->TEST();
//	TEMP* ptr = ptr2.get();
//	ptr->TEST();
//	//substr - ����������� ���������
//	//compare-��������� ������ (����� �������������� ��������� !=,<,>)
//}
void main()
{
	string s = "Hello world";
	int nWordEnd = s.find(' ');
	string sub_string = s.substr(0, nWordEnd);
	printf("String: %s\n", s.c_str());
	printf("Sub String: %s\n", sub_string.c_str());

	//�������-������ ��� ������ ���������� ������.������������ �������� ���������,������������� � ���������� == , != , *i , ++i
	//��������-�������� ������� � ������� ������ ������ ���� ��������.������������ �������� ������������� � �������� ++i ,i++ ,*i=t , *i++=t
	//����������������-�������� ����� ���������� ������� � ��������, � ����� ����� ������������ �� ������ ������������������� 
	//���������� ������ � �����.������������ ��� �������� ���������� �����/������ �, ����� ����,�������� ���  �����������
	//��������� ������������ ==, != , = ,*i ,++i , i++, *i++
	//��������������� -���������������,�� �������� ������������ � ����� ����������� --i, i--, *i--
	//�������������- �������� ����������������� ���� �������, ������������ ������ �� ������� i+=n , i+n, i-=n, i1-i2, i[n], i1<i2, i1<=i2, i1>i2, i1>i2
}