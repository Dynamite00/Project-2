#include <stdio.h>

struct Gameinfo {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // 연관 업체 게임
	
};

typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // 연관 업체 게임

} GAME_INFO;

int main(void) {

	// 게임 출시
	// 이름 : 포켓몬스터
	// 발매년도 : 2023년
	// 가격 : 1000원
	// 제작사 : HK회사

	char* name = "포켓몬스터";
	int year = 2023;
	int price = 1000;
	char* company = "HK회사";

		// 또 다른 게임 출시
		// 이름 : 포켓몬스타
		// 발매년도 : 2023년
		// 가격 : 1200원
		// 제작사 : KK회사

	char* name2 = "포켓몬스타";
	int year2 = 2023;
	int price2 = 1200;
	char* company2 = "KK회사";

	// 구조체 사용
	struct Gameinfo gameinfo1;
	// struct Gameinfo gameinfo2;

	gameinfo1.name = "포켓몬스터";
	gameinfo1.year = 2023;
	gameinfo1.price = 1000;
	gameinfo1.company = "HK회사";

	//구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", gameinfo1.name);
	printf("  발매년도 : %d\n", gameinfo1.year);
	printf("  가격     : %d\n", gameinfo1.price);
	printf("  제작사   : %s\n", gameinfo1.company);

	// 구조체를 배열처럼 초기화

	struct Gameinfo gameinfo2 = { "포켓몬스타", 2023, 1200, "KK회사" };


	printf("-- 또 다른 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", gameinfo2.name);
	printf("  발매년도 : %d\n", gameinfo2.year);
	printf("  가격     : %d\n", gameinfo2.price);
	printf("  제작사   : %s\n", gameinfo2.company);

	// 구조체 배열
	struct Gameinfo gameArray[2] = {
		{ "포켓몬스터", 2023, 1000, "HK회사" },
	    { "포켓몬스타", 2023, 1200, "KK회사" }

	};

	// 구조체 포인터
	struct Gameinfo * gamePtr;  // 미션맨
	gamePtr = &gameinfo1;
	
    /*printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", (*gamePtr).name); //*ptr
	printf("  발매년도 : %d\n", (*gamePtr).year);
	printf("  가격     : %d\n", (*gamePtr).price);
	printf("  제작사   : %s\n", (*gamePtr).company);*/

	printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", gamePtr->name); 
	printf("  발매년도 : %d\n", gamePtr->year);
	printf("  가격     : %d\n", gamePtr->price);
	printf("  제작사   : %s\n", gamePtr->company);

	// 연관 업체 게임 소개
	gameinfo1.friendGame = &gameinfo2;
   
	printf("\n\n-- 연관 업체의 게임 출시 정보 --\n");

	printf("  게임명   : %s\n", gameinfo1.friendGame->name);
	printf("  발매년도 : %d\n", gameinfo1.friendGame->year);
	printf("  가격     : %d\n", gameinfo1.friendGame->price);
	printf("  제작사   : %s\n", gameinfo1.friendGame->company);


	// typedef
	// 자료형에 별명 지정

	int i = 1;
	typedef int 정수;
	typedef float 실수;

	정수 정수변수 = 3; // int i =3; 과 같은 동작
	실수 실수변수 = 3.23f; // float f = 3.23f; 과 같은 동작

	printf("\n\n정수변수 : %d, 실수변수 : %.2f\n\n", 정수변수, 실수변수);

	typedef struct Gameinfo 게임정보;

	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "한글 게임";
	game2.year = 2013;

	/*struct Gameinfomation game3;
	game3.name = "한글 게임";*/


	return 0;
}