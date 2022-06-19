#include <stdio.h>

int main(){
    int intro;
    double purchase, discount = 0, discounted_total = 0, sales_tax, total;

    printf("\t\t\t\t----Welcome to Keith's Sheet Music----\n");
    printf("\nAre you a teacher?\n");
    printf("Press 1 if Yes\n");
    printf("Press 2 if No\n");
    printf("Your Response: ");
    scanf("%d", &intro);

    switch(intro){
        case 1:
            printf("\nHow much is your purchase: $");
            scanf("%lf", &purchase);

            if(purchase >= 100){
                printf("\nTotal purchase: \t\t\t$%.2lf", purchase);

                discount = purchase * .12;
                discounted_total = purchase - discount;
                sales_tax = discounted_total * .05;
                total = discounted_total + sales_tax;

                printf("\nTeacher's discount (12%%): \t\t%.2lf", discount);
                printf("\nDiscounted total: \t\t\t%.2lf", discounted_total);
                printf("\nSales tax (5%%): \t\t\t%.2lf", sales_tax);
                printf("\nTotal: \t\t\t\t\t$%.2lf\n", total);
            }else{
                printf("\nTotal purchase: \t\t\t$%.2lf", purchase);

                discount = purchase * .1;
                discounted_total = purchase - discount;
                sales_tax = discounted_total * .05;
                total = discounted_total + sales_tax;

                printf("\nTeacher's discount (10%%): \t\t%.2lf", discount);
                printf("\nDiscounted total: \t\t\t%.2lf", discounted_total);
                printf("\nSales tax (5%%): \t\t\t%.2lf", sales_tax);
                printf("\nTotal: \t\t\t\t\t$%.2lf\n", total);
            }
            break;
        case 2:
                printf("\nHow much is your purchase: $");
                scanf("%lf", &purchase);

                sales_tax = purchase * .05;
                total = purchase + sales_tax;

                printf("\nTotal purchase: \t\t\t$%.2lf", purchase);
                printf("\nSales tax (5%%): \t\t\t%.2lf", sales_tax);
                printf("\nTotal: \t\t\t\t\t$%.2lf\n", total);

                break;
        default:
                printf("\nInvalid Input\n");
    }
    return 0;
}
