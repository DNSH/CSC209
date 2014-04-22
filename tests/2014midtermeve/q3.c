#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 256

struct player {
	char *name;
	int goals;
};

struct player *create_player(char *n, int goals) {
	//(A) Fill in argument to malloc()
	struct player *p = malloc(sizeof(struct player));

	//(B)
	p->name = malloc(strlen(n) + 1);
	strncpy(p->name, n, strlen(n) + 1);
	p->goals = goals;

	return p;

}

void score(struct player p) {
	p.goals += 1;
}

struct player **init_roster(int size) {

	//return a pointer to a block of memory large enough for size players
	struct player **team = malloc(size * sizeof(struct player *));

	int i;
	for(i=0; i < size; i++) {
		team[i] = NULL;
	}
	return team;
}

void cleanup(struct player **team) {
	//require one call to free() for every malloc
	//iterate over the team and call malloc for:
		//name
		//struct 

	//team is an array of pointers to player pointers
	//check if each index != NULL
		//if yes, end of list

	while (team[i] != NULL) {
		free(team[i]->name);
		free(team[i]);
		i++
	}

}

int main() { 
	struct player **team = init_roster(20);

	team[0] = create_player("Agosta-Marciano", 3);
	team[1] = create_player("Poulin", 3);
	struct player p = {"Johnston", 2};
	team[2] = &p;
	p.name = "Wickenheiser";
	p.goals = 2;
	team[3] = &p;

	score(*team[1]);

	int i = 0;
	while(team[i] != NULL) {
		printf("%s %d\n", team[i]->name, team[i]->goals);
		i++;
	}

	return 0;
}


