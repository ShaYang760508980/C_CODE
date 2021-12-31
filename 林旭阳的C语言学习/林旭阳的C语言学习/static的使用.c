//#include<stdio.h>
//情况1，无static，int a = 1的生命周期为局部程序结束，int a = 1的生命周期也结束，所以答案为 2 2 2 2 2
//void test()
//{
//	int a=1;
//	a++;
//	printf("%d\n",a);
//}
//
//int main()
//{
//	int i=0;
//
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//1.static修饰局部变量时
//:局部变量的生命周期延长
//void test()
//{
//	static int a=1;
//	a++;
//	printf("%d\n",a);
//}
//
//int main()
//{
//	int i=0;
//
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//2.static修饰全局变量时候
//：让全局变量只能在自己的源文件中使用，出了源文件就不可以使用。 extern可以在外面使用其他文件的全局变量。