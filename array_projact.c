//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main_array_projact(void)
//{
//	srand(time(NULL));
//	printf("\n\n === 아빠는 대머리 게임 === \n\n");
//	int answer; //사용값
//	int treatment = rand() % 4;// 발모제 선택
//
//	int cntShowBottle = 0;// 이번병 개수
//	int prevCntShowBottle = 0;// 앞으로 보여준 병 개수?
//	//3번의 기회
//	for (int i = 1;i <= 3;i++)
//	{
//		int bottle[4] = { 0,0,0,0 };
//		do {
//			cntShowBottle = rand() % 2 + 2; // 보여줄 병 갯수 
//		} while (cntShowBottle == prevCntShowBottle);
//
//		int islncluded = 0;
//		printf("> %d번째 시도 : ", i);
//
//		//보여줄 병 종류 선택
//		for (int j = 0;j < cntShowBottle;j++)
//		{
//			int randBottle = rand() % 4;
//
//			// 아직 선택되지 않은 병이면, 선택처리
//			if (bottle[randBottle] == 0)
//			{
//				bottle[randBottle] = 1;
//				if (randBottle == treatment)
//				{
//					islncluded = 1;
//				}
//			}
//			// 이미 선택된 병이면, 중복이므로 다시 선택
//			else
//			{
//				j--;
//			}
//		}
//
//		//사용자 문제표시
//		for (int k = 0;k < 4;k++)
//		{
//			if (bottle[k] == 1)
//				printf("%d", k + 1);
//		}
//		printf(" 물약을 머리에 바름니다\n\n");
//
//		if (islncluded == 1)
//		{
//			printf(" >>성공 ! 머리가 났어요!\n");
//		}
//		else
//		{
//			printf(" >> 실패! 머리가 나지 않았어요. ㅠㅠ\n");
//		}
//		printf("\n ... 게속 하려면 아무키나 누르세요...\n");
//		getchar();
//	}
//
//	printf("\n\n발모제는 몇번일까요? ");
//	scanf_s("%d", &answer);
//
//	if (answer == treatment+1)
//	{
//		printf("\n >> 정답입니다!\n");
//	}
//	else
//	{
//		printf("\n >> 틀림 ㅋ 정답은 %d 입니다.\n", treatment +1);
//	}
//
//	return 0;
//}
