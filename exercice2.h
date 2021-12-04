#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED
int exercice 1_h()
{
float PA;
	float FR, FV,CA, HT, TTC, TVA;
	char T;
	printf("donner le type de produit\n");
	scanf("%f%s", &PA);
	if(PA> 9000)
		FR = (PA * 4) / 100;
	else if(PA > 5000 && PA<= 9000)
		FR = (PA* 6)/ 100;
	else if(PA > 2000 && PA <= 5000)
		FR = (PA * 8) / 100;
	else
		FR = PA/ 100;

	CA = PA + FR;
	FV = (CA* 10) / 100;
	HT= CA + FV;

	if(T == 'x')
		TVA= (T* 30) / 100;
	else if(T == 'y')
		TVA = (T * 38) / 100;
	else if(T == 'z')
		TVA = (T * 43) / 100;
	else if(T == 't')
        TVA = (T * 47) / 100;
	else if(T == 'u')
        TVA = (T * 49) / 100;

	 HT= HT+HT*TVA;
	printf("\n le prix d achat est %f",PA );
	printf("\n le fraix de vente est %f",FV);
	printf("\n le TVA est%f",TVA );
	printf("\n le prix de vente est%f",HT );
	printf("\n les fraix est%f",FR );
	printf("\n le prix total%f",TTC );
}
return;
#endif // EXERCICE2_H_INCLUDED
