#ifndef EXERCICE4_H_INCLUDED
#define EXERCICE4_H_INCLUDED
int exercice4_h()
{
    int num;
	printf("entrer un number entre 1 et 15 :\n");
	scanf("%d", &num);
	printf("l'equivalent en hexadècimal : \n");
	switch(num )
	{
		case 0:
			printf("%d\n", num);
			break;
		case 1:
			printf("%d\n", num);
			break;
		case 2:
			printf("%d\n", num);
			break;
		case 3:
			printf("%d\n", num);
			break;
		case 4:
			printf("%d\n", num);
			break;
		case 5:
			printf("%d\n", num);
			break;
		case 6:
			printf("%d\n", num);
			break;
		case 7:
			printf("%d\n", num);
			break;
		case 8:
			printf("%d\n", num);
			break;
		case 9:
			printf("%d\n", num);
			break;
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;

	case 0:
			printf("E");
			break;
		case 0:
			printf("F");
			break;
		default:
            printf("ereur");
			break;
		}

	else
		printf("error\n");

return;
}
#endif // EXERCICE4_H_INCLUDED
