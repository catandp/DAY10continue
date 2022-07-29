//函数的默认参数
//函数返回值类型+函数名（参数=默认值）{}
/*****************************************
#include<iostream>
using namespace std;
int func(int a, int b, int c)//无默认参数
{
	return a + b + c;
}
//注意事项：
//1.如果某个位置有了默认参数，那么从这个位置往后每一个位置都要有默认参数
//int func3(int a, int b = 20, int c )//有默认参数
//{
//	return a + b + c;
//}
//2.如果函数的声明中有默认参数，函数的实现（定义）就不能有默认参数
//int func4(int a=10, int b=10);
//int func4(int a=10, int b=10)//不知道默认参数按照声明还是实现的，产生了二义性
//{
//	return a + b;
//}
int func1(int a, int b = 20, int c = 30)//有默认参数
{
	return a + b + c;
}
int main()
{
	//cout << func4() << endl;;
	cout << func(10, 20, 30) << endl;//必须写出三个参数
	cout << func1(10) << endl;//只用写一个参数
	cout << func1(10, 30) << endl;//如果传入了参数用传入值
	system("pause");
	return 0;
}
**************************************/
//函数的占位参数
//函数返回值类型+函数名（数据类型）{}
/***********************************
#include<iostream>
using namespace std;
//占位参数
void func(int a, int)//占位参数
{
	cout << "hello,world!" << endl;
}
int main()
{
	func(20, 10);//必须输入一个相同数据类型的值
	system("pause");
	return 0;
}
***********************************/
//函数重载---------------函数名相同，提高函数名的复用性
//1.同一个作用域
//2.函数名相同
//3.函数的参数的类型或数量或顺序不同
/***********************************
#include<iostream>
using namespace std;
//注意事项：不能将函数的返回值作为函数的重载条件
// 即：相同函数名不能根据函数返回值类型不同来重载
//没在main函数中都叫全局作用域
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
//函数重载注意事项
#include<iostream>
using namespace std;
//1.引用作为函数重载的条件

void func(int& a)//函数1  int&a=10;不合法
{
	cout << "Hello world" << endl;
}
void func(const int& a)//函数2
{
	//相当与const int& a=10;合法
	cout << "hello world" << endl;
}
//2.函数重载碰到默认参数
void func2(int a,int b=10)//函数3
{
	cout << "func2" << endl;
}
void func2(int a)//函数4
{
	cout << "func2---4" << endl;
}
int main()
{
	int a = 10;
	func(a);//调用函数1
	func(10);//调用函数2
	//func2(10);//只传一个参数产生了二义性
	system("pause");
	return 0;
}
