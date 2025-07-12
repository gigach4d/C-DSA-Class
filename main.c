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
}

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
}*/
//Left Shift and Right Shift:
/*
4<<1 = 8    (Lshift equivalent to multiplying by 2)
4>>1 = 2    (Rshift equivalent to dividing by 2)

(8 4 2 1) 
 0 1 0 0 = 4
 1 0 0 0 = 8 

(8 4 2 1) 
 0 1 0 0 = 4
 0 0 1 0 = 2 

#include <string.h>
void main(){
    char sat[]="Holiday";
    if (strcmp(sat,"Holiday")==0){
        printf("I'm happy");
    }
}
int main(){
    int sat=5;
    if ((sat>=0 || sat<5)){
        printf("Im happy.\n");
    }
    else{
        printf("Not happy.\n");
    }
}
int main(){
    int ticket=150;
    if(ticket>=100 && ticket<=120){
        printf("Third class\n");
    }
    else if(ticket>=121 && ticket<=150){
        printf("Second class\n");
    }
}
//Switch-case code:
int main(){
    char a=5;
    switch(a){
        case 1:
        case 2:
        case 3: 
        case 4:
            printf("First half\n");
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Second half\n");
            break;
    }
}
//To count number of digits in an input number.
int main(){
    int a;
    scanf("%i",&a);
    switch(a){
        case 1 ... 9:
            printf("One digit\n");
            break;
        case 10 ... 99:
            printf("Two digit\n");
            break;
        case 100 ... 999:
            printf("Three digit\n");
            break;
    }
}
//Fibonacci Number check: Generates the fibonacci sequence, and detects whether given number is in the sequence.
#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("%d is a Fibonacci number.\n", num);
        return 0;
    }

    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == num)
        printf("%d is a Fibonacci number.\n", num);
    else
        printf("%d is NOT a Fibonacci number.\n", num);

    return 0;
}
//Leap year

int main(){
    int year=2004;
    if ((year%4==0 && year%100!=0) || (year%400==0)){
        printf("Leap year");
    }
}

int main()
{
    int x;
    int cnt = 0;
    scanf("%i", &x);
    int temp = x;
    while (temp > 0){
        temp = temp / 10;
        cnt++;
    }
    int au = (x * x) % (int)pow(10, 2);
    if (x == au){
        printf("Automorphic Number");
    }
    else{
        printf("Not Automorphic Number");
    }
    return 0;
}*/
//demonstration of exit function
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<=0){
        printf("Invalid input\n");
        exit(0);// return 0 or if else
    }
    for (int i=0; i<5;i++){
        if(i==4) break;
        printf("%d\n",i);
    }
}