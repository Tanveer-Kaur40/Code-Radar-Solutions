#include <stdio.h>
#include <string.h>

#define MAX_TICKETS 100

// Define structure
struct MovieTicket {
    char movieName[50];
    char ticketType[10];  // Can be "Standard", "Premium", "VIP"
    float ticketPrice;
};

int main() {
    struct MovieTicket tickets[MAX_TICKETS];
    int n;
    float standardTotal = 0, premiumTotal = 0, vipTotal = 0;

    printf("Enter number of tickets sold: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for ticket %d\n", i + 1);
        printf("Movie Name: ");
        scanf(" %[^\n]s", tickets[i].movieName);  // Read string with spaces
        printf("Ticket Type (Standard/Premium/VIP): ");
        scanf(" %s", tickets[i].ticketType);
        printf("Ticket Price: ");
        scanf("%f", &tickets[i].ticketPrice);

        // Categorize revenue
        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standardTotal += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premiumTotal += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vipTotal += tickets[i].ticketPrice;
        } else {
            printf("Invalid ticket type entered!\n");
        }
    }

    // Display results
    printf("\n--- Total Revenue ---\n");
    printf("Standard: ₹%.2f\n", standardTotal);
    printf("Premium : ₹%.2f\n", premiumTotal);
    printf("VIP     : ₹%.2f\n", vipTotal);
    printf("Overall : ₹%.2f\n", standardTotal + premiumTotal + vipTotal);

    return 0;
}
