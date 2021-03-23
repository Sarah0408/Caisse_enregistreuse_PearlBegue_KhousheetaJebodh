#include <stdio.h>


int main()
{
	double apayer,payer;
	printf ("Veuillez mettre le montant sur votre recu :");
	scanf("%lf",&apayer);
	printf ("Veuillez mettre le montant que vous payez :");
	scanf("%lf",&payer);
	while(payer < apayer)
	{
	   printf("Please miss out of money :");
   	   scanf("%lf",&apayer);
	}
	
	   printf("Merci le montant est exact sur le recu");
}	
