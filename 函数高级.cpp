//������Ĭ�ϲ���
//��������ֵ����+������������=Ĭ��ֵ��{}
/*****************************************
#include<iostream>
using namespace std;
int func(int a, int b, int c)//��Ĭ�ϲ���
{
	return a + b + c;
}
//ע�����
//1.���ĳ��λ������Ĭ�ϲ�������ô�����λ������ÿһ��λ�ö�Ҫ��Ĭ�ϲ���
//int func3(int a, int b = 20, int c )//��Ĭ�ϲ���
//{
//	return a + b + c;
//}
//2.�����������������Ĭ�ϲ�����������ʵ�֣����壩�Ͳ�����Ĭ�ϲ���
//int func4(int a=10, int b=10);
//int func4(int a=10, int b=10)//��֪��Ĭ�ϲ���������������ʵ�ֵģ������˶�����
//{
//	return a + b;
//}
int func1(int a, int b = 20, int c = 30)//��Ĭ�ϲ���
{
	return a + b + c;
}
int main()
{
	//cout << func4() << endl;;
	cout << func(10, 20, 30) << endl;//����д����������
	cout << func1(10) << endl;//ֻ��дһ������
	cout << func1(10, 30) << endl;//��������˲����ô���ֵ
	system("pause");
	return 0;
}
**************************************/
//������ռλ����
//��������ֵ����+���������������ͣ�{}
/***********************************
#include<iostream>
using namespace std;
//ռλ����
void func(int a, int)//ռλ����
{
	cout << "hello,world!" << endl;
}
int main()
{
	func(20, 10);//��������һ����ͬ�������͵�ֵ
	system("pause");
	return 0;
}
***********************************/
//��������---------------��������ͬ����ߺ������ĸ�����
//1.ͬһ��������
//2.��������ͬ
//3.�����Ĳ��������ͻ�������˳��ͬ
/***********************************
#include<iostream>
using namespace std;
//ע��������ܽ������ķ���ֵ��Ϊ��������������
// ������ͬ���������ܸ��ݺ�������ֵ���Ͳ�ͬ������
//û��main�����ж���ȫ��������
void func(int a)
{
	cout << "hello world" << endl;
}
void func()
{
	cout << "hello world!" << endl;
}
int main()
{
	func(10);
	func();
	system("pause");
	return 0;
}
**************************/
//��������ע������
#include<iostream>
using namespace std;
//1.������Ϊ�������ص�����

void func(int& a)//����1  int&a=10;���Ϸ�
{
	cout << "Hello world" << endl;
}
void func(const int& a)//����2
{
	//�൱��const int& a=10;�Ϸ�
	cout << "hello world" << endl;
}
//2.������������Ĭ�ϲ���
void func2(int a,int b=10)//����3
{
	cout << "func2" << endl;
}
void func2(int a)//����4
{
	cout << "func2---4" << endl;
}
int main()
{
	int a = 10;
	func(a);//���ú���1
	func(10);//���ú���2
	//func2(10);//ֻ��һ�����������˶�����
	system("pause");
	return 0;
}
