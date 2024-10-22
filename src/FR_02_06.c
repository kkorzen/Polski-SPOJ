// Kod: FR_02_06
// Link: https://pl.spoj.com/problems/FR_02_06/

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////

typedef struct Person
{
	float m;
	float h;
	char name[21];
	char bmi_status; // 0 - ok; 1 - niedowaga; 2 - nadwaga
}Person_t;

char bmi(Person_t* p){
	float pbmi = p->m/(p->h*p->h/10000);
	if(pbmi < 18.5) return 1;
	if(pbmi > 25.0) return 2;
	return 0;
}

/////////////////////////////////////

int main() {

	static int t;
	Person_t *people;

	scanf("%d", &t);
	people = (Person_t*)calloc(t, sizeof(Person_t));
	int pidx = 0;

	for(int i=0;i<t;i++){
		scanf("%s %f %f", people[pidx].name, &people[pidx].m, &people[pidx].h);
		people[pidx].bmi_status = bmi(&people[pidx]);
		pidx++;
	}

	puts("\nniedowaga");
	for(int i=0;i<t;i++){
		if(people[i].bmi_status == 1) printf("%s\n", people[i].name);
	}

	puts("\nwartosc prawidlowa");
	for(int i=0;i<t;i++){
		if(people[i].bmi_status == 0) printf("%s\n", people[i].name);
	}
	
	puts("\nnadwaga");
	for(int i=0;i<t;i++){
		if(people[i].bmi_status == 2) printf("%s\n", people[i].name);
	}

	free(people);

	return 0;
}
