/*
#include<stdio.h>
int main(void) 
{
	int age = 0;
	scanf_s("%d", &age);
	if (age >= 20)
		printf("일반인입니다.\n");
	else if (8 <= age <= 12)
		printf("초등학생입니다.\n");
	else if (13 <= age <= 15)
		printf("중학생입니다.\n");
	else if (16 <= age <= 19)
		printf("고등학생입니다.\n");
	else 
		printf("무료\n");
	return 0;
}*/
/*
#include<stdio.h>
int main(void)
{
	for (int i = 1;i <= 30;i++)
	{
		if (i >= 6) 
		{
			printf("%d 학생은 집에 가주세요\n",i);
			break;  //종료
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	}
	return 0;
}

*/
/*
#include<stdio.h>
int main(void)
{
	for (int i = 1;i < 30;i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;  //제외하고 게속진행
			}
			printf("%d 번 학생은 발표 준비를 해주세요\n",i);
		}
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a와b는 같고 c와d도 같다\n");
	}
	else
	{
		printf("값이 서로 다르다\n");
	}
}

#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a와b 혹은 c와d가 같다\n");
	}
	else
	{
		printf("값이 서로 다르다\n");
	}
}
*/

/*  //랜덤
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//srand(timne(NULL));
	//int num = rand() % 3 + 1;
	printf("난수 초기화 이전..\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ",rand() % 10);
	}

	srand(time(NULL));
	printf("\n난수 초기화 이후..\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", rand() % 10);
	}
		return 0;
}
*/

/*
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	srand(time(NULL));
	int i = rand() %3;   //0,1,2
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else
	{
		printf("보\n");
	}
	

	
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)	//스위치
	{
	case 0:	printf("가위\n");break;
	case 1:	printf("바위\n");break;
	case 2:	printf("보\n");break;
	default:printf("몰?루\n");	break;
	}
	
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int age = rand()%100;
	switch (age)
	{
	case 8: 
	case 9: 
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19: printf("고등학생입니다\n"); break;
	default: printf("학생이 아니에요%d\n",age); break;
	}
	return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));
	int num = rand() % 100;
	printf("숫자 %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요(1~100) : ");
		scanf_s("%d", &num);
		
		if (answer > num)
		{
			printf("%d 보다 큼니다.\n\n", answer);
		}
		else if (answer < num)
		{
			printf("%d 보다 작습니다.\n\n", answer);
		}
		else if (answer == num)
		{
			printf("정답이다 연금술사!\n\n");
			break;
		}
		else
		{
			printf("오류발생");
		}
		if (chance == 0)
		{
			printf("찬스를 다 사용하셧습니다 정답은 %d 입니다.\n\n", num);
		}
	}
	return 0;
}
















































































