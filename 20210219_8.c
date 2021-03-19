/* Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета. */
#include <stdio.h>
struct point{
    int x;
    int y;
};
struct rect{
    struct point a;
    struct point b;
};
struct point makepoint(int x,int y){
    struct point a={a.x=x,a.y=y};
 
 return a;      
}
int main() {

    struct rect screen;
    struct point c;
    c=makepoint(0,0);  
    struct point d;
    d=makepoint(15,15);
    for(int i=0;i<16;i++){
    for(int j=0;j<16;j++){
        if(j>c.x&&i>c.y&&i<d.y&&j<d.x){
            printf("%c",'-');
        }else{
            printf("%c",'*');
        }
        
    }
    printf("\n");
}
return 0;
}
