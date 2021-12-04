#ifndef EXERCICE6_H_INCLUDED
#define EXERCICE6_H_INCLUDED
int exercice6_h()
{
int num, sum = 0;
	bool perfect = false;
	printf("Enter the number :\n");
	scanf("%d", &num);
	for(int i = num-1; i > 0; i--){
		if(num % i == 0)
			sum += i;
	}

	if(num == sum) perfect = true;

	if(perfect) printf("Perfect !\n");
	else printf("Not perfect !\n");
return;
}
#endif // EXERCICE6_H_INCLUDED
