#include <stdio.h>
int detectPregnancy() {
    int menstrualCycleLength;
    int daysSinceLastPeriod;
    printf("Enter the average length of your menstrual cycle (in days): ");
    scanf("%d", &menstrualCycleLength);
    printf("Enter the number of days since your last period: ");
    scanf("%d", &daysSinceLastPeriod);
    if (daysSinceLastPeriod > menstrualCycleLength) {
        printf("Based on the input, there is a possibility of pregnancy.\n");
        return 1; 
    } else {
        printf("Based on the input, pregnancy is less likely.\n");
        return 0; 
    }
}

int main() {
    int isPregnant = detectPregnancy();
    if (isPregnant) {
        printf("Please consult with a healthcare professional for confirmation.\n");
    } else {
        printf("Continue monitoring your menstrual cycle and consult with a healthcare professional if needed.\n");
    }
    return 0;
}
