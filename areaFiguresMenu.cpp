#include <iostream>
int menu=6;//nadajemy wartosc 6, aby przypadkiem nie bylo 5
float a,b,h;

int main() 
{
while(menu!=5)
{
printf("\nPole powierzchni figur geometrycznych:\n 1 - prostokat\n 2 - kolo\n 3 - trojkat\n 4 - trapez\n 5 - koniec programu\n \n");
scanf("%d",&menu);

switch (menu)	
{
	case 1:
	{	
	printf("Podaj bok a prostokata:\n");
	scanf("%d",&a);
	printf("Podaj bok b prostokata:\n");
	scanf("%d",&b);
	printf("Pole powierzchni prostokata to %f\n",a*b);
	}	break;
	
	case 2:
	{	
	printf("Podaj promien kola:\n");
	scanf("%f",&a);
	printf("Pole powierzchni kola:%f\n",3.14*a*a);
	} break;
	
	case 3:
	{	
	printf("Podaj wysokosc trojkata:\n");
	scanf("%f",&a);
	printf("Podaj podstawe trojkata:\n");
	scanf("%f",&b);
	printf("Pole powierzchni trojkata:%f\n",0.5*a*b);
	} break;
	
	case 4:
	{	
	printf("Podaj wysokosc trapeza:\n");
	scanf("%f",&a);
	printf("Podaj podstawe trapeza:\n");
	scanf("%f",&b);
	printf("Podaj wysokosc trapeza:\n");
	scanf("%f",&h);
	printf("Pole powierzchni trapeza:%f\n",0.5*h*(a+b));
	} break;
	
	
	return 0;
}
}
}
