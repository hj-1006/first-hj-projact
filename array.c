//#include<stdio.h>
//
//int main(voiu)
//{
//	//int subway_1 = 30; //지하철 1호선에 30명 타고있다
//	//int subway_2 = 30; //지하철 2호선에 50명 타고있다
//	//int subway_3 = 30; //지하철 3호선에 100명 타고있다
//
//	//printf("지하철 1호선에 %d 명이 타고있다.\n", subway_1);
//	//printf("지하철 2호선에 %d 명이 타고있다.\n", subway_2);
//	//printf("지하철 3호선에 %d 명이 타고있다.\n", subway_3);
//
//
//	//int subway_array[3];
//	//subway_array[0] = 30;
//	//subway_array[1] = 40;
//	//subway_array[2] = 50;
//
//	//for (int i = 0;i < 3;i++)
//	//{
//	//	printf("지하철 %d 호선에 %d명이 타고있습니다.\n", i + 1, subway_array[i]);
//	//}
//	/*
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	*/
//	//배열크기는 항상 상수로 변환
//	/*/int size = 10;
//	int arr[10];*/
//
//
//	/*arr[10] = {1,2};	//3번부터 0으로 초기화됨
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	*/
//
//	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%.2f\n", arr_f[i]);
//	}*/
//
//	/*char c = 'A';
//	printf("%c\n", c);*/
//
//	//문자열 끝에 '\0'값이 들어가야함
//	/*char str[6] = "coding"; 
//	char str[7] = "coding";
//	printf("%s", str);*/
//
//	char str[] = "coding";
//	/*printf("%s\n", str);
//	printf("%d\n", sizeof(str));*/
//
//	/*for (int i = 0;i < sizeof(str);i++)
//	{
//		printf("%c\n", str[i]);
//	}*/
//
//	/*char kor[] = "코딩임";
//	printf("%s\n", kor);
//	printf("%d\n", sizeof(kor));*/
//	//영어 1글자 : 1 byte
//	//한글 1글자 : 2 byte
//
//	/*char c_arry[7] = { 'c','o','d','i','n','g','\0'};
//	char c_arry[6] = { 'c','o','d','i','n','g' };
//	printf("%s\n", c_arry);*/
//
//	/*char c_array[10]= { 'c','o','d','i','n','g'};
//	printf("%s\n", c_array);*/
//
//	/*for (int i = 0;i < 10;i++)
//	{
//		printf("%c\n", c_array[i]);
//	}*/
//
//	/*for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", c_array[i]);//아스키코드
//	}*/
//	//문자열 입력받기 : 경찰서 조서 쓰기 예제
//	/*char name[256];
//	printf("이름을 입력하세요 : ");
//	scanf_s("%s", name, sizeof(name));
//	printf("%s\n", name);*/
//
//	printf("%c\n", 'a');
//	printf("%d\n", 'a');
//
//
//	return 0;
//}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("\n\n === 아빠는 대머리 게임 === \n\n");

    int answer;
    int cntShowBottle;
    int isCorrect = 0;

    // 머리카락이 자라는 데 필요한 발모제 번호를 랜덤으로 선택합니다.
    int treatment = rand() % 4 + 1;

    printf("정답 : %d\n", treatment);

    for (int i = 1; i <= 3; i++) {
        printf("> %d번째 시도 : ", i);

        cntShowBottle = rand() % 2 + 2;

        int bottle[4] = { 0, 0, 0, 0 };

        for (int j = 0; j < cntShowBottle; j++) {
            int randBottle;

            do {
                randBottle = rand() % 4 + 1;
            } while (bottle[randBottle - 1] == 1);

            bottle[randBottle - 1] = 1;

            if (randBottle == t reatment) {
                printf("  %d(발모제)", randBottle);
            }
            else {
                printf("  %d", randBottle);
            }
        }

        // 사용자로부터 물약 선택을 받습니다.
        printf("\n 선택하세요 : ");
        scanf("%d", &answer);

        // 사용자가 선택한 물약이 발모제와 일치하면, 정답으로 처리합니다.
        if (answer == treatment) {
            printf(" >> 정답입니다!\n\n");
            isCorrect = 1;
            break;
        }
        else {
            printf(" >> 실패! 다시 시도해보세요.\n\n");
        }
    }

    // 최종 결과 출력
    if (isCorrect) {
        printf("축하합니다! 머리카락이 자랐습니다!\n");
    }
    else {
        printf("아쉽게도 실패하셨습니다. 다음 기회에 도전해보세요.\n");
    }

    return 0;
}*/


















