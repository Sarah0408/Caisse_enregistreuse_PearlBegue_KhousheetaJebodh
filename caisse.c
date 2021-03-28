#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 int main() {
  int c, n, somme, arg;

   srand(time(0));

  for (c = 1; c <=1; c++) {
    n = rand() % 10000;
    printf("Veuillez entrer la somme a payer: Rs %d\n", n);
    }
   printf("Veuillez entrer votre argent: Rs ");
    scanf("%d", &somme);

    if(somme>n){
      arg = somme - n;
    printf("Votre somme a payer: Rs %d\n",n);
    printf( "vous avez paye: Rs %d\n", somme) ;
    printf("votre echange: Rs %d\n", arg);
  }
  else if(somme <n){
    arg = n - somme;
    printf("Votre somme a payer: Rs %d\n",n);
    printf( "Vous avez paye: Rs %d\n", somme);
    printf("Veuillez entrer la difference s'il vous plait: Rs %d\n", arg);
  
  }
  else{
    printf("Mercii");

  }
  
   int  r2000=0, r1000=0, r500=0, r200=0,  r100=0, r50=0, r20=0, r25=0, r10=0, r5=0 , r1=0, x=0; 

  
  
 while(arg >= 2000) 
  { 
    r2000 = arg / 2000 ; 
    arg = arg % 2000;
    
    printf("\nNombre de billets de 2000 utilise : %d", r2000) ;
    break ; 
   
  }
   while(arg >= 1000) 
  { 
    r1000 = arg / 1000 ; 
    arg = arg % 1000 ;
    
    printf("\nNombre de billets de 1000 utilise : %d", r1000) ;
    break ; 
  }
 while(arg >= 500) 
  { 
    r500 = arg / 500 ; 
    arg = arg % 500;
    printf("\nNombre de billets de 500 utilise : %d", r500) ;
    break ; 
  } 
  while(arg >= 200) 
  { 
    r200 = arg / 200 ; 
    arg = arg % 200;
   printf("\nNombre de billets de 200 utilise : %d", r200) ;
    break ; 
   
  }
  while(arg >= 100) 
  { 
    r100 = arg / 100 ; 
    arg = arg % 100;
    printf("\nNombre de billets de 100 utilise: %d", r100) ;
    break ; 
  } 
  while(arg >= 50) 
  { 
    r50 = arg / 50 ;
    arg = arg % 50; 
    printf("\nNombre de billets de 50 utilise : %d", r50) ; 
  break ; 
  }  
  while(arg >= 25) 
  { 
    r25 = arg / 25 ;
    arg = arg % 25; 
    printf("\nNombre de billets de 25 utilise : %d", r25) ; 
  break ; 
  }  
  while(arg >= 20) 
  { 
    r20 = arg / 20 ; 
    arg = arg % 20;
    printf("\nNombre de coins de 20 utilise : %d", r20) ; 
    break ; 
  }  
  while(arg >= 10) 
  { 
    r10 = arg / 10 ; 
    arg = arg % 10;
    printf("\nNombre de coins de 10 utilise : %d", r10) ; 
    break ; 
  } 
  while(arg >= 5) 
  { 
    r5 = arg / 5 ; 
    arg = arg % 5;
    printf("\nNombre de coins de 5 utilise : %d", r5) ; 
    break ; 
  } 

  while(arg >= 1) 
  { 
    r1 = arg / 1 ; 
    arg = arg % 1;
    printf("\nNombre de coins de 1 utilise : %d", r1) ; 
    break ; 
  }
  int n2000, n1000, n500, n200, n100, n50, n25, n20, n10, n5, n1,z;


    n2000=10;
   x = n2000 - r2000;
        switch (x) {
          case 0:
               printf("\n Y a plus de billets de 2000: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n2000);
           break;
           default:
           printf("\nNombre de billets de 2000 restants: %d\n", x );
  }

        
  
     n1000=10;
     x = n1000 - r1000;
        switch (x) {

           case 0:
               printf("\n Y a plus de billets de 1000: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n1000);
           break;
           default:
           printf("\nNombre de billets de 1000 restants: %d\n", x );
  }

    n500=10;
     x = n500 - r500;
        switch (x) {

           case 0:
               printf("\n Y a plus de billets de 500: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n500);
           break;
           default:
           printf("\nNombre de billets de 500 restants: %d\n", x );
  }
    n200=10;
     x = n200 - r200;
        switch (x) {

           case 0:
               printf("\n Y a plus de billets de 200: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n200);
           break;
           default:
           printf("\nNombre de billets de 200 restants: %d\n", x );
  }

    n100=10;
     x = n100 - r100;
        switch (x) {

           case 0:
               printf("\n Y a plus de billets de 100: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n100);
           break;
           default:
           printf("\nNombre de billets de 100 restants: %d\n", x );
  }

 n50=10;
     x = n1000 - r1000;
        switch (x) {

           case 0:
               printf("\n Y a plus de billets de 50: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n50);
           break;
           default:
           printf("\nNombre de billets de 50 restants: %d\n", x );
  }
         n25=10;
     x = n25 - r25;
        switch (x) {

           case 0:
               printf("\n Y a plus de billets de 25: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n25);
           break;
           default:
           printf("\nNombre de billets de 25 restants: %d\n", x );
  }

         n20=10;
     x = n20 - r20;
        switch (x) {

           case 0:
               printf("\n Y a plus de coins de 25: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n20);
           break;
           default:
           printf("\nNombre de coins de 20 restants: %d\n", x );
  }

         n10=10;
     x = n10 - r10;
        switch (x) {

           case 0:
               printf("\n Y a plus de coins de 10: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n10);
           break;
           default:
           printf("\nNombre de coins de 10 restants: %d\n", x );
  }
         n5=10;
     x = n5 - r5;
        switch (x) {

           case 0:
               printf("\n Y a plus de coins de 5: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n5);
           break;
           default:
           printf("\nNombre de coins de 5 restants: %d\n", x );
  }
         n1=10;
     x = n1 - r1;
        switch (x) {

           case 0:
               printf("\n Y a plus de coins de 0: \n ");
                 printf("Inserez 0 pour terminer le program ou 1 pour recharger la balance:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n1);
           break;
           default:
           printf("\nNombre de coins de 1 restants: %d\n", x );
  }


  }
