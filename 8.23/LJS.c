#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "add.h"
//int main()
//{
//	int num[6][6];
//	int num1[6][6] = {0};
//	int num2[6][6] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 6; i++)
//	{
//		for (j = 1; j < 6; j++)
//		{
//			scanf("%d", &num[i][j]);
//		}
//	}
//	int s = 0;
//	int f = 0;
//	int max = 0;
//	for(i = 1; i < 6; i++ )
//	{
//		max = 0;
//	for (j = 1; j < 6; j++)
//	{
//		num1[i][j] > max;
//		max = num1[i][j];
//		num1[i][j] = max;
//		for (s = j - 1; s > 0; s--)
//		{
//			num1[i][j] = 0;
//		}
//
//	}
//	}
//	int min = 9999;
//	for (i = 1; i < 6; i++)
//	{
//		min = 9999;
//		for (j = 1; j < 6; j++)
//		{
//			num2[i][j] < min;
//			min = num2[i][j];
//			num2[i][j] = min;
//			for (s = j - 1; s > 0; j++)
//			{
//				num2[i][j] = 0;
//			}
//		}
//	}
//	int z = 0;
//	for (i = 1; i < 6; i++)
//	{
//		for (j = 1; j < 6; j++)
//		{
//			if (num1[i][j] = num2[i][j] && num1[i][j] != 0 && num2[i][j] != 0)
//			{
//				z = 1;
//				printf("%d,%d,%d", i, j, num[i][j]);
//			}
//		}
//		if (z == 0)
//		{
//			printf("not found");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//			ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int t = 0;
//	int right = sz-1;
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (k <arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("%d", mid);
//			t = 1;
//			break;
//		}
//	}
//	if (0==t) {
//		printf("没有这个数");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "welcome to bit!!!!";
//	char arr1[] = "##################";
//	int left = 0;
//	int sz = strlen(arr1) - 1;
//	int right = sz;
//	for (left = 0, right = sz; left <= right; left++, right--)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	char arr2[] = "abc";
//	if (strcmp(arr, arr2) == 0) {
//		printf("1");
//	}
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("******* 1. play **************\n");
//	printf("******* 0. exit **************\n");
//	printf("******************************\n"); 
//
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜中了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char input[3] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，您的电脑将在60秒后关机,如果您不想关机，请输入：我是猪，则取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) 
//	{
//		system("shutdown -a");
//	}
//	else  
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char arr1[] = "hello bit!";
//	strcpy(arr, arr1);
//	printf("%s", arr);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d", m);
//	return 0;
//}
//void Swap(int* p, int* p2)
//{
//	int t = *p; 
//	*p = *p2;
//	*p2 = t;
//	
//	printf("%p", p);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int getnum(int x)
//{
//	int i = 0;
//	if (x <= 3) 
//	{
//		return 0;
//	}
//	else 
//	{
//		for (i = 2; i <= sqrt(x); i++)
//		{
//			if (x % i == 0) {
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int z = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int z = getnum(i);
//		if (!z) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int is_leap_year(int n) 
//{
//	if (((n % 4 == 0)&& (n % 100 != 0))||(n%400==0)) {
//			return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (is_leap_year(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int size)
//{
//	    int left = 0;
//		int right = size - 1;
//	while (left <= right) {
//
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 2;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,size);
//	if (ret == -1) {
//		printf("找不到\n");
//	}
//	else {
//		printf("下标为:%d\n", ret);
//	}
//	return 0;
//}
//for (i = 0; i < 100; i++) {
//	Delay10ms();
//	if (getkeynum() == 3) {
//		Delay10ms();
//		if (getkeynum() == 3) {
//			while (1) {
//				if (getkeynum() == 4) {
//					Delay10ms();
//					if (getkeynum() == 4) {
//						break;
//					}
//				}
//			}
//		}
//	}
//}
//if (getkeynum() == 3) {
//	Delay10ms();
//	if (getkeynum() == 3) {
//		while (1) {
//			if (getkeynum() == 4) {
//				Delay10ms();
//				if (getkeynum() == 4) {
//					break;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int c = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	int len = strlen("abcdef");
//	printf("%d ", len);
//	printf("%d", add(a, b));
//	return 0;
//}
//void print(unsigned int x) 
//{
//	//if (x > 9) 
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//	  
//}
//int fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int main() 
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	default:
//		printf("hehe");
//		break;
//	case 2:
//		printf("2");
//		break;
//	case 1:
//		printf("1");
//		break;
//	}
//	return 0;
//}
//void ptable(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	ptable(n);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][2] = { 1,2,3,4,5,6 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//// 冒泡排序函数（降序）
//void bubbleSortDesc(int arr[], int n)
//{
//    int i, j, temp;
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])  // 这里修改为小于，以实现降序
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
// //打印数组函数
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
//
//// 测试示例
//int main()
//{
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("排序前的数组为: ");
//    printArray(arr, n);
//
//    bubbleSortDesc(arr, n);
//
//    printf("排序后的数组为: ");
//    printArray(arr, n);
//
//    return 0;
//}
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char a[] = { 'a','b',c,d,e};
//	printf("%s", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int t = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (a & 1)
	//	{
	//		t++;
	//	}
	//	a = a >> 1;
	//}
	//printf("%d\n", t);
//	printf("%d", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}
#include <stdio.h>

//int main() {
//	double length = 0;
//	double width = 0;
//	double height = 0;
//	printf("请输入三个小数，分别表示长、宽、高\n");
//	scanf("%lf %lf %lf", &length, &width, &height);
//	double area1 = length * width;
//	printf("正方形 a 面的面积:%.2lf\n", area1);
//	return 0;
//}
//struct peo
//{
//	int num;
//	char name[20];
//};
//struct st
//{
//	struct peo p;
//	int n;
//};
//void print(struct st*sp)
//{
//	printf("%d %s %d",sp->p.num,sp->p.name,sp->n);
//}
//int main()
//{
//	struct st s = { {1,"张三"},0 };
//	print(&s);
//	return 0;
//}
//  
//int num(int x, int y)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >>i)& 1) != ((y >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}  
//int main()
//{
//	int a = 20;
//	int b = 10;
//
//	/*scanf("%d %d", &a, & b);*/
//	int t = num(a, b);
//	printf("%d", t);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	char arr2[] = "abcde";
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//void test2()
//{
//	printf("haha");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	const int* p = &i;
//	i = 10;
//	printf("%d", i);
//	return 0;
//}
//void order(char* p, int len)
//{
//	int left = 0;
//	int right = len-1;
//	while (left < right)
//	{
//		char tmp = *(p + right);
//		*(p + right) = *(p + left);
//		*(p + left) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int i = 0;
//	//for (len = 0; arr[len] != 0; len++)
//	//{
//	//	;
//	//}
//	order(arr, len);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	printf("%s", arr);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i =0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//void order(char* p, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = *(p + right);
//		*(p + right) = *(p + left);
//		*(p + left) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	order(arr, len);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		order(start,)
//	}
//	return 0;
//}
