#include<stdio.h>
int main()
{}

  //do-while循环

  //do
//{循环语句}
// while(条件)

//{
//	int i = 1;
//	do
//		{
//			printf("%d ", i);
//			i++; 
//		}
//		while (i <= 10);
//	return 0;
//}

//第三类for循环（表达式1：初始化；表达式2：条件；表达式三：递增调整；）

////循环次数0{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0;//赋值，判断假 i++, k++)
//		k++;
//	return 0;
//}

//for2变种

////两个hehe
// {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//for1变种

////结果为10个hehe
// {
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//结果为100个hehe
// {
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe \n");
//		}
//	}
//	return 0;
//}
//
//for循环初始化，调整，判断都可省略，判断条件就是 恒为正
// {
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//数组
// {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <=10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//for循环
// {
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//break;//continue跳过本次循环，不会像while一样无限循环
//		//break跳过本次之后的循环
//		printf("%d ", i);
//	}
//	return 0;
//}

////循环语句...
//{
//	int i = 0;
//	for (i = 1; i <=10; i++)
//	{
//		printf("i =  %d ;", i);
//	}
//	return 0;
//}

//while循环
// {
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//...
//		i++;//调整
//	}
//	return 0;
//}




//仅输入字符型数字
// {
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//第二部分--设置密码
// 使其可以一段一段读取缓冲区值
// {
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//第二部分--getchar&&putchar均需要();
// int char = getchar();
// putchar(char);
// {
//	int ch = getchar();
//
//		putchar(ch);
//		printf(" %c\n", ch);
//	return 0;
//}



//第一部分--for循环
// {
//	int i = 1;
//	for (i = 0;i<=10;i ++)
//		printf("%d ", i);
//	return 0;
//}
//第一部分--while循环
// {
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d\n", i);	
//		i++;
//	}
//	return 0;
//}

//while -if
// {
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)	
//			//break&&continue;break--永久跳出，continue--跳出本次。//
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//while
// {
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}