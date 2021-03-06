#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> 
int menu_num;
int check=0;
int random = 0; // 정수형 변수 선언
char answer[100];	

void green(){	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}
void purple(){ 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
void yellow(){	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}
void blue(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
void white(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void lesson(){	
	if(random == 1){
	printf("Insanity is doing the same thing over and over again and expecting different results.\n");
	}
	else if(random == 2){
	printf("Let's go invent tomorrow rather than worrying about what happened yesterday.\n");
	}
	else if(random == 3){
	printf("When something is important enough, you do it even if the odds are not in your favor.\n");
	}
	else if(random == 4){
	printf("Don't compare yourself with anyone in this world...if you do so, you are insulting yourself.\n");
	}
	else
	printf("Even if I knew that tomorrow the world would go to pieces, I would still plant my apple tree.\n");
 } 

int main(){  
    
	do {
		system( "cls" );
		green();
 		printf("\n\t\t\tT Y P I N G  T E S T E R\n\n");
 		purple();
 		printf("\r>> Print the arrow keys: up or down arrow keys to navigate the options.\
 			\n\r>> Press <Enter> key to accept an option.\
 			\n\r>> [OR] Press the number keys to select your choice.\n\n\n");		
 		yellow();
		printf("\t\t\t\t***MAIN MENU***\n\n");
		printf("\t\t================================================\n\n");
		printf("\t\t\t[1] Select User\n\n");
		printf("\t\t\t[2] Statistics\n\n");
		printf("\t\t\t[3] View User Records\n\n");
		printf("\t\t\t[4] About\n\n");
		printf("\t\t\t[5] Quit\n\n");
		printf("\t\t================================================\n\n");
		white();	
		printf("Press the number keys from 1 to 5 : ");
		scanf("%d", &menu_num);
		
		system( "cls" ); //화면 지우기 
		switch (menu_num){
			//-------------[1]-------------
			case 1:
				random = rand()%5 + 1; // 난수 생성
				printf("%d\n", random); // 출력
				lesson(); // 문장출력 
				scanf("%s\n", &answer); 
				printf("\t\t\tWell done!!!\n");
				printf("Replay?\n");
				printf("1.Yes 2.Back to Mainmenu 3.Quit\n");
				printf("Enter the number\n");
				scanf("%s", &answer);
				break;	 
			//-------------[2]-------------	
			case 2:
				printf("Hello World2!\n");
				scanf("%d", &check);
				break;	 
			//-------------[3]-------------
			case 3:
				printf("Hello World3!\n");
				scanf("%d", &check);
				break;	 
			//-------------[4]-------------
			case 4:
				blue();
				printf("\n\t\t\t[About]\n\n");
				yellow();
				printf("\t***Typing tutor***\n\n");
				printf("a.k.a 119 project 2nd week - Class 1 Team 2\n");
				printf("Copyright(c)2020 by Heo_JeongHwa, Choi_GunWoo All rights reserved\n");
				printf("Date: 2020.04.13 to 2020.04.16\n\n");
				printf("\t***Lesson***\n\n");
				printf("1. Insanity is doing the same thing over and over again and expecting different results. by Albert Einstein\n");
				printf("2. Let's go invent tomorrow rather than worrying about what happened yesterday. by Steve Jobs\n");
				printf("3. When something is important enough, you do it even if the odds are not in your favor. by Elon Musk\n");
				printf("4. Don't compare yourself with anyone in this world...if you do so, you are insulting yourself. by Bill Gates\n");
				printf("5. Even if I knew that tomorrow the world would go to pieces, I would still plant my apple tree. by Benedict de Spinoza\n\n");
				printf("\tFor More Information: Contact 010-XXXX-XXXX or Visit github공개저장소(나중에 입력하기)\n\n"); //주소 나중에 수정 
				white();
				printf("Press any number to go back to the main menu");
				scanf("%d", &check);
				break;	 
			//-------------[5]-------------
			case 5:
				exit(0);
				}
	} while (menu_num != -1);
	
	return 0;
}
