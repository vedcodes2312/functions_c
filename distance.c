//distance between two coordinates
#include<stdio.h>
#include<math.h>


float calculatedistance(float x1,float y1,float x2,float y2);//declaration

int main()
{
    float x1,y1,x2,y2,distance;
    //first coordinate
    printf("Enter the first point coordinates (x1,y1): ");
    scanf("%f %f",&x1,&y1);
    //second coordinate
    printf("Enter the second point coordinates (x2,y2): ");
    scanf("%f %f",&x2,&y2);
    // Function call to calculate distance
    distance = calculatedistance(x1, y1, x2, y2);

    // Print the distance
    printf("Distance between the points: %.2f\n", distance);

    return 0;
}
float calculatedistance(float x1,float y1,float x2,float y2) //definition
{
    int d;
    d=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
}