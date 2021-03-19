/* Задача 9. Направете функця add(), която събира две точки. */
#include <stdio.h>
struct point{
    int x;
    int y;
};

struct point add(struct point a,struct point b){
    struct point c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

int main() {
    struct point a={4,6};
    struct point b={4,3};
    struct point c=add(a,b);
    printf("CX=%d CY=%d\n",c.x,c.y);

return 0;
}