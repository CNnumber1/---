#include<stdio.h>
int main()
{}

  //do-whileѭ��

  //do
//{ѭ�����}
// while(����)

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

//������forѭ�������ʽ1����ʼ�������ʽ2�����������ʽ����������������

////ѭ������0{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0;//��ֵ���жϼ� i++, k++)
//		k++;
//	return 0;
//}

//for2����

////����hehe
// {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//for1����

////���Ϊ10��hehe
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

//���Ϊ100��hehe
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
//forѭ����ʼ�����������ж϶���ʡ�ԣ��ж��������� ��Ϊ��
// {
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//����
// {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <=10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//forѭ��
// {
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//break;//continue��������ѭ����������whileһ������ѭ��
//		//break��������֮���ѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}

////ѭ�����...
//{
//	int i = 0;
//	for (i = 1; i <=10; i++)
//	{
//		printf("i =  %d ;", i);
//	}
//	return 0;
//}

//whileѭ��
// {
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		//...
//		i++;//����
//	}
//	return 0;
//}




//�������ַ�������
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

//�ڶ�����--��������
// ʹ�����һ��һ�ζ�ȡ������ֵ
// {
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//�ڶ�����--getchar&&putchar����Ҫ();
// int char = getchar();
// putchar(char);
// {
//	int ch = getchar();
//
//		putchar(ch);
//		printf(" %c\n", ch);
//	return 0;
//}



//��һ����--forѭ��
// {
//	int i = 1;
//	for (i = 0;i<=10;i ++)
//		printf("%d ", i);
//	return 0;
//}
//��һ����--whileѭ��
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
//			//break&&continue;break--����������continue--�������Ρ�//
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