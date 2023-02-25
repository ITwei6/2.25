#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//1.检查长度
//2.检查数字范围
//3.将年月日保存至三个变量中
//4.判断闰年--闰年函数
//5.检查月份和天数范围
//6.生成一个可以计算总天数的函数
//int leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int gap_year(int year, int month, int day)
//{
//	int sum = 0;
//	int i = 0;
//	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	sum = day;
//	for (i = 1; i < year; i++)
//	{
//		if (leap_year(year))
//		{
//			sum += 366;
//		}
//		else
//		{
//			sum += 365;
//		}
//	}
//	for (i = 0; i < month - 1; i++)
//	{
//		sum += mon[i];
//	}
//	return sum;
//
//}
//int main()
//{
//	char num[20];
//	int year, month, day, check, i, day1, day2,result;
//	check = 1;
//	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (check)
//	{
//		printf("请输入日期：");
//		scanf("%s", &num);
//		if (strlen(num) != 8)
//		{
//			printf("输入有误\n");
//			continue;
//		}
//		for (i = 0; i < 8; i++)
//		{
//			if (num[i] > '9' || num[i] < 0)
//			{
//				printf("输入有误\n");
//				continue;
//			}
//		}
//		
//		year =(int)(num[0] - '0') * 1000 + (int)(num[1] - '0') * 100 + (int)(num[2] - '0') * 10 + (int)(num[3] - '0');
//		month= (int)(num[4] - '0') * 10 + (int)(num[5] - '0');
//		day= (int)(num[6] - '0') * 10 + (int)(num[7] - '0');
//		if (leap_year(year))
//		{
//			mon[1] = 29;
//		}
//		if (month > 12 || day > 31)
//		{
//			printf("输入有误\n");
//			continue;
//		}
//		check = 0;
//	}
//	day1 = gap_year(year, month, day);
//	day2 = gap_year(2022, 12, 24);
//	result = (day1 - day2) % 7;
//	if (day1 < day2)
//	{
//		result = (day1 - day2) % 7 + 7;
//	}
//	switch (result)
//	{
//	case 0:printf("星期六"); break;
//	case 1:printf("星期天"); break;
//	case 2:printf("星期一"); break;
//	case 3:printf("星期二"); break;
//	case 4:printf("星期三"); break;
//	case 5:printf("星期四"); break;
//	case 6:printf("星期五"); break;
//	default:printf("error"); break;
//	}
//	return 0;
//}

//1.将文件A中的内容读入到数组a中
//2.将文件B中的内容读入到结构体B中--有两个元素
//3.根据b中的元素与a相比较，将映射的内容存到数组c中并将数组c内容写道文件c中
//typedef struct secert
//{
//	char pre;
//	char pos;
//}Sec;
//int main()
//{
//	char a[100];
//	Sec b[100];
//	char c[100];
//	int lenA = 0;
//	int lenB = 0;
//	int i, j ,flag;
//	char* fileA, * fileB;
//	FILE* pf1, * pf2, * pf3;
//	//打开文件A，要知道文件a的名字
//	fileA = "Q3.A.txt";
//	pf1 = fopen(fileA, "r");
//	if (pf1 == NULL)
//	{
//		perror("fopen");
//	}
//	while (!feof(pf1))
//	{
//		a[lenA] = fgetc(pf1);
//		lenA++;
//	}
//	fclose(pf1);
//	a[lenA] = '\0';
//	fileB = "Q3.B.txt";
//	pf2 = fopen(fileB, "r");
//	if (pf2 == NULL)
//	{
//		perror("fopen");
//	}
//	while (!feof(pf2))
//	{
//		fscanf(pf2, "%c %c", &b[lenB].pre, &b[lenB].pos);
//		lenB++;
//	}
//	fclose(pf2);
//	pf3 = fopen("Q3.C.txt", "wb");
//	for (i = 0; i < lenA; i++)
//	{
//		flag = 0;
//		for (j = 0; j < lenB; j++)
//		{
//			if (a[i] == b[j].pos)
//			{
//				c[i] = b[j].pre;
//				printf("%c", c[i]);
//				fputc(c[i],pf3);
//				flag = 1;
//				continue;
//			}
//		}
//		if (flag = 0)
//		{
//			printf("%c", c[i]);
//			fputc(c[i], pf3);
//		}
//	}
//	fclose(pf3);
//	return 0;
//}
//三个连续的字母
//生成一个随机种子--0代表第一个字母是？1代表第二个字母是？2代表第三个字母是？
//#include <time.h>
//#include <stdlib.h>
//int main()
//{
//	char charater, answer, pos, guess;
//	int i, count = 0;
//	time_t start, end;
//	double total, correct_count;
//	srand((unsigned int)time(NULL));
//	start = time(NULL);
//	for (i = 0; i < 3; i++)
//	{
//		pos = rand() % 3 + '0'; 
//		charater = rand() % 24 + 'A';
//		printf("--------------第%d次猜字母开始------------\n", i + 1);
//		if (pos == '0')
//		{
//			answer = charater;
//			printf("? %c %c", charater + 1, charater + 2);
//		}
//		else if (pos == '1')
//		{
//			answer = charater+1;
//			printf("%c ? %c", charater, charater + 2);
//		}
//		else if (pos == '2')
//		{
//			answer = charater+2;
//			printf("%c %c ?", charater, charater+1);
//		}
//		printf("请输入正确字母:");
//		scanf("%c", &guess);
//		getchar();
//		if (answer == guess)
//		{
//			printf("对的\n");
//			count++;
//		}
//		else
//		{
//			printf("错误的,正确的答案是%c\n",answer);
//		}
//	}
//	end = time(NULL);
//	total = (double)(end - start);
//	correct_count = count * 100 / 3.0;
//	printf("总共进行：%f s\n", total);
//	printf("正确率：%f%%", correct_count);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
编程实现一个游戏程序，会将连续三个字母中的一个隐去，由玩家填写隐去的那个字母，如屏幕上显示A ? C，则玩家需要输入B；屏幕上显示？B C，则玩家需要输入A。记录玩家完成20次游戏的时间以及正确率。
*/

int main(void) {
    char character, position, answer, guess, c;
    int i, count = 0;
    double duration;
    time_t start, end;

    srand((unsigned int)(time(0)));    // 随机种子

    start = time(NULL);    // 开始计时

    for (i = 0; i < 2; i++) {
        position = rand() % 3 + '0';    // 随机隐藏的位置0，1，2
        character = rand() % 24 + 'A';  // 随机出现的第一个字母 A-X
        printf("----- Round %d -----\n", i + 1);
        if (position == '0') {
            answer = character;
            printf("? %c %c\n", character + 1, character + 2);
        }
        else if (position == '1') {
            answer = character + 1;
            printf("%c ? %c\n", character, character + 2);
        }
        else if (position == '2') {
            answer = character + 2;
            printf("%c %c ?\n", character, character + 1);
        }
        printf("Please enter the correct letter: ");
        guess = getchar();
        do { scanf("%c", &c); } while (c != '\n');
        if (answer == guess) {
            printf("Correct!\n");
            count++;
        }
        else {
            printf("Wrong! The correct letter is %c\n", answer);
        }
    }
    end = time(NULL);  // 停止计时
    duration = ((double)(end - start));
    printf("Win Ratio: %f %%\n", count * 100 / 2.0);
    printf("Game Time: %f s\n", duration);
    return 0;
}