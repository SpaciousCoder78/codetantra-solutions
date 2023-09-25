

#include <stdio.h>
void main(){
    float len, bred;
    printf("Enter the length & width of the rectangle: ");
    scanf("%f %f",&len, &bred);
    float area = len*bred;
    float peri = 2.0* (len+bred);
    printf("The Perimeter and area of rectangle = %f, %f units \n", peri, area);
}
