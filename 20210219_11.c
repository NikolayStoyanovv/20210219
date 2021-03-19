/* Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга. */
#include <stdio.h>
#include<stdlib.h>
 struct point{
    int x;
    struct point *ptr;
};
int main(){
    struct point* first = NULL; 
    struct point* second = NULL; 
    first = (struct point*)malloc(sizeof(struct point)); 
    second = (struct point*)malloc(sizeof(struct point)); 
    
    first->x = 1; 
    first->ptr = second;  
  
    second->x = 2; 
    second->ptr = first;
   
    return 0;
}
