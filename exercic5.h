#ifndef EXERCIC5_H_INCLUDED
#define EXERCIC5_H_INCLUDED
int exercice5_h()
{
    int nums[25], Min;
	printf("Entrer les 25 valeurs int positives :\n");
	scanf("%d", &nums[0]);
	Min = nums[0];
	for(int i = 1; i < 25; i++){
		scanf("%d",&nums[i]);
		if(nums[i] < Min) Min = nums[i];
	}
	printf("Second part\n");
	int N, sum = 0;
	printf("Enter the number of values you want to enter :\n");
	scanf("%d", &N);
	printf("Enter the values :\n");
	int numbers[N];
	for(int i = 0; i < N; i++){
                scanf("%d",&numbers[i]);
                sum += numbers[i];
        }
	printf("The sum is : %d\n", sum);

	printf("Third part\n");
	int num, odd = 0;
	printf("Enter the values :\n");
	while(1){
		scanf("%d", &num);
		if(num < 0) break;
		else
			if(num % 2 != 0) odd++;
	}
	printf("There is %d odd number...\n", odd);

}

return;
}
#endif // EXERCIC5_H_INCLUDED
