#include <stdio.h>
#include <string.h>

struct Subscription {
    char username[100];
    char type[20];
    int cost;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Subscription subs[n];

    // Counters and revenue holders
    int basicUsers = 0, standardUsers = 0, premiumUsers = 0;
    int basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", subs[i].username, subs[i].type, &subs[i].cost);

        if (strcmp(subs[i].type, "Basic") == 0) {
            basicUsers++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Standard") == 0) {
            standardUsers++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Premium") == 0) {
            premiumUsers++;
            premiumRevenue += subs[i].cost;
        }
    }

    // Output as specified
    printf("Basic: %d Users, Revenue: %d", basicUsers, basicRevenue);
    printf("Standard: %d Users, Revenue: %d", standardUsers, standardRevenue);
    printf("Premium: %d Users, Revenue: %d", premiumUsers, premiumRevenue);

    return 0;
}
