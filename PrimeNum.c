#include <stdio.h>
using namespace std;
int main() {
    int n, i, count = 0;
    printf("Enter a integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
            if (n % i == 0)
            {
            count = count + 1;
        }
    }

    if (count == 2) {
        printf(" n is a prime number",n);
    }
    else {
            printf( "n is not a prime number.", n);
    }

    getch();
}
