#include <stdio.h>
using namespace std;
int main() {
    double num;

    printf("Enter a double number: ");
    scanf("%lf", &num);

    printf("Default: %lf\n", num);
    printf("2 Decimal: %.2lf\n", num);
    printf("5 Decimal: %.5lf\n", num);

    return 0;
}
