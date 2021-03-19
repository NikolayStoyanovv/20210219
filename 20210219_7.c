/* Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки. */
#include <stdio.h>
 struct point{
    int x;
    int y;
};


// function prototype

struct point makepoint(int x,int y);

int main()
{   int l=5,v=6;
     struct point a={a.x=l,a.y=v};
  
    struct point ak;
    ak=makepoint(l,v);
    printf("Cordinates for x: %d\n", ak.x);
    printf("Cordinates for y: %d\n", ak.y);

 
}
struct point makepoint(int x,int y){
    struct point a={a.x=x,a.y=y};

  printf("Enter cordinates for point: ");
  scanf ("%d",&a.x);
  printf("Enter cordinates for point: ");
  scanf ("%d",&a.y);
 
  
 
 return a;
}