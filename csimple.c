//program to find roots 
// #include <stdio.h>
// #include <math.h>

// int main()
// {   float a,b,c,d,roots,rootd,root1,root2;
//     printf("Here we are going to find the roots of quadratic equation: \n");
//     printf("ax^2+ bx + c\n");
//     printf("enter the values of a, b, c;");

//     printf("\nvalue of a:");
//     scanf("%f", &a);
//     printf("value of b:");
//     scanf("%f", &b);
//     printf("value of c:");
//     scanf("%f", &c);

//     d=(b*b)-(4*a*c );
//     rootd= sqrt(d);
//     root1=( -b+rootd)/(2*a);
//     root2=( -b-rootd)/(2*a);
//     printf("root 1 :%f",root1);
//     printf("\nroot 2 :%f",root2);
//     return 0;
// }

//program to find the largest of three numbers
// #include <stdio.h>
// int main()
// {
//     int first, second, third;
//     printf("Enter three different numbres to find the largest one:\n");
//     printf("Input the first no.");
//     scanf("%f", &first);

//     printf("Input the second no.");
//     scanf("%f", &second);

//     printf("Input the third no.");
//     scanf("%f", &third);

//     if(first>second & first >third)
//     {
//         printf("first number is the largest number.");
//     }
//     else if(second>first & second>third)
//     {
//         printf("second is largest");
//     }
//     else if(third>first & third>second)
//     {
//         printf("third is largest");
//     }
//     else
//     {
//         printf("Invalid, numbers maybe equal or invalid intput");
//     }
//     return 0;
// }