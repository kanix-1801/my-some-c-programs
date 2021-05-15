#include <stdio.h>

int main()
{
    float l,w,area,peri;
    printf("enter lenght & width\n");
    printf("lenght :");
    scanf("%f" ,&l);
    printf("width :");
    scanf("%f" ,&w);
//Area of rectangle = Length * Width//
    area =l*w;
    printf("area of rectangle = %.f * %.f = %.2f\n" ,w,l,area);
//perimeter of rectangle = 2(length + width)
    peri = 2*(l+w);
    printf("perimeter of rectangle = %.f * %.f = %.2f\n" ,w,l,peri);
}
