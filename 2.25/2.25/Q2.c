#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//1.��鳤��
//2.������ַ�Χ
//3.�������ձ���������������
//4.�ж�����--���꺯��
//5.����·ݺ�������Χ
//6.����һ�����Լ����������ĺ���
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
//		printf("���������ڣ�");
//		scanf("%s", &num);
//		if (strlen(num) != 8)
//		{
//			printf("��������\n");
//			continue;
//		}
//		for (i = 0; i < 8; i++)
//		{
//			if (num[i] > '9' || num[i] < 0)
//			{
//				printf("��������\n");
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
//			printf("��������\n");
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
//	case 0:printf("������"); break;
//	case 1:printf("������"); break;
//	case 2:printf("����һ"); break;
//	case 3:printf("���ڶ�"); break;
//	case 4:printf("������"); break;
//	case 5:printf("������"); break;
//	case 6:printf("������"); break;
//	default:printf("error"); break;
//	}
//	return 0;
//}

//1.���ļ�A�е����ݶ��뵽����a��
//2.���ļ�B�е����ݶ��뵽�ṹ��B��--������Ԫ��
//3.����b�е�Ԫ����a��Ƚϣ���ӳ������ݴ浽����c�в�������c����д���ļ�c��
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
//	//���ļ�A��Ҫ֪���ļ�a������
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
//������������ĸ
//����һ���������--0�����һ����ĸ�ǣ�1����ڶ�����ĸ�ǣ�2�����������ĸ�ǣ�
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
//		printf("--------------��%d�β���ĸ��ʼ------------\n", i + 1);
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
//		printf("��������ȷ��ĸ:");
//		scanf("%c", &guess);
//		getchar();
//		if (answer == guess)
//		{
//			printf("�Ե�\n");
//			count++;
//		}
//		else
//		{
//			printf("�����,��ȷ�Ĵ���%c\n",answer);
//		}
//	}
//	end = time(NULL);
//	total = (double)(end - start);
//	correct_count = count * 100 / 3.0;
//	printf("�ܹ����У�%f s\n", total);
//	printf("��ȷ�ʣ�%f%%", correct_count);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
���ʵ��һ����Ϸ���򣬻Ὣ����������ĸ�е�һ����ȥ���������д��ȥ���Ǹ���ĸ������Ļ����ʾA ? C���������Ҫ����B����Ļ����ʾ��B C���������Ҫ����A����¼������20����Ϸ��ʱ���Լ���ȷ�ʡ�
*/

int main(void) {
    char character, position, answer, guess, c;
    int i, count = 0;
    double duration;
    time_t start, end;

    srand((unsigned int)(time(0)));    // �������

    start = time(NULL);    // ��ʼ��ʱ

    for (i = 0; i < 2; i++) {
        position = rand() % 3 + '0';    // ������ص�λ��0��1��2
        character = rand() % 24 + 'A';  // ������ֵĵ�һ����ĸ A-X
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
    end = time(NULL);  // ֹͣ��ʱ
    duration = ((double)(end - start));
    printf("Win Ratio: %f %%\n", count * 100 / 2.0);
    printf("Game Time: %f s\n", duration);
    return 0;
}