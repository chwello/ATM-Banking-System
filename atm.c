#include <stdio.h>

main(){


    int pin=0, pin2=1234;
    int opt=4, bal=1000;
    int dep, wid;
    char ch;


   system("CLS");
  printf("\n\t\t\t\t_____________________________________");
  printf("\n\t\t\t\t|                                    |");
  printf("\n\t\t\t\t|    ____________________________    |");
  printf("\n\t\t\t\t|    |                          |    |");
  printf("\n\t\t\t\t|    |                          |    |");
  printf("\n\t\t\t\t|    |                          |    |");
  printf("\n\t\t\t\t|    |__________________________|    |");
  printf("\n\t\t\t\t|                                    |"); 
  printf("\n\t\t\t\t|                A T M               |");
  printf("\n\t\t\t\t|                    ______  ______  |");
  printf("\n\t\t\t\t|   _______________  |____|  |____|  |");
  printf("\n\t\t\t\t|   |             |  ______  ______  |");
  printf("\n\t\t\t\t|   |             |  |____|  |____|  |");
  printf("\n\t\t\t\t|   |_____________|  ______  ______  |");
  printf("\n\t\t\t\t|                    |____|  |____|  |"); 
  printf("\n\t\t\t\t|                                    |"); 
  printf("\n\t\t\t\t|                                    |"); 
  printf("\n\t\t\t\t|____________________________________|"); 
  printf("\n\n\t\t\t\tPress any key to continue..");
  getch();



    do{
    system("CLS");   
    printf("\n\t\t\t\t_____________________________________");
    printf("\n\t\t\t\t       Enter your pin number:");
    scanf("%d", &pin);
    printf("\n\t\t\t\t_____________________________________");
 
               if(pin!=pin2){

                printf("\n\t\t\t\tInvalid Pin Number");
                getch();
               }
    
            
            


    }while(pin!=pin2);
    printf("\n\n\t\t\t\tPress any key to continue..");
    getch();
    
    do{
    system("CLS");
    printf("\n\t\t\t\t       Welcome to ATM BANK SYSTEM\n");
    printf("\t\t\t\t    Please choose one of the options below\n");

    printf("\n\t\t\t\t____________________________________________________");
    printf("\n\t\t\t\t|                                                   |");
    printf("\n\t\t\t\t|              [ 1 ] Check Balance                  |");
    printf("\n\t\t\t\t|              [ 2 ] Deposit                        |");
    printf("\n\t\t\t\t|              [ 3 ] Withdraw                       |");
    printf("\n\t\t\t\t|              [ 4 ] Exit                           |");
    printf("\n\t\t\t\t|___________________________________________________|");
    printf("\n\n\t\t\t\tYour selection: ");
    scanf("%d", &opt);
    printf("\n\n\t\t\t\tPress any key to continue..");
    getch();

     system("CLS");
    if(opt==1){
            
        
        printf("\n\t\t\t\tYour current balance is %d", bal);
    }
    else if(opt==2) { 
    printf("\n\t\t\t\tEnter Deposit amount:");
            scanf("%d", &dep);
         
		  bal += dep;
		  printf("\n\t\t\t\tYour total balance is %d", bal);
        
    }
    else if (opt==3) {
        printf("\n\t\t\t\tEnter amount to withdraw:");
                        scanf("%d", &wid);
        while(wid>bal){
                        printf("\n\t\t\t\tInsufficient Balance. Declined");
                        printf("\n\t\t\t\tEnter the amount again:");
                        scanf("%d", &wid);
        }
                    if(wid<bal){
                    bal-=wid;
                        printf("\n\t\t\t\tYou have successfully withdrawn P%d", wid);
                        printf("\n\t\t\t\tYour remaining balance is P%d", bal);
                   
                    }
        
    }

    

    else{
        
       for(opt=4; opt<=4; opt++){

        if(opt<=4){
            printf("\n\t\t\t\tPlease enter options (1 to 4 only)");
            break;
        }
     }
    
    }

    
    printf("\n\t\t\t\tDo you want to have another transaction? (Y/N):");
    scanf(" %c", &ch);
     }while(ch == 'Y' || ch == 'y');

         
}