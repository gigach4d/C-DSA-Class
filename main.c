#include <stdio.h>
#define size 100 //macro
#include<limits.h>
#include <float.h>
#include <math.h>

// #-preprocessor
/*
int main(){
    printf("Long: %ld\n",sizeof(long));
    printf("Float: %ld\n",sizeof(float));
    printf("Char: %ld\n",sizeof(char));
    printf("Double: %lds\n",sizeof(double));
    printf("Long: %ld\n",sizeof(long));
    printf("Long Double: %ld\n",sizeof(long double));
    printf("Short: %ld\n",sizeof(short));

    printf("INT_MIN %d\n",INT_MIN);
    printf("INT_MAX %d",INT_MAX);
    printf("SHRT_MIN %d\n",SHRT_MIN);
    printf("SHRT_MAX %d\n",SHRT_MAX);
    printf("FLT_MIN %e\n",FLT_MIN);
    printf("FLT_MAX %e\n",FLT_MAX);
    printf("FLT_Digits %e\n",FLT_DIG);
    float fnum=2.5;
    printf("%.2f",fnum);
    return 0;
}

// %e is used to express large numbers in the form of scientific e-notation

void main(){
    int a;
    float fnum;
    char ch;
    char str[5];
    scanf("%d",&a);
    scanf("%f",&fnum);
    scanf("%c",&ch);
    scanf("%s",str);
    printf("Int %d\n",a);
    printf("Float %f\n",fnum);
    printf("Character %c\n",str);
}

//Program where user inputs a letter, and it outputs the ascii value
int main(){
    char ch;
    scanf("Enter: %c",&ch);
    printf("%d\n",ch);
}

int main(){
    int f;
    scanf("%i",&f);
    printf("%c \n",f);
}

//Program to print decimal digits of an input float number. Also demonstrates typecasting.
int main(){
    float num;
    scanf("%f",&num);
    printf("%.6f \n",num);
    printf("%.3f \n",num);
    printf("%.2f \n",num);
    printf("%.1f \n",num);
    printf("%i \n",(int)num);
}

//Program to take a float number as the input, and print it's ceil (next positive integer),
// floor(previous positive integer), and it's integer version. 
int main(){
    float x;
    printf("Input:");
    scanf("%f",&x);
    printf("Output:\n");
    printf("%d\n",(int)x);
    printf("%.1f\n",ceil(x));
    printf("%.1f\n",floor(x));
    
    return 0;
}

int main(){
    int fnum;
    scanf("%d",&fnum);//25
    int ans1=fnum%10;//5
    int ans2=fnum/10;//2
    printf("%d\n",ans1+ans2);//2+5=7
}*/

int main(){
    int l,b;
    float p,a;
    printf("Enter length of the ground:");
    scanf("%i",&l);
    printf("Enter the breadth of the ground:");
    scanf("%i",&b);
    

    p=2*(l+b);
    a=l*(float)b;
    printf("Length of the rope is: %.2f\n",p);
    printf("Area of carpet required: %.2f\n",a);
}