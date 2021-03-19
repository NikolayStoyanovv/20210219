/* Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */
#include<stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point a={3,4};
    struct point b={7,10};

for(int i=0;i<15;i++){
    for(int j=0;j<15;j++){
        if(j>a.x&&i>a.y&&i<b.y&&j<b.x){
            printf("%c",'@');
        }else{
            printf("%c",'-');
        }
        
    }
    printf("\n");
}
    return 0;
}