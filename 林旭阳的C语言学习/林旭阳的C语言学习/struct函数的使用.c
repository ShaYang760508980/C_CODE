#include<stdio.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b1={"C程序语言设计",55};
	/*printf("书名：%s\n",b1.name);
	printf("价格：%d元\n",b1.price);
	b1.price=15;*/
	struct Book* pb=&b1;
	/*printf("%d\n",(*pb).price);
	printf("%s\n",(*pb).name);*/
	printf("%d\n",pb->price);
	printf("%s",pb->name);

	return 0;
}