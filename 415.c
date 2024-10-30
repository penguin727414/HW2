#include <stdio.h>
#include <math.h>

int main() {
    float r, m;

    printf("Enter money: ");  
    scanf("%f", &m);
    for (r = 0.1; r <= 0.12 + 0.0001; r = r + 0.005) { 
        printf("The money with rate %.3f is: %.2f\n", r, m * pow((1 + r), 15));
    }

    return 0;
}