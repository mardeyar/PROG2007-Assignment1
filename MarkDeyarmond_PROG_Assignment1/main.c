#include <stdio.h>

int main() {

    //Global variables for the program
    float deliveryCost;
    float distanceToCustomer;
    float salesTax;
    float recordsCost;
    float totalCost;
    char customerName[100];

    //Program run
    printf("Hipster's Local Vinyl Records - Customer Order Details\n");
    printf("\nEnter the customer's name:");
    fgets(customerName, 100, stdin);

    printf("Enter the distance in kilometers for delivery:");
    scanf("%f", &distanceToCustomer);

    printf("Enter the cost of records purchased:");
    scanf("%f", &recordsCost);

    //Calculation for total cost with delivery
    deliveryCost = distanceToCustomer * 15;
    salesTax = (recordsCost * .14f);
    totalCost = deliveryCost + recordsCost + salesTax;

    //Finalized costing
    printf("\nPurchase summary for %s ", customerName);
    printf("\nDelivery Cost: $%.2f", deliveryCost);
    printf("\nPurchase Cost: $%.2f", (recordsCost + salesTax));
    printf("\nTotal Cost: $%.2f", totalCost);

    return 0;
}