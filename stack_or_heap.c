#include <stdio.h>
#include <stdbool.h>

/*
* returns: true if up. false if down
* Up is positive
* Down is negative
*/

// bool upordown() {
//     volatile int x, y = 0;

//     if(&x > &y) {
//         return true;
//     }
//     return false;
// }

bool upordown(int *other) {
    int x;

    if (!other) {
        return upordown(&x);
    } else {
        return &x > other;
    }
}

int main() {
    printf("%s\n", upordown(NULL) ? "Up" : "Down");
    return 0;
}