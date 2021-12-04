#ifndef EXERCICE7_H_INCLUDED
#define EXERCICE7_H_INCLUDED
int exercice7_h()
{
    int last , sum = 2;
	printf("Enter the last value :\n");
	scanf("%d", &last);
	for(int val = 1; val <= last; val++){
		if(val % 2 == 0) sum += (val - 1) + 2;
		else sum += (val - 1) + 4;
	}
	printf("The sum until %d is : %d\n", last, sum);
	/***************************************************/
	printf("************** Second part **************\n");
	sum = 59;
	printf("Enter the last value :\n");
        scanf("%d", &last);
        for(int val = 1; val <= last; val++){
                if(val % 2 == 0) sum += (val - 1) * 9;
                else sum += (val - 1) * 8;
        }
        printf("The sum until %d is : %d\n", last, sum);

return;
}
#endif // EXERCICE7_H_INCLUDED
