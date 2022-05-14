#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define DWRA 430
#define DWSI 490
#define NO 0
#define DO 523
#define RAE 587
#define MI 659
#define FA 698
#define FASHAP 741
#define SOL 784 
#define SOLSHAP 832
#define RA 880
#define SISHAP 944
#define SI 988
#define DODO 523*2
#define RAERAE 587*2
#define MIMI 659*2
#define FAFA 698*2
#define SOLSOL 784*2 
#define RARA 880*2
#define SISI 988*2
#define DODODO 523*3

#define GRAY 8
#define RED 12
#define YELLOW 14
#define LIGHTGREEN 2
#define GREEN 10
#define BLUE 9
#define VIOLET 13
#define SKYBLUE 11
// 콘솔 텍스트 색상 변경해주는 함수
//void setColor(unsigned short text) {
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
//}
void setColor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}
int main(){
	char input;
	while(1){
		input = getch();
		if(input == '1'){
			setColor(RED, 0); //text : RED
    		printf("제1음악: OVER THE RAINBOW\n");
			int score_map[23]={DO, DODO, SI, SOL, RA, SI, DODO, DO, RA, SOL, DWRA, FA, MI, DO, RAE, MI, FA, RAE, DWSI, DO, RAE, MI, DO};
			const char *lyric[23] ={"some", "where", "o -", "ver", "the", "rain -", "bow", "way", "up", "high"
			, "\nThere\'s", "a", "land", "that", "I", "heard", "of", "once", "in", "a", "lull -", "a -", "by"};
			int color[23] ={GRAY, GRAY, RED, YELLOW, GREEN, BLUE, VIOLET, SKYBLUE, SKYBLUE, SKYBLUE
			, LIGHTGREEN, GREEN, SKYBLUE, GRAY, GRAY, GRAY, GRAY, RED, YELLOW, GREEN, SKYBLUE, BLUE, VIOLET};
			int score_note[23]={4, 4, 2, 1, 1, 2, 2, 4, 4, 8, 4, 4, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 4};
			for(int i = 0; i<23; i++){
				setColor(color[i], 0);
				printf("%s ", lyric[i]);
				Beep(score_map[i], 300 * score_note[i]);
			}
			setColor(GRAY, 0);
			printf("\n\n-MUSIC END\n\n");
		}
		else if(input == '2'){
			setColor(YELLOW, 0); //text : YELLOW
    		printf("제2음악\n");
			int score_map_2[17]={MI,FA,SOL,MI,SOL,MI,SOL,NO,FA,SOL,RA,RA,SOL,FA,RA,NO};
			int score_note_2[17]={900,300,900,300,600,600,600,600,900,300,300,300,300,300,1200,600};
			for(int i = 0; i<16; i++){
				Beep(score_map_2[i],score_note_2[i]);
			}
		}
		else if(input == '3'){
			setColor(GREEN, 0); //text : GREEN
    		printf("제3음악\n");
			int score_map_3[17]={SOL,DO,RAE,MI,FA,SOL,RA,NO,RA,RAE,MI,FASHAP,SOL,RA,SI,NO};
			int score_note_3[17]={900,300,900,300,600,600,600,600,900,300,300,300,300,300,1200,600};
			for(int i = 0; i<16; i++){
				Beep(score_map_3[i],score_note_3[i]);
			}
		}
		else if(input == '4'){
			setColor(BLUE, 0); //text : BLUE
    		printf("제4음악\n");
			int score_map_4[17]={SI,MI,FASHAP,SOLSHAP,RA,SI,DODO, SI,SISHAP, RA,FA,SI,SOL, DODO};
			int score_note_4[17]={900,300,900,300,600,600,600,600,900,300,300,300,300,300,1200,600};
			for(int i = 0; i<16; i++){
				Beep(score_map_4[i],score_note_4[i]);
			}
		}
		else if(input == '5'){
			setColor(VIOLET, 0); //text : VIOLET
    		printf("제5음악\n");
			int score_map_5[11]={DO,RAE,MI,FA,SOL,RA,SI,DODO,SOL,DODO};
			int score_note_5[11]={300,300,300,300,300,300,300,600,600,1200};
			for(int i = 0; i<11; i++){
				Beep(score_map_5[i],score_note_5[i]);
			}
		}
	}		
}