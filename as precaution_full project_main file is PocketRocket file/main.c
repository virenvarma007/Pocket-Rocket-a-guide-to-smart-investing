    #include <stdio.h>
    #include<stdlib.h>

    /*CREATING STRUCTURE LOANS TO ADD LOANS FOR CALCULATING THE SAVINGS*/
    struct loans{
         float amount;
         float interest;
         float time;
         float emi;
    };

    /*CREATING A STRUCTURE TO TAKE NAME AND AGE AND STORE IT IN THE FILE*/
    struct arr {
        char name[50];
        int age;
    };

    /*CREATING STRUCTURE item_info TO TABULATE THE DATA OF COMPANIES LIKE THEIR NAME,SECTOR,GROWTH RATE PRICE, MONTHLY RETURNS AND PRICE
    * Ctype= Company Sector
    * Cname= Company name
    * Cagr= Company average growthrate per month
    * Capps= Company average profit per month
    * Cprice= Price of each stock of the company
    */
    struct item_info
    {
        char Ctype[100];
        char Cname[100];
        float Cagr;
        float Capps;
        float Cprice;
    }Company[30] =
    {
        {"Tech             ","Apple         ",1.94,8,320},
        {"Tech             ","Microsoft     ",1.24,6,185},
        {"Tech             ","Samsung       ",1.64,7,127},
        {"Tech             ","Lenovo        ",-1.94,1.3,30},
        {"Tech             ","Intel         ",0.3,2.1,58},
        {"Foods & Beverages","Coca-Cola     ",1.94,8,46},
        {"Foods & Beverages","Lays          ",1.24,6,432},
        {"Foods & Beverages","Pepsico       ",-1.64,14,435},
        {"Foods & Beverages","Parle         ",-1.94,1.3,41},
        {"Foods & Beverages","Nestle        ",0.3,2.1,105},
        {"Delivery         ","Amazon        ",1.94,68,2400},
        {"Delivery         ","Alibaba       ",-1.24,6,216},
        {"Delivery         ","Zomato        ",-1.64,14,435},
        {"Delivery         ","Swiggy        ",-1.94,5,141},
        {"Delivery         ","Flipkart      ",-0.3,6,105},
        {"Social Media     ","Facebook      ",1.94,8,320},
        {"Social Media     ","Instagram     ",1.24,6,185},
        {"Social Media     ","Snapchat      ",1.64,7,127},
        {"Social Media     ","Whatsapp      ",-1.94,1.3,30},
        {"Social Media     ","Share it      ",0.3,2.1,58},
        {"Finance          ","JPMorgan Chase",1.94,8,46},
        {"Finance          ","HSBC          ",1.24,6,432},
        {"Finance          ","CitiBank      ",-1.64,14,435},
        {"Finance          ","ICICI         ",-1.94,1.3,41},
        {"Finance          ","MasterCard    ",0.3,2.1,105},
        {"Petroleum        ","ExxonMobil    ",1.94,68,2400},
        {"Petroleum        ","HP            ",-1.24,6,216},
        {"Petroleum        ","Chevron       ",-1.64,14,435},
        {"Petroleum        ","CNPC          ",-1.94,5,141},
        {"Petroleum        ","Total         ",-0.3,6,105}
    };
            /*FUCTION TO SORT THE STRUCTURE ARRAY BY Cagr (average growth rate of stock)*/
    void agrSort()
        {
            int n = 30;
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (Company[j].Cagr > Company[j + 1].Cagr)
                    {
                        // swap temp and arr[i]
                        struct item_info temp = Company[j];
                        Company[j] = Company[j + 1];
                        Company[j + 1] = temp;
                    }
        }
     /*FUCTION TO SORT THE STRUCTURE ARRAY BY Capps (average returns per month of stock)*/
    void appsSort()
    {
             int n1 = 30;
                    for (int i = 0; i < n1 - 1; i++)
                        for (int j = 0; j < n1 - i - 1; j++)
                            if (((100)/Company[j].Cprice)*Company[j].Capps > ((100)/Company[j+1].Cprice)*Company[j+1].Capps)
                            {
                                // swap temp and arr[i]
                                struct item_info temp = Company[j];
                                Company[j] = Company[j + 1];
                                Company[j + 1] = temp;
                            }
    }
    /*FUCTION TO SORT THE STRUCTURE ARRAY BY Cprice (price of stock)*/
    void priceSort()
    {
        int n = 30;
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (Company[j].Cprice > Company[j + 1].Cprice)
                    {
                        // swap temp and arr[i]
                        struct item_info temp = Company[j];
                        Company[j] = Company[j + 1];
                        Company[j + 1] = temp;
                    }
    }



    int main()
    {

        /*DECLARING ALL THE VARIABLES USED*/
        int repeat=1;
        int sortl;
        struct item_info Company1[30];
        for(int i=0; i<30; i++)
            Company1[i]=Company[i];
        int nom=0;
        char name[100];
        int age;
        int options=0;
        float savingsamount;
        int priorities;
        float profit;
        int state;
        float tax;
        int ans1;
        float expenditure;
        float savings;
        int n;
        float emiamt=0;
        int sector;
        int scinput;
        int scompany;
        float Camount;
        struct arr a[5],b[5];
        FILE *fptr;
        fptr=fopen("file.txt","wb");


            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t\t\t\t\t\t\tWelcome to Pocket Rocket");
            printf("\n\t\t\t\t\t\t\t\t\t--------------------------------------------------\n\n\n");
            printf("\t\t\t\t\t\t\tFor anyone interested in earning a little bit of extra cash or investing their saving in the\n");
            printf("\t\t\t\t\t\t\tshare market one knows there’s a buck load of information on the internet to know how these\n");
            printf("\t\t\t\t\t\t\ttransactions take place and a ton of brokers but researching information about each and every\n");
            printf("\t\t\t\t\t\t\tcompany’s stock individually to see which is the best for one can be extremely tiring and\n");
            printf("\t\t\t\t\t\t\tlaborious and even so many people still might end up invest in the wrong company or the one\n");
            printf("\t\t\t\t\t\t\tthat does not suit their best interests. So here at PocketRocket we have created an app that\n");
            printf("\t\t\t\t\t\t\thas documented the Average Profit per month, Price and Growth rate of each share of the\n");
            printf("\t\t\t\t\t\t\tTop Companies and segregated them Sector wise to help you select the best investment option.\n");
            printf("\t\t\t\t\t\t\tWhether you need a stock for long term for steady return or for the time it’s price increases so\n");
            printf("\t\t\t\t\t\t\tas to sell it soon and make a profit or even research a company to know how much return it\n");
            printf("\t\t\t\t\t\t\tmight give you. Doing this will give the added advantage to rule out sectors or companies that\n");
            printf("\t\t\t\t\t\t\tare risky to invest or the ones you don’t find comfortable investing. This App also calculates\n");
            printf("\t\t\t\t\t\t\tyour per month savings to give you an idea of how much you can earn by investing for long\n");
            printf("\t\t\t\t\t\t\tterm or short term given the time period you find comfortable. All info is fact checked and\n");
            printf("\t\t\t\t\t\t\treliable.\n\n\n");

            fflush(stdin);
            /*INPUT NAME*/
            printf("\n\t\t\t\t\t\t\t\t\t\t\tPLease Input Your Name:");
            gets(a[0].name);
            /*INPUT AGE*/
            printf("\t\t\t\t\t\t\t\t\t\t\tPlease Input age:");
            scanf("%d",&a[0].age);

            /*WHILE LOOP IS USED IF A USER WISHES TO GO THROUGH THE PROGRAM AGAIN AFTER REACHING THE END*/
            while(repeat==1){

            /*WE USE FLIES TO STORE NAME AND AGE*/
            fwrite(a,sizeof(a),1,fptr);
            fclose(fptr);
            fptr=fopen("file.txt","rb");
            fread(b,sizeof(b),1,fptr);

            /*PRINT FROM FILES
            *WELCOME NAME
            */
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWelcome %s\n",b[0].name);
            printf("\t\t\t\t\t\t\t\t\t--------------------------------------------------\n\n\n");

            /*CHECK IF AGE IS ABOVE 17*/
            if(a[0].age<=17){
                    /*YOU ARE INELIGIBLE TO INVEST*/
                printf("\t\t\t\t\t\t\t\t\t\t\tYou are ineligible to invest");
                break;
            }

            else{


                /*GIVE OPTIONS TO SEE WHAT THE VIEWER WISHES TO DO
                *0.To input amount saved n see  best options for your investment.
                *1:Calculate savings per month to see best options for investment using that number.
                *2: Press to research a company
                *3: Press to look at companies sorted at your convenient parameter
                */


                printf("\t\t\t\t\t\t\t\t\t\t\tPlease Enter:\n\t\t\t\t\t\t\t\t\t\t\t0: To input amount saved n see  best options for your investment.\n\t\t\t\t\t\t\t\t\t\t\t1:Calculate savings per month to see best options for investment using that number.\n\t\t\t\t\t\t\t\t\t\t\t2: Press to research a company\n\t\t\t\t\t\t\t\t\t\t\t3: Press to look at companies sorted at your convenient parameter\n\t\t\t\t\t\t\t\t\t\t\tPress:");
                scanf("%d",&options);


                switch(options){


            case 0:
                savedupmoney:
                savings=0;

                /*INPUT SAVINGS*/
                printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter savings:");
                scanf("%f",&savings);
                if(savings<=0){
                printf("\t\t\t\t\t\t-----------------------HOPE YOUR FINANCIAL CONDITIONS GET BETTER--------------------\n\n");
                break;
                }

                /*ASK FOR HOW LONG A PERSON WISHES TO KEEP A SHARE*/
                printf("\n\t\t\t\tFor how long do you wish to keep the stocks? (advised max limit 12 months but you can put more at your own risk as our predictions are only for the next 12 months):");
                scanf("%d",&nom);

                /*Press:
                *0: To see max profits by selling stocks
                *1: Returns on the stock
                */
                printf("\n\n\t\t\t\t\t\t\t\t\t\t\tSelect:\n\t\t\t\t\t\t\t\t\t\t\t0: To see max profits by selling stocks \n\t\t\t\t\t\t\t\t\t\t\t1: Returns on the stock\n\t\t\t\t\t\t\t\t\t\t\t Press:");
                scanf("%d",&priorities);
                printf("\n\n");


                switch(priorities){

                 /*RESULTS BASED ON PRIORITY ON AVERAGE GROWTH RATE = Cagr*/
                case 0:
                    agrSort();

                    profit= (savings/3)*Company[29].Cagr+(savings/3)*Company[28].Cagr+(savings/3)*Company[27].Cagr;

                    printf("\t\t\t\tWe only Allow a total of three companies to invest in at a time as that is the number permitted by International Broker Committee.\n\t\t\t\t Your Total profit for the investment %f in each company is %f ", (savings/3),profit);
                    printf("\n\n");

                    /*TABULATING THE DATA*/
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Companies \t Company Name \t Sector        \t Average GrowthRate\t Average Profit-per-Month\t Price  ");
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Company 1:\t %s\t %s\t %f\t %f\t               %f",Company[29].Cname,Company[29].Ctype,Company[29].Cagr,Company[29].Capps,Company[29].Cprice);
                    printf("\n\t\t\t\t Company 2:\t %s\t %s\t %f\t %f\t               %f",Company[28].Cname,Company[28].Ctype,Company[28].Cagr,Company[28].Capps,Company[28].Cprice);
                    printf("\n\t\t\t\t Company 3:\t %s\t %s\t %f\t %f\t               %f",Company[27].Cname,Company[27].Ctype,Company[27].Cagr,Company[27].Capps,Company[27].Cprice);
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    break;

                /*RESULTS BASED ON PRIORITY ON RATIO OF PROFIT PER PRICE OF ONE SHARE*/
                case 1:
                    appsSort();

                    profit= ((savings/3)/Company[29].Cprice)*Company[29].Capps+((savings/3)/Company[28].Cprice)*Company[28].Capps+((savings/3)/Company[27].Cprice)*Company[27].Capps;
                    printf("\t\t\t\tWe only Allow a total of three companies to invest in at a time as that is the number permitted by International Broker Committee.\n\t\t\t\t Your Total profit for the investment %f in each company is %f per month", (savings/3),profit);
                    printf("\n\n");

                    /*TABULATING THE DATA*/
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Companies \t Company Name \t Sector        \t Average GrowthRate\t Average Profit-per-Month\t Price  ");
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Company 1:\t %s\t %s\t %f\t %f\t               %f",Company[29].Cname,Company[29].Ctype,Company[29].Cagr,Company[29].Capps,Company[29].Cprice);
                    printf("\n\t\t\t\t Company 2:\t %s\t %s\t %f\t %f\t               %f",Company[28].Cname,Company[28].Ctype,Company[28].Cagr,Company[28].Capps,Company[28].Cprice);
                    printf("\n\t\t\t\t Company 3:\t %s\t %s\t %f\t %f\t               %f",Company[27].Cname,Company[27].Ctype,Company[27].Cagr,Company[27].Capps,Company[27].Cprice);
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    break;


                default:
                    break;

                }
                break;
                case 1:
                    /*CALCULATING MONTHLY SAVINGS TO CALCULATE PROFITS
                    *INPUT MONTHLY INCOME
                    */
                    printf("\t\t\t\t\t\t\t\t\t\t\tPlease enter monthly gross income to calculate your savings:");
                    scanf("%f",&savingsamount);
                    printf("\n\n");

                    /*EACH STATE HAS DIFFERENT TAX SYSTEMS TO TAKING STATES BY SWITCH CASE
                    *ENTER YOUR STATE:
                    *LIST OF OPTIONS
                    *SELECT:
                    */
                    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your state (to know taxes):\n");

                    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your state from the list:\n\t\t\t\t\t\t\t\t\t\t\t  1.Maharashtra\n\t\t\t\t\t\t\t\t\t\t\t  2.Karnataka\n\t\t\t\t\t\t\t\t\t\t\t  3.Kerala\n\t\t\t\t\t\t\t\t\t\t\t  4.Tamil Nadu\n\t\t\t\t\t\t\t\t\t\t\t  5.Orissa\n\t\t\t\t\t\t\t\t\t\t\t  6.Uttar Pradesh\n\t\t\t\t\t\t\t\t\t\t\t  7.Bihar\n\t\t\t\t\t\t\t\t\t\t\t  8.Jammu & Kashmir\n\t\t\t\t\t\t\t\t\t\t\t  9.Rajasthan\n\t\t\t\t\t\t\t\t\t\t\t 10.Punjab\n\t\t\t\t\t\t\t\t\t\t\t 11.Gujrat\n\t\t\t\t\t\t\t\t\t\t\t  12.Andra Pradesh\n\t\t\t\t\t\t\t\t\t\t\t 13.Telengana\n\t\t\t\t\t\t\t\t\t\t\t  14.Punjab\n\t\t\t\t\t\t\t\t\t  Press the serial number to select state: ");
                    scanf("%d",&state);
                    printf("\n\n");

                    /*ASSIGN TAXES*/
                    if (state<5)
                      tax=0.33;
                    if (state>=5 && state<=10)
                      tax=0.30;
                    if (state>10 && state<=14)
                      tax=0.25;
                    if (state>14 && state<0)
                      {printf("ERROR ERROR ERROR ERROR");
                      break;
                      }

                     /*TO CALCULATE SAVINGS WE NEED TO DEDUCT LOAN EMIs SO USING A STRUCT AND FOR LOOP WE TAKE LOAN AMOUNTS*/
                    printf("\t\t\t\t\t\t\t\t\t\t\tAre you in the process of repaying any loans?(1 for Yes and 0 for No):");
                    scanf("%d",&ans1);
                    printf("\n\n");

                    if(ans1==1){

                        /*ENTER NO. OF LOANS*/
                        printf("\t\t\t\t\t\t\t\t\t\t\tEnter the number of loans:");
                        scanf("%d",&n);
                        printf("\n\n");

                        struct loans loan[n];

                        for(int i=0; i<n; i++){
                            /*LOAN AMOUNT*/
                            printf("\t\t\t\t\t\t\t\t\t\t\tEnter Loan Amount:");
                            scanf("%f",&loan[i].amount);

                            /*LOAN INTEREST*/
                            printf("\t\t\t\t\t\t\t\t\t\t\tEnter Loan Interest:");
                            scanf("%f",&loan[i].interest);

                            /*LOAN INTEREST*/
                            printf("\t\t\t\t\t\t\t\t\t\t\tEnter Loan Time Period (in Months):");
                            scanf("%f",&loan[i].time);

                            loan[i].emi=(loan[i].amount+(loan[i].amount*loan[i].interest*loan[i].time)/1200)/loan[i].time;
                            emiamt=emiamt+loan[i].emi;
                        }

                        printf("\n\n");
                        /*INPUT EXPENDITURE:*/
                        printf("\t\t\t\t\t\t\t\t\t\t\tPlease Input your Expenditure on Groceries and Electricity:");
                        scanf("%f",&expenditure);

                        savings=(savingsamount*0.8)-(savingsamount*tax)-(expenditure)-emiamt;


                    }

                    else{
                        /*INPUT EXPENDITURE*/
                        printf("\t\t\t\t\t\t\t\t\t\t\tPlease Input your Expenditure on Groceries and Electricity:");
                        scanf("%f",&expenditure);

                        savings=(savingsamount*0.8)-(savingsamount*tax)-(expenditure)-emiamt;
                    }

                printf("\n\n");
                /*SAVINGS ARE*/
                printf("\t\t\t\t\t\t-----------------------HERE WE TAKE MISCELLANEOUS AS 20 PERCENT--------------------\n\n");
                printf("\t\t\t\t\t\t\t\t\t\t\tYour Monthly savings are: %f",savings);
                if(savings<=0){
                printf("\n\t\t\t\t\t\t-----------------------HOPE YOUR FINANCIAL CONDITIONS GET BETTER, USE OPTION 0 ON RESTARTING IF HAVE SOME SAVINGS SAVED UP--------------------\n\n");
                goto savedupmoney;
                }
                printf("\n\n");


                /*FOR HOW LONG ONE WISHES TO KEEP THE STOCKS*/
                printf("\t\t\t\t\t\t\t\t\t\t\tFor how long do you wish to keep the stocks? (max limit 12 months):");
                scanf("%d",&nom);
                printf("\n\n");

                /*PRESS:
                *0: TO SEE MAX PROFITS BY SELLING
                *1: RETURNS ON THE STOCK PER MONTH
                */
                printf("\n\t\t\t\t\t\t\t\t\t\t\tPress:\n\t\t\t\t\t\t\t\t\t\t\t0: To see max profits by selling stocks \n\t\t\t\t\t\t\t\t\t\t\t1: Returns on the stock");
                scanf("%d",&priorities);
                printf("\n\n");

                switch(priorities){

                 /*RESULTS BASED ON PRIORITY ON AVERAGE GROWTH RATE = Cagr*/
                case 0:
                    agrSort();

                    profit= (savings/3)*Company[29].Cagr+(savings/3)*Company[28].Cagr+(savings/3)*Company[27].Cagr;

                    printf("\t\t\t\tWe only Allow a total of three companies to invest in at a time as that is the number permitted by International Broker Committee.\n\t\t\t\t Your Total profit for the investment %f in each company is %f ", (savings/3),profit);
                    printf("\n\n");

                    /*TABULATING THE DATA*/
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Companies \t Company Name \t Sector        \t Average GrowthRate\t Average Profit-per-Month\t Price  ");
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Company 1:\t %s\t %s\t %f\t %f\t               %f",Company[29].Cname,Company[29].Ctype,Company[29].Cagr,Company[29].Capps,Company[29].Cprice);
                    printf("\n\t\t\t\t Company 2:\t %s\t %s\t %f\t %f\t               %f",Company[28].Cname,Company[28].Ctype,Company[28].Cagr,Company[28].Capps,Company[28].Cprice);
                    printf("\n\t\t\t\t Company 3:\t %s\t %s\t %f\t %f\t               %f",Company[27].Cname,Company[27].Ctype,Company[27].Cagr,Company[27].Capps,Company[27].Cprice);
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    break;

                /*RESULTS BASED ON PRIORITY ON RATIO OF PROFIT PER PRICE OF ONE SHARE*/
                case 1:
                    appsSort();

                    profit= ((savings/3)/Company[29].Cprice)*Company[29].Capps+((savings/3)/Company[28].Cprice)*Company[28].Capps+((savings/3)/Company[27].Cprice)*Company[27].Capps;
                    printf("\t\t\t\tWe only Allow a total of three companies to invest in at a time as that is the number permitted by International Broker Committee.\n\t\t\t\t Your Total profit for the investment %f in each company is %f per month", (savings/3),profit);
                    printf("\n\n");

                    /*TABULATING THE DATA*/
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Companies \t Company Name \t Sector        \t Average GrowthRate\t Average Profit-per-Month\t Price  ");
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Company 1:\t %s\t %s\t %f\t %f\t               %f",Company[29].Cname,Company[29].Ctype,Company[29].Cagr,Company[29].Capps,Company[29].Cprice);
                    printf("\n\t\t\t\t Company 2:\t %s\t %s\t %f\t %f\t               %f",Company[28].Cname,Company[28].Ctype,Company[28].Cagr,Company[28].Capps,Company[28].Cprice);
                    printf("\n\t\t\t\t Company 3:\t %s\t %s\t %f\t %f\t               %f",Company[27].Cname,Company[27].Ctype,Company[27].Cagr,Company[27].Capps,Company[27].Cprice);
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    break;


                default:
                    break;

                }
                break;

                /*RESULTS BASED ON USER'S SEARCH*/
                case 2:
                    /*Press corresponding serial numbers to search in the sector
                    * Sector wise display of companies:
                    * 1. Tech
                    * 2.Foods And Beverages
                    * 3.Delivery
                    * 4.Social Media
                    * 5.Finance
                    * 6.Petroleum
                    */
                    printf("\t\t\t\t\t\t\t\t\t\tPress corresponding serial numbers to search in the sector\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\tSector wise display of companies:\n\t\t\t\t\t\t\t\t\t\t\t 1. Tech\n\t\t\t\t\t\t\t\t\t\t\t 2.Foods And Beverages\n\t\t\t\t\t\t\t\t\t\t\t 3.Delivery\n\t\t\t\t\t\t\t\t\t\t\t 4.Social Media\n\t\t\t\t\t\t\t\t\t\t\t 5.Finance\n\t\t\t\t\t\t\t\t\t\t\t 6.Petroleum");

                    /*SECTOR WISE SEARCH*/
                    printf("\n\t\t\t\t\t\t\t\t\t\t\tSector:");
                    scanf("%d",&sector);


                    switch(sector){

                        /*TECH SECTOR*/
                   case 1:
                     for(int i=0; i<=4; i++){
                        printf("\t\t\t\t\t\t\t\t\t\t\t%d . %s \n",(i+1),Company1[i].Cname);
                    }
                    printf("\t\t\t\t\t\t\t\t\t\tPress serial no to select company:");
                        scanf("%d",&scinput);
                        if(scinput<0 && scinput>4){
                            break;
                        }
                        else{
                            scompany=scinput-1;
                        }
                    break;

                         /*FOODS AND BEVERAGES SECTOR*/
                    case 2:
                    for(int i=5; i<=9; i++){
                        printf("\t\t\t\t\t\t\t\t\t\t\t%d . %s \n",(i+1),Company1[i].Cname);
                    }
                    printf("\t\t\t\t\t\t\t\t\t\tPress serial no to select company:");
                        scanf("%d",&scinput);
                        if(scinput<5 && scinput>9){
                            break;
                        }
                        else{
                            scompany=scinput-1;
                        }
                    break;

                         /*DELIVERY SECTOR*/
                    case 3:
                    for(int i=10; i<=14; i++){
                        printf("\t\t\t\t\t\t\t\t\t\t\t%d . %s \n",(i+1),Company1[i].Cname);
                    }
                    printf("\t\t\t\t\t\t\t\t\t\tPress serial no to select company:");
                        scanf("%d",&scinput);
                        if(scinput<10 && scinput>14){
                            break;
                        }
                        else{
                            scompany=scinput-1;
                        }
                    break;

                         /*SOCIAL MEDIA SECTOR*/
                    case 4:
                    for(int i=15; i<=19; i++){
                        printf("\t\t\t\t\t\t\t\t\t\t\t%d . %s \n",(i+1),Company1[i].Cname);
                    }
                    printf("\t\t\t\t\t\t\t\t\t\tPress serial no to select company:");
                        scanf("%d",&scinput);
                        if(scinput<15 && scinput>19){
                            break;
                        }
                        else{
                            scompany=scinput-1;
                        }
                    break;

                         /*FINANCE SECTOR*/
                    case 5:
                    for(int i=20; i<=24; i++){
                        printf("\t\t\t\t\t\t\t\t\t\t\t%d . %s \n",(i+1),Company1[i].Cname);
                    }
                    printf("\t\t\t\t\t\t\t\t\t\tPress serial no to select company:");
                        scanf("%d",&scinput);
                        if(scinput<20 && scinput>24){
                            break;
                        }
                        else{
                            scompany=scinput-1;
                        }
                    break;

                         /*PETROLEUM SECTOR*/
                    case 6:
                    for(int i=25; i<=29; i++){
                        printf("\t\t\t\t\t\t\t\t\t\t\t%d . %s \n",(i+1),Company1[i].Cname);
                    }
                    printf("\t\t\t\t\t\t\t\t\t\tPress serial no to select company:");
                        scanf("%d",&scinput);
                        if(scinput<25 && scinput>29){
                            break;
                        }
                        else{
                            scompany=scinput-1;
                        }
                    break;

                }
                /*SECTOR*/
                printf("\t\t\t\t\t\t\t\t\t\t\t%s\n",Company1[scompany].Ctype);

                printf("%s:is rated at %f per share and return a growth rate on the stock at %f and return an average of %f dollars per month in earnings (all these values are projections and subject to conjecture invest at own risk)\n\n\n",Company1[scompany].Cname,Company1[scompany].Cprice,Company1[scompany].Cagr,Company1[scompany].Capps);
                break;

                     /*SEARCH A COMPANY SORTED BY PRICE(Cprice), AVERAGE GROWTH RATE( Cagr ), RETURNS PER MONTH( Capps )*/
                    case 3:
                        printf("\t\t\t\t\t\t\t\t\t\t\tPress:\n\t\t\t\t\t\t\t\t\t\t\t 1: To List sorted by Price\n\t\t\t\t\t\t\t\t\t\t\t 2. To see list sorted by growth rate\n\t\t\t\t\t\t\t\t\t\t\t 3. To see list sorted by returns\n\t\t\t\t\t\t\t\t\t\t\t press:");
                        scanf("%d",&sortl);

                        if(sortl==1){
                            priceSort();
                        }
                        if(sortl==2){
                            agrSort();
                        }
                        if(sortl==3) {
                            appsSort();
                            printf("\t\t\t\t\t\t-----------------------HERE BY RETURN WE MEAN RATIO OF RETURNS PER MONTH TO PRICE--------------------");
                        }

                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("\n\t\t\t\t Companies \t Company Name \t Sector        \t Average GrowthRate\t Average Profit-per-Month\t Price  ");
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");
                        for(int i=0; i<=29; i++)
                            {
                            printf("\n\t\t\t\t Company %d:\t %s\t %s\t %f\t %f\t               %f",(i+1),Company[i].Cname,Company[i].Ctype,Company[i].Cagr,Company[i].Capps,Company[i].Cprice);
                            }
                    printf("\n\t\t\t\t-----------------------------------------------------------------------------------------------------------------------------------------------------");

            }

            /*WHILE LOOP THAT WHOSE REPEAT VALUE IF CHANGED WILL STOP LOOPING*/
            printf("\n\t\t\t\t\t\t\t\t\t\tDo you wish to go again?(Press 1 for yes and any other key for no):");
            scanf("%d",&repeat);
        }
        }
        fclose(fptr);
        return 0;
    }
