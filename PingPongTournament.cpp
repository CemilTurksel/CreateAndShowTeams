#include <stdio.h>
#include <stdlib.h>
#define n 2
struct player{
	char surname[10];
	char name[10];
	int age;
	int level;
};
show_player(struct player x){
	printf("Name:\%s\n",x.name);
	printf("Surname:\%s\n",x.surname);
	printf("Age:\%d\n",x.age);
	printf("Level:\%d\n",x.level);
}
void create_player(struct player *B){
	printf("Enter the name:\n");
	scanf("%s",B->name);
	printf("Enter the surname:\n");
	scanf("%s",B->surname);
	printf("Enter the age:\n");
	scanf("%d",&B->age);
	printf("Enter the level:\n");
	scanf("%d",&B->level);
}
struct team{
	char name[10];
	struct player player1;
	struct player player2;
};
void create_team(struct team *A){
	printf("Enter the name:\n");
	scanf("%s",A->name);
	printf("Player 1:\n");
	create_player(&A->player1);
	printf("Player 2:\n");
	create_player(&A->player2);
}
void show_team(struct team *C){
	printf("Name: %s\n",C->name);
	printf("Player 1:\n");
	show_player(C->player1);
	printf("Player 2:\n");
	show_player(C->player2);
}

int main(){
	struct team teams[n];
	for(int i=0;i<n;i++){
		printf("Team %d \n",i+1);
		create_team(&teams[i]);
	}
	for(int i=0;i<n;i++){
		printf("-----------------|------------------");
		printf("Team %d:\n",i+1);
		show_team(&teams[i]);
	}
	return 0;
}
