/* Задача 6. Направете по подобен начин триъгълник: */
#include<stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    int n;
struct point a={3,4};
struct point b={7,10};
n=b.y-a.y;
for(int i=1;i<n;i++){
    for(int j=1;j<i;j++){
            printf("%c",'@');       
        }
    printf("\n");
}
    return 0;
}