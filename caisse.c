#include <stdio.h>


int main()
{
	double apayer,payer;
	printf ("Veuillez mettre le montant sur votre recu :");
	scanf("%lf",&apayer);
	printf ("Veuillez mettre le montant que vous payez :");
	scanf("%lf",&payer);
	if(payer < apayer)
	{
	   printf("Please miss out of money :");
   	   scanf("%lf",&apayer);
	}
	else
	{
	   printf("Merci le montant est exact sur le recu");
	}
}	
