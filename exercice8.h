#ifndef EXERCICE8_H_INCLUDED
#define EXERCICE8_H_INCLUDED
int exercice8_h()
{
int last , sum = 0;
        printf("Enter the last value :\n");
        scanf("%d", &last);
	if(last == 1) sum = 1;
	else
        	for(int val = 2; val <= last; val++){
                	sum += (5 * (val -1)) + (val - 2) + 1;
        	}
        printf("The sum until %d is : %d\n", last, sum);

		sum = 4;
        printf("Enter the last value :\n");
        scanf("%d", &last);
        if(last == 1) sum += 7;
        else
                for(int val = 2; val <= last; val++){
                        if(val % 2 == 0) sum += (7 * (val -1)) + (val - 2) - 9;
                	else sum += (2 * (val -1)) + (val - 2) + 8;
		}
        printf("The sum until %d is : %d\n", last, sum);
return;
}
#endif // EXERCICE8_H_INCLUDED
