#include <stdio.h>
#include <time.h>

// 5마리의 포켓몬
// 아무 키나 눌러서 랜덤으로 포켓몬 뽑기
// 5마리의 포켓몬을 전부 모아서 모험을 떠나는 게임
// 중복 발생 가능함

// 포켓몬
// 이름, 레벨, 속성, 성격, 키우기 난이도

typedef struct {
	char* name;
	int level;
	char* attribute;
	char* character;
	int nan;

} POKETMON;

// 현재까지 보유한 포켓몬
int collection[5] = { 0, 0, 0, 0, 0 };

// 전체 포켓몬 리스트
POKETMON pokets[5];

void initPokets(); // 포켓몬 정보 초기화
void printPoket(int selected);


int main(void) {
	srand(time(NULL));  // #include <time.h> 필요함

	initPokets();
	while (1) {

		printf("두근 두근~! 어떤 포켓몬이 나올까요오옹~?\n 아무 키나 눌러서 확인하세요!");
		getchar();   // 어떤 키가 들어올 때까지 대기함

		int selected = rand() % 5;  // 0~4 사이의 랜덤한 숫자 반환
		printPoket(selected); // 랜덤하게 뽑은 포켓몬의 정보 출력 
		collection[selected] = 1; // 포켓몬 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	
	}

	return 0;
}

void initPokets() {    //  5마리 포켓몬 내용
	pokets[0].name = "피카츄";
	pokets[0].level = 1;
	pokets[0].attribute = "전기";
	pokets[0].character = "용감함";
	pokets[0].nan = 1;

	pokets[1].name = "파이리";
	pokets[1].level = 2;
	pokets[1].attribute = "불꽃";
	pokets[1].character = "온순함";
	pokets[1].nan = 2;

	pokets[2].name = "꼬부기";
	pokets[2].level = 3;
	pokets[2].attribute = "물";
	pokets[2].character = "활발함";
	pokets[2].nan = 3;

	pokets[3].name = "이상해씨";
	pokets[3].level = 4;
	pokets[3].attribute = "풀";
	pokets[3].character = "무뚝뚝함";
	pokets[3].nan = 4;

	pokets[4].name = "구구";
	pokets[4].level = 5;
	pokets[4].attribute = "바람";
	pokets[4].character = "까칠함";
	pokets[4].nan = 5;


}

void printPoket(int selected) // 랜덤하게 뽑은 포켓몬의 정보
{

	printf("\n\n=== 당신은 이 포켓몬의 주인이 되었어요! ===\n\n");
	printf(" 이름       : %s\n", pokets[selected].name);
	printf(" 레벨       : %d\n", pokets[selected].level);
	printf(" 속성       : %s\n", pokets[selected].attribute);
	printf(" 성격       : %s\n", pokets[selected].character);
	printf(" 난이도     : ");

	for (int i = 0; i < pokets[selected].nan; i++)
	{

		printf("%s", "★");

	}
	printf("\n\n");



}

int checkCollection()
{
	// 현재 보유한 포켓목 목록도 출력
	// 포켓몬을 전부 수집했는지 여부 반환
	int collectAll = 1;

	printf("\n\n=============== 보유한 포켓몬 목록 =============== \n\n");
	
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)   //  포켓몬 수집 실패
		{
			printf("%15s", "(빈 포켓볼)");
			collectAll = 0; // 전부 수집하지 못한 상태
		}
		else //  포켓몬 수집 완료
		{
			printf("%10s", pokets[i].name);
		}
	}
		printf("\n\n==================================================\n\n");
	
	if (collectAll)  // 모든 포켓몬을 수집한 경우
	{
		printf("\n\n 축하합니다! 모든 포켓몬을 다 얻었어요. 이제 모험 떠나세요.\n\n");
	}


	return collectAll;
}
