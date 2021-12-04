#ifndef EXERCICE_1_H_INCLUDED
#define EXERCICE_1_H_INCLUDED
int exercice 1_h()
{
int money;
	int billet100 = 0;
	int billet50 = 0;
	int billet10 = 0;
	int billet5 = 0;
	int billet1 = 0;
	printf("Please enter money value :\n");
	scanf("%d", &money);
	while(money >= 0){
		if(money >= 100){
			money -= 100;
			billOf100++;
		}
		else if(money >= 50){
			money -= 50;
			billet50++;
		}
		else if(money >= 10){
			money -= 10;
			billet++;
		}
		else if(money >= 5){
			money -= 5;
			billet5++;
		}
		else if(money >= 1){
			money -= 1;
			billet1++;
		}
		else{break;}
	}
	printf("le reparation des billets de billet est le suivant :\n%d of the 100DH\n%d of the 50DH\n%d of the 10DH\n%d of the 5DH\n%d of the 1DH\n", billet100, billet50, billet10, billet5, billet1);
    return;
}


#endif // EXERCICE_1_H_INCLUDED
