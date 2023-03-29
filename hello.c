#include<stdio.h>
#include<math.h>
#include<inttypes.h>

// function declaration
// void printHello();
// void printGoodbye();
// void greeting();
// int sum(int a , int b);
// void calculate(float value);
float square(float side);
float circle(float radius);
float rectangle(float length, float breadth);

int main(){
  // printf("Hello World!");
  ////////////
  // data types 
  // int numbers=22;
  // char star='c';
  // float pi=3.14;
  // printf("numbers = %d\n" ,numbers );
  // printf("character is %c" ,star);
  // printing newline 
  // printf("hello world\n ");
  // printf("hello world\n ");
  // printf("hello world\n ");
  // printf("hello world\n ");
  ////////////////////////////////////////
  // using scanf
  // int age;
  // printf("Enter age=");
  // scanf("%d",&age);
  // printf("age is : %d ",age);
  ////////////////////////////////////////
  // Q-take 2 inputs and add and print them 
  // int a;
  // int b;
  // printf("enter a=");
  // scanf("%d",&a);
  // printf("enter b=");
  
  // scanf("%d",&b);
  // printf("the sum of the numbers are %d",a+b);
  ///////////////////////////////////////////
  // Q-area of a square 
  // int side;
  // printf("Enter side=");
  // scanf("%d",&side);
  // printf("Area of the square is %d sqm",side*side);
  ////////////////////////////////////////////
  // Q-area of a circle 
  // float radius;
  // float pi=3.14;

  // printf("Enter radius = ");
  // scanf("%f",&radius);
  // printf("Area of the circle is %f ",pi*(radius*radius));
  //////////////////////////////////////////////
  // Q-perimeter of rectangle
  // int a,b;
  // printf("Enter a=");
  // scanf("%d",&a);
  // printf("Enter b=");
  // scanf("%d",&b);
  // printf("Perimeter of rectangle is %d",2*(a+b));
  /////////////////////////////////////////////
  // using power 
  // int power=pow(3,2);
  // printf("%d",power);
  ///////////////////////////////////////
  // modulas 
  // printf("%d",4%2);
  /////////////////////////////////////
  // type conversion 
  //  here # denotes any operation(+,-,*,/)
  // int # int => int 
  // int # float => float 
  // float # float => float 
  /////////////////////////////////////////
  // operator precedence 
  // int a = 4+9*10;

  // printf("%d",a);

  // int b=4*3/6*2;
  // printf("%d",b);
  //////////////////////////////////////
  // relational operators 
  // C does not have true false 
  // printf("%d\n",4==4);
  // printf("%d",3>4);
  ////////////////////////////////////
  // logical operators 
  // printf("%d\n",3>4 && 4>3);
  // printf("%d\n",3>4 || 4>3);
  // printf("%d\n", !(4>3));
  //////////////////////////////////
  // check is a number is divisible by 2 
  // int num;
  // printf("Enter number to check divisibility = ");
  // scanf("%d",&num);
  // int div=num%2;
  // printf("%d",div==0);
  ///////////////////////////////////
  // Q-write a program to print the average of 3 numbers 
  // int a,b,c;
  // printf("enter a : ");
  // scanf("%d",&a);
  // printf("enter b : ");
  // scanf("%d",&b);

  // printf("enter c : ");
  // scanf("%d",&c);

  // printf("the average of the numbers is %d",(a+b+c)/3);
  ////////////////////////////////////////
  // Q-write a program to check a given number is digit or not 
  // int num;
  // printf("Enter number : ");
  // scanf("%d",&num);
  // // printf("%d",num==(int));
  // if(){
  //   printf("%d is digit",num)
  // }
  /////////////////////////////////////
  // Q-write a program to print the smallest number 
  //////////////////////////////////////
  // IF-ELSE STATEMENT
  // int age;
  // printf("enter age : ");
  // scanf("%d",&age);
  // if(age>=18){
  //   printf("You are adult");
  // }
  // else{
  //   printf("You are not an adult");
  // }
  //////////////////////////////////////////
  // ternary operator 
  // int numb;
  // printf("enter : ");
  // scanf("%d",&numb);
  // numb > 20?printf("Is greater"):("Is smaller");


  ////////////////////////////////////////////////////////////////////
  // char x,y,z;
  // printf("%d",scanf("%c%c%c",&x,&y,&z));
  
  ////////////////////////////////////////////////////////
  // switch (conditional statement)
//   int day; //1=mon,2=tue,3=wed
//   printf("enter from 1-7 : ");
//   scanf("%d",&day);


// switch (day){
//   case 1:printf("Monday \n");
//         break;
//   case 2:printf("Tuesday \n");
//         break;
//   case 3:printf("wednesday \n");
//         break;
//   case 4:printf("Thursday \n");
//         break;
//   case 5:printf("Friday \n");
//         break;  
//   case 6:printf("Saturday \n");
//         break; 
//   case 7:printf("Sunday \n");
//         break;  
//   default:printf("not a valid day!");             
// }
  ////////////////////////////////////////////////////
  // nested if example 
  // int number;
  // printf("Enter any number : ");
  // scanf("%d",&number);
  // if (number>0){
  //   printf("Positive \n");
  //   if (number%2==0){
  //     printf("Even");
  //   }else{
  //     printf("odd");
  //   }
  // }else{
  //   printf("negative");
  // }
  //////////////////////////////////////////////////////////////
  // write a program to find if a character entered by user is upper case or not.
  // char ch;
  // printf("Enter character : ");
  // scanf("%c",&ch);
  // if (ch>='A' && ch<='Z'){
  //   printf("Uppercase");

  // }else if(ch>='a' && ch<='z'){
  //   printf("lowerCase");
  // }else{
  //   printf("not english letter");
  // }
  /////////////////////////////////////////////////////////////////
  // write a program to check if a given number is armstrong number or not?
  // int n,c,r,arm=0;
  // printf("Enter number : ");
  // scanf("%d",&n);
  // c=n;
  // while (n>0){
  //   r=n%10;
  //   arm=(r*r*r)+arm;
  //   n=n/10;
  // }
  // if(c==arm){
  //   printf("is armstrong number");

  // }else{
  //   printf("not a armstrong number");
  // }
  ///////////////////////////////////////////////////////////////
  // write a program to check if the given number is a natural number .
  // int num;
  // printf("enter number : ");
  // scanf("%d",&num);
  // if (num>0){
  //   printf("is natural number");
  // }else{
  //   printf("is not a natural number");
  // }
  ///////////////////////////////////////////////////////////
  // FOR LOOP 
  // for (int i=1;i<=5;i=i+1){
  //   printf("hello world\n");
  // }
  /////////////////////////////////////////
  // Q-print the numbers from 0 to 10 ?
  // for (int i=0;i<=10;i=i+1){
  //   printf("%d\n",i);
  // }
  ////////////////////////////////////
  // WHILE LOOP 
  // int i=1;
  // while (i<=5){
  //   printf("Hello world\n");
  //   i=i+1;
  // }
  /////////////////////////////////
  // Q-print the numbers from 0 to n , if n is given by user?
  // int n;
  // printf("Enter number: ");
  // scanf("%d",&n);
  // int i=0;
  // while (i<=n){
  //   printf("%d\n",i);
  //   i=i+1;
  // }
  ///////////////////////////////////////////////////////////
  // DO-WHILE 
  // int i=1;
  // do{
  //   printf("%d\n",i);
  //   i++;
  // }while (i<=5);
  /////////////////////////////////////////////////////
  // Q-Print the sum of first n natural numbers?
  // int n;
  // printf("enter number : ");
  // scanf("%d",&n);
  // int j=0;

  // for(int i=0;i<=n;i++){
  //   j=j+i;
    
  // }
  // printf("%d\n",j);
  /////////////////////////////////////////////////////
  // Q-print the table of a number input the user 
  // for (int i=1;i<=10;i++){
  //   int j=2;
  //   printf("%d\n",j*i);
  // }
  // int n;
  // printf("enter number : ");
  // scanf("%d",&n);
  // for(int i=1;i<=10;i++){
  //   printf("%d\n",n*i);
  // }
  //////////////////////////////////////////////////////////////
  // BREAK
  // for(int i=1;i<=5;i++){
  //   if(i==3){
  //     break;
  //   }
  //   printf("%d\n",i);
  // }
  // printf("end");
  // Q-keep taking numbers as input from user until user enters a odd number?
  // int n;

  // do{
  //   printf("enter even number : ");
  //   scanf("%d",&n);
  //   if(n%2!=0){
  //     break;
  //   }
  //   printf("%d\n",n);

  // }while (1);
  //   printf("thank you ");
  ///////////////////////////////////////////////////////////////////////////
  // CONTINUE 
  // for(int i=1;i<=10;i++){
  //   if(i==4){
  //     continue;
  //   }
  //   printf("%d\n",i);
  // }
  /////////////////////////////////////////////////////
  // Q-print all the odd numbers from 5 to 50
  // for (int i=5;i<=50;i++){
  //   if(i%2==0){
  //     continue;
  //   }
  //   printf("%d\n",i);
  // }
  ////////////////////////////////////////////////////
  // Q-print the factorial of the number n 
  // int n;
  // printf("enter : ");
  // scanf("%d",&n);
  // int fact=1;
  // for (int i=1;i<=n;i++){
  //   fact=fact*i;
  // }
  // printf("%d",fact);

////////////////////////////////////////////////////
  // Q-print 4*4 pattern 
  // for(int i=1;i<=4;i++){
  //   for(int j=1;j<=4;j++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }
  //////////////////////////////////////////////////////
  // Q-write a program to check if a number is prime or not
  // int n,count=0;
  // printf("enter a number to check is prime ");
  // scanf("%d",&n);
  // for(int i=1;i<=n;i++){
  //   if(n%i==0){
  //     count++;
  //   }
  // }
  // if(count==2){
  //   printf("number is prime");
  // }else{
  //   printf("number is not prime");
  // }

  //////////////////////////////////////////////////////////////////////
  // Q-write a program to print prime numbers in a range 
  /////////////////////////////////////////////

  // FUNCTIONS
  // STEP-1 At top we have to declare the funcition outside (int main function) and below (#include <stdio.h>).
  // STEP-2 Define the function outside what ever you want outside (int main function) and after (int main function ).
  // STEP-3 Call the function inside the int main function . because main function is only executed by the computer 
  //////////////////////////////////////////////
  // Q-make 2 functions one to print-"hello!" and second to print-"good bye!"
  // function call
  // printHello();
  // printGoodbye();
  // greeting();

  // int a,b;
  // printf("enter a : ");
  // scanf("%d",&a);
  // printf("enter b : ");
  // scanf("%d",&b);

  // int s = sum( a , b);
  // printf("sum of given number is %d",s);
  
  //////////////////////////////////////////////////////////////////
  // Q-Write a function to calulate 18% gst in given value 
  // float value=100.0;
  // calculate(value);
  ///////////////////////////////////////////////////////
  // Q-Write a function to calculate area of a square , circle and rectangle 
  // float side=4;
  // float radius=3;
  // float length=5;
  // float breadth=10;

  // float areaSquare=square(side);
  // printf("Area of square is %f\n",areaSquare);
  // float areaCircle=circle(radius);
  // printf("Area of circle is %f\n",areaCircle);
  // float areaRectangle=rectangle(length,breadth);
  // printf("Area of rectangle is %f\n",areaRectangle);



  //////////////////////////////////////////////////////////////////////////////////////////////
  // char x,y,z;
  // printf("%d",scanf("%c%c%c",&x,&y,&z));
  //  printf("%d",printf("ankush"));
  // printf("input");
  // putchar(getchar());
  // putchar(getchar());
  // int a=3;
  // int b=4;
  // printf("%d",(a/b)*b+a%b);
  // printf("%d",2%3);
  // printf("%d",5/2);
  // const int ab[3]={1,2,3};
  // printf("%d",sizeof(ab));
  // unsigned i=1;
  // int j=-4;
  // printf("%u",i+j);

  // for (int i=1;i<5;++i){
  //   printf("%d",i);
  // }
  // int a;
  // if(a=0)printf("a is seven");
  // else printf("a is not seven");
 
 int i;
  for ( i =3;i<15;i+=3){
    printf("%d\n",i);
  }
  printf("%d",i);







  
 

  


  



  return 0;

}


// function definition
// void printHello(){
//   printf("hello!\n");
// }
// void printGoodbye(){
//   printf("goodbye!\n");
// }

// void greeting(){
//   char nation;
//   printf("enter nationality : ");
//   scanf("%c",&nation);
//   if (nation=='i'){
//     printf("Namaste");
//   }else if(nation=='f'){
//     printf("Bonjour");
//   }else{
//     printf("this nation does not exists");
//   }
// }

// int sum(int a , int b){
//   return a+b;
// }

// void calculate(float value){
//   value=value+(0.18*value);
//   printf("final price is %f",value);
// }

// float square(float side){
//   return side*side;

// }
// float circle(float radius){
//   return 3.14*radius*radius;

// }
// float rectangle(float length,float breadth ){
//   return length*breadth;

// }