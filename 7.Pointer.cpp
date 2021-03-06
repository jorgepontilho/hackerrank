// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int newA, newB;
    newA = *a + *b;
    newB = std::abs(*a - *b);
    *a = newA;
    *b = newB;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}