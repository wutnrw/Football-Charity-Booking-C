#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char name[10];
    int ID_card[13];
    int match,zone,person,total_price,price,ag;
    }Book;

int bookt()
{
    int i = 0;

    while(i<20000)
    {



    Book b1;

    FILE * fp;
    FILE * aa;
    FILE * bb;
    FILE * cc;
    FILE * dd;


    fp = fopen("Book.txt","a");
    aa = fopen("18 Sep ThL VS ManL.txt","a");
    bb = fopen("19 Sep Th  VS Man .txt","a");
    cc = fopen("25 Sep BuL VS MuL .txt","a");
    dd = fopen("26 Sep Bu  VS Mu  .txt","a");

    system("cls");


    if(fp != NULL)
    {
        printf("**************************************************************************\n");
        printf("==================== LEGEND CHARITY FOOTBALL MATCH TH ====================\n");
        printf("\n Please Enter Your Name: ");
        scanf("%s",&b1.name);
        fprintf(fp,"Name: %10s ",&b1.name);


        printf("\n Please Enter ID Card Number[13 digits]: ");
        scanf("%s",&b1.ID_card);
        fprintf(fp,"ID: %13s ",&b1.ID_card);

        system("cls");

        printf("\n*****************************************************************************************\n");
        printf("=====Match Details=====\n");

        printf("\n   [1] Thailand Legend         VS Manchester United Legend  on 18 September Saturday 6 p.m\n");
        printf("   [2] Thailand                VS Manchester United         on 19 September Sunday   6 p.m\n");
        printf("   [3] Buriram United Legend   VS Muangthong United Legend  on 25 September Saturday 6 p.m\n");
        printf("   [4] Buriram United          VS Muangthong United         on 26 September Sunday   6 p.m\n");

        printf("\n*****************************************************************************************\n");

        printf("Please Select Match by Enter Number: ");
        scanf("%d",&b1.match);

        system("cls");

        printf("*****************************************************************************************\n\n ");

        printf("==========Zone==========");
        printf("\n   [1]Zone A   500  Baht per person [Roof]");
        printf("\n   [2]Zone B   500  Baht per person [Roof]");
        printf("\n   [3]Zone C   300  Baht per person");
        printf("\n   [4]Zone D   300  Baht per person");
        printf("\n   [5]Zone E   300  Baht per person");
        printf("\n   [6]Zone F   300  Baht per person");
        printf("\n   [7]Zone VIP 4000 Baht per person");
        printf("\n******************************************************************************************");
        printf("\nSelect zone[1-7]: ");
        scanf("%d",&b1.zone);

        system("cls");


    if(b1.match==1)
    {
        printf("You select [1] Thailand Legend VS Manchester United Legend on 18 September Saturday 6 p.m\n");
        fprintf(fp," ThL VS ManUL");
        fprintf(aa,"Name: %10s ",&b1.name);
        fprintf(aa,"ID: %13s ",&b1.ID_card);
        if(b1.zone==1)
        {
            fprintf(aa," Zone A \n ");

        }
        else if(b1.zone==2)
        {
            fprintf(aa," Zone B \n");

        }
        else if(b1.zone==3)
        {
            fprintf(aa," Zone C \n");

        }
        else if(b1.zone==4)
        {
            fprintf(aa," Zone D \n");

        }
        else if(b1.zone==5)
        {
            fprintf(aa," Zone E \n");

        }
        else if(b1.zone==6)
        {
            fprintf(aa," Zone F \n");

        }
        else if(b1.zone==7)
        {
            fprintf(aa," Zone VIP\n");

        }
    }
    else if(b1.match==2)
    {
        printf("You select [2] Thailand VS Manchester United on 19 September Sunday 6 p.m\n");
        fprintf(fp," Th  VS ManU ");
        fprintf(bb,"Name: %10s ",&b1.name);
        fprintf(bb,"ID: %13s ",&b1.ID_card);
        if(b1.zone==1)
        {
            fprintf(bb," Zone A \n");

        }
        else if(b1.zone==2)
        {
            fprintf(bb," Zone B \n");

        }
        else if(b1.zone==3)
        {
            fprintf(bb," Zone C \n");

        }
        else if(b1.zone==4)
        {
            fprintf(bb," Zone D \n");

        }
        else if(b1.zone==5)
        {
            fprintf(bb," Zone E \n");

        }
        else if(b1.zone==6)
        {
            fprintf(bb," Zone F \n");

        }
        else if(b1.zone==7)
        {
            fprintf(bb," Zone VIP\n");

        }

    }
    else if(b1.match==3)
    {
        printf("You select [3] Buriram United Legend VS Muangthong United Legend on 25 September Saturday 6 p.m\n");
        fprintf(fp," BuL VS MuL  ");
        fprintf(cc,"Name: %10s ",&b1.name);
        fprintf(cc,"ID: %13s ",&b1.ID_card);
        if(b1.zone==1)
        {
            fprintf(cc," Zone A \n");

        }
        else if(b1.zone==2)
        {
            fprintf(cc," Zone B \n");

        }
        else if(b1.zone==3)
        {
            fprintf(cc," Zone C \n");

        }
        else if(b1.zone==4)
        {
            fprintf(cc," Zone D \n");

        }
        else if(b1.zone==5)
        {
            fprintf(cc," Zone E \n");

        }
        else if(b1.zone==6)
        {
            fprintf(cc," Zone F \n");

        }
        else if(b1.zone==7)
        {
            fprintf(cc," Zone VIP\n");

        }
    }
    else if(b1.match==4)
    {
        printf("You select [4] Buriram United VS Muangthong United on 26 September Sunday 6 p.m\n");
        fprintf(fp," Bu  VS Mu   ");
        fprintf(dd,"Name: %10s ",&b1.name);
        fprintf(dd,"ID: %13s ",&b1.ID_card);
        if(b1.zone==1)
        {
            fprintf(dd," Zone A \n");

        }
        else if(b1.zone==2)
        {
            fprintf(dd," Zone B \n");

        }
        else if(b1.zone==3)
        {
            fprintf(dd," Zone C \n");

        }
        else if(b1.zone==4)
        {
            fprintf(dd," Zone D \n");

        }
        else if(b1.zone==5)
        {
            fprintf(dd," Zone E \n");

        }
        else if(b1.zone==6)
        {
            fprintf(dd," Zone F \n");

        }
        else if(b1.zone==7)
        {
            fprintf(dd," Zone VIP\n");

        }
    }
    else
    {
        printf("\nSorry we don't have that match. Please try again");
        fflush(fp);
        exit(0);
    }

    if(b1.zone==1)
    {
        printf("You select [1] Zone A\n");
        b1.price=500;
        fprintf(fp," Zone A  ");

    }
    else if(b1.zone==2)
    {
        printf("You select [2] Zone B\n");
        b1.price=500;
        fprintf(fp," Zone B  ");
    }
    else if(b1.zone==3)
    {
        printf("You select [3] Zone C\n");
        b1.price=300;
        fprintf(fp," Zone C  ");
    }
    else if(b1.zone==4)
    {
        printf("You select [4] Zone D\n");
        b1.price=300;
        fprintf(fp," Zone D  ");
    }
    else if(b1.zone==5)
    {
        printf("You select [5] Zone E\n");
        b1.price=300;
        fprintf(fp," Zone E  ");
    }
    else if(b1.zone==6)
    {
        printf("You select [6] Zone F\n");
        b1.price=300;
        fprintf(fp," Zone F  ");
    }
    else if(b1.zone==7)
    {
        printf("You select [7] Zone VIP\n");
        b1.price=4000;
        fprintf(fp," Zone VIP");
    }
    else
    {
        printf("\nSorry we don't have that zone. Please try again");
        fflush(fp);
        exit(0);
    }


    printf("\n*****************************************************************************************\n");




    printf("*****************************************************************************************\n\n ");


    printf("Enter number of people: ");
    scanf("%d",&b1.person);

    if(b1.person<=11)
    {
        b1.total_price=b1.price*b1.person;
        fprintf(fp," People:%2d",b1.person);
    }
    else
    {
        printf("\nSorry you can't booking more than 10 people \n Please try again.");
        fflush(fp);
        exit(0);
    }


    b1.total_price=b1.price*b1.person;


    system("cls");

    printf("\n***************************************************************************************** \n");

    printf("============================= LEGEND CHARITY FOOTBALL MATCH TH =============================\n");

    printf("\n %s   has already booked match [%d] zone[%d] for %d people\n",b1.name,b1.match,b1.zone,b1.person);
    printf("     Total price is %d*%d = %d Baht\n",b1.price,b1.person,b1.total_price);
    fprintf(fp,"%6d Baht\n",b1.total_price);

    printf("******************************   Thank You For Booking   *********************************");


    printf("\n\n \t\t\tYou have successfully booked the ticket.");

    i = i + b1.person;

    printf("\n%d",i);

    i = i + b1.person;


    printf("\n\nDo you want to book again? (Yes=1) (NO=0): ");
    scanf("%d",&b1.ag);

    if(b1.ag == 1)
    {
        bookt();
    }

    else
    {
        exit(0);
    }

    fclose(fp);
    fclose(aa);
    fclose(bb);
    fclose(cc);
    fclose(dd);

    }
    else
    {
        printf("\nError! Please try agian.");
        fflush(fp);

        exit(0);
    }
    }
    getch();
    return 0;


}

int main()
{
    bookt();


}


