#include <stdio.h>


void p1(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("*");
}


void p2(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("*");
}


void p3(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n - row; col++) printf("*");
}


void p4(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < n - row - 1; col++) printf(" ");
        for (int col = 0; col < 2 * row + 1; col++) printf("*");
    }
}


void p5(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < row; col++) printf(" ");
        for (int col = 0; col < n; col++) printf("*");
    }
}


void p6(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < n - row - 1; col++) printf(" ");
        for (int col = 0; col < n; col++) printf("*");
    }
}


void p7(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < n - row - 1; col++) printf(" ");
        for (int col = 0; col <= row; col++) printf("*");
    }
}


void p8(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col <= row; col++) printf("*");
        for (int col = 0; col < 2 * (n - row - 1); col++) printf(" ");
        for (int col = 0; col <= row; col++) printf("*");
    }
}


void p9(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("1 ");
}


void p10(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("%d ", row + 1);
}


void p11(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("%d ", col + 1);
}


void p12(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("%d ", col + 1);
}


void p13(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n - row; col++) printf("%d ", n - col);
}


void p14(int n) {
    int c = 1;
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("%d ", c++);
}


void p15(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n - row; col++) printf("%d ", col + 1);
}


void p16(int n) {
    int m = 1;
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("%02d ", m++);
}


void p17(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("%d ", row + 1);
}

int main(void) {
    int n, choice;
    void (*patterns[])(int) = {p1, p2, p3, p4, p5, p6, p7, p8, p9,
                               p10, p11, p12, p13, p14, p15, p16, p17};

    printf("Enter pattern number (1-17): ");
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 17) {
        printf("Invalid choice\n");
        return 1;
    }
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid n\n");
        return 1;
    }

    patterns[choice - 1](n);
    return 0;
}