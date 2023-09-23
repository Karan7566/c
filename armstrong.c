#include <stdio.h>
int main() {
    int num, originalNum, remainder, arm = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       arm = (remainder * remainder * remainder)+arm;
        
       // removing last digit from the orignal number
       originalNum /=10;
    }

    if (arm == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
