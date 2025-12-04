#include<stdio.h>

//Creating function to print square of numbers from n to m

void printSquare(int n , int m);

int main() {
int n,m;

printf("Enter from value:");
scanf("%d", &n);

printf("Enter to value:");
scanf("%d", &m);

printSquare(n, m);

return 0;
}

void printSquare(int n, int m){
    for (int i = n; i <= m; i++)
    printf("Square of %d = %d\n", i , i * i);

}