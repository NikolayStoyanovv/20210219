#include <stdio.h>
struct tagTestA {
    char m_ch;
    short int m_si;
};
struct tagTestAP {
    char m_ch;
    short int m_si;
} __attribute__((packed));
int main() {
    printf("sizeof(A) = %ld, sizeof(A-packed) = %ld\n", sizeof(struct tagTestA), sizeof(struct tagTestAP));
return 0;
}