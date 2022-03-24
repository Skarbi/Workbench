#include <stdio.h>
#include <math.h>
float wektor (int a, int b, int c, int a_1, int b_1, int c_1)
    {
        float dis=sqrt((a_1-a)*(a_1-a)+(b_1-b)*(b_1-b)+(c_1-c)*(c_1-c));
        return dis;

        }

int main ()
 {
     int a;
     int b;
     int c;
     int a_1;
     int b_1;
     int c_1;
     float di;
     float r;
 printf ("write cordinates of point A (a,b,c). We will check if this point belong to a sphere\n");
 scanf ("%d %d %d",&a,&b,&c);
 printf ("and then point B (a1,b1,c1) which will be central point of our sphere\n");
 scanf ("%d %d %d",&a_1,&b_1,&c_1);
 printf ("Now decide how long R of a sphere will be (can only be positive)\n");
 scanf ("%f", &r);
 di=wektor(a, b, c, a_1, b_1, c_1);
 if (r == di)
 {
     printf ("Point lay on the sphere");
 } else if (r > di) {
 printf ("Point is inside sphere");
         } else {
         printf ("Point is outside sphere");
         }
}
