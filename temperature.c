#include <stdio.h>

int main() {
    int x;

    printf("Enter temperature in \"Celsius\":\n");
    scanf("%d", &x);

    if (x < 0) {
        printf("Freezing weather!!!");
    } else if (x >= 0 && x <= 10) {
        printf("Very Cold weather!!");
    } else if (x > 10 && x < 20) {
        printf("Cold weather!");
    } else if (x >= 20 && x < 30) {
        printf("Normal in Temp");
    } else if (x >= 30 && x < 40) {
        printf("Its Hot!");
    } else if (x >= 40) {
        printf("Its very hot!!!!");
    }

    return 0;
}
