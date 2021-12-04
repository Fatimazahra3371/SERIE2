#ifndef EXERCICE10_H_INCLUDED
#define EXERCICE10_H_INCLUDED
int exercice10_h()
{
int i, n;
	double res, U = 0, V = 0, W = 0, X = 0, Y = 0;
	double T = 0, D = 0, E = 0, F = 0;
	float alpha;
        printf("Enter the n'th value to be calculated : \n");
        scanf("%d", &n);
	for(i = 1; i <= n; i++){
        	U += 1 / (pow(n, 2) + i);
	}

	printf("The U serie = %.2f\n", U);
	for(i = 1; i <= n; i++){
                V += 1 / sqrt(n + i);
        }

	printf("The V serie = %.2f\n", V);
	for(i = 1; i <= n; i++){
                W += i / sqrt(n + i);
        }

	printf("The W serie = %.2f\n", W);
	for(i = 1; i <= n; i++){
                X += i / n + i;
        }

	printf("The X serie = %.2f\n", X);
	for(i = 1; i <= n; i++){
                Y += fact(i);
        }
	Y /= fact(n);

	printf("The Y serie = %.2f\n", Y);
	for(i = 1; i <= 2*n; i++){
                T += i / (pow(i, 2) + pow(n, 2));
        }

	printf("The T serie = %.2f\n", T);
	V = 0;
	for(i = 1; i <= n; i++){
                V += n + pow(i, 2) / (pow(i, 3) + pow(n, 3));
        }

	printf("The V serie = %.2f\n", V);
	for(i = 1; i <= n; i++){
                D += exp(1 / i + n);
        }
	D -= n;
	printf("The D serie = %.2f\n", D);

	D = 0;
	for(i = n; i <= 2*n; i++){
                D += sin(M_PI / i) * exp(1 / i + n);
        }
        D -= n;
	printf("The D serie = %.2f\n", D);

	for(i = n; i <= (2*n - 1); i++){
                E += 1 / 2*i + 1;
        }
        E -= n;
	printf("The E serie = %.2f\n", E);

	printf("Enter the value of alpha :\n");
	scanf("%f", &alpha);
	for(i = n; i <= n; i++){
                F += pow(i, (1/n)) * (pow(n, alpha - (1/n)) + pow(i, alpha - (1/n)));
        }
	F *= 1 / pow(n, alpha + 1);
	printf("The F serie = %.2f\n", F);
return;
}


#endif // EXERCICE10_H_INCLUDED
