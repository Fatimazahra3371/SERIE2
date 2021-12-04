#ifndef EXERCICE9_H_INCLUDED
#define EXERCICE9_H_INCLUDED
int exercice9_h()
{
int a, b, n = 0;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		a = pow(i, (2*i));
		for(int j = 1; j < a; j++){
			a *= j;
		}
		b+= a;
	}
	printf("la valeur de n %: est %d\n", n, b);
return 0;
}


#endif // EXERCICE9_H_INCLUDED
