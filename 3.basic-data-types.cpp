#include <iostream>
using namespace std;

/*
https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

in:
3 12345678912345 a 334.23 14049.30493
out:
3
12345678912345
a
334.230
14049.304930000
*/

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i, l, c, f, d);

    return 0;
}


