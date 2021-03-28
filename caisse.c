#include <stdio.h>

// returns number of units and subtracts unit_size * result
// from val
int units(int* val, int unit_size)
{
    int num = *val / unit_size;
    *val %= unit_size;
    return num;
}

int main()
{
    

    float amount,amt_money,tot_amt;
    
    
    
    printf("Enter the amount that you need to pay : ");
    scanf("%f",&amount);
    
    printf("Enter the amount of money you would give : ");
    scanf("%f",&amt_money);
    
    while(amount > amt_money)
    {
        
      printf("Insufficient Funds!");
      printf("Enter the amount of money you would give : ");
      scanf("%f",&amt_money);  
        
    }
    
    tot_amt = amt_money - amount;
    
    int x = (int)(tot_amt * 100.0 + 0.5);
    printf("Amount return : %d\n",x);

    printf("No. of P1000 bill: %d\n", units(&x, 1000 * 100) );
    printf("No. of P500 bill: %d\n", units(&x, 500 * 100) );
    printf("No. of P200 bill: %d\n", units(&x, 200 * 100) );
    printf("No. of P100 bill: %d\n", units(&x, 100 * 100) );
    printf("No. of P50 bill: %d\n", units(&x, 50 * 100) );
    printf("No. of P20 bill: %d\n", units(&x, 20 * 100) );
    printf("No. of P10 coin: %d\n", units(&x, 10 * 100) );
    printf("No. of P5 coin: %d\n", units(&x, 10 * 100) );
    printf("No. of P1 coin: %d\n", units(&x, 1 * 100) );
    printf("No. of 25 cents: %d\n", units(&x, 25) );
    printf("No. of 1 cent: %d\n", units(&x, 1) );

    return 0;
}
	
