/*
What is quadratic equation?
ax^2 + bx +c = 0 

more: https://www.mathsisfun.com/algebra/quadratic-equation.html

 */

 #include <stdio.h>
 #include <math.h>

 int main(){
     float a,b,c;
     float root1,root2,img;
     float d;//d for discriminant

     printf("Enter values of a,b,c of quadratic equation (ax^2 + bx +c = 0  ) \n");
    scanf("%f%f%f",&a,&b,&c);

    d = (b*b)-(4*a*c);

    switch(d>0){

        case 1:
            root1 = (-b +sqrt(d))/ (2*a);
            root2 = (-b -sqrt(d))/ (2*a);

            printf("Two distinct and real roots exists: %f and %f",root1,root2);

            break;
        case 0:
            switch(d<0){
                case 1:
                    root1 = root2 = -b/(2*a);
                    img = sqrt(-d)/(2*a);

                    printf("Two distinct complex roots exists: %.2f +i%.2f and %.2f - i%.2f",root1,img,root2,img);
                    break;

                case 0:
                    root1 = root2 = -b/(2*a);
                    printf("Two distinct complex roots exists: %f and %f",root1,root2);

                    break;
            }
    }
     return 0;
 }