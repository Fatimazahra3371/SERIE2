#ifndef EXERCICE3_H_INCLUDED
#define EXERCICE3_H_INCLUDED
int exercice3_h()
{int age;
	char sex, situation familial;
	printf("Enter l'age et le six H pour homme F pour femme et la situation familial C pour Celebataire et M pour marier :\n");
	scanf("%d%s%s", &age, &sex, &situation familial);
	if(sex == 'H')
		if((age < 20 && situation == 'C') || (age > 70 && situation == 'M'))
			printf("ne paiet pas");
	else if(sex == 'F')
		if((age < 22 && situation == 'C') || (age > 55 && situation == 'M'))
            printf("ne paiet pas");
	else
		printf("pait");
return;
}
#endif // EXERCICE3_H_INCLUDED
