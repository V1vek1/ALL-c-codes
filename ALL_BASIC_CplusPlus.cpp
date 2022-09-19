//************************COMPARISON OPERATOR PRACTICE***************************

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=4,b=5;
//     cout<<"The value of a==b is "<<(a==b)<<endl; //yeh zero return karega matlab false
//     cout<<"The value of a!=b is "<<(a!=b)<<endl; //yeh one return karega matlab true
// }




//************************NEW LINE***************************************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Gaurav kumar";      
//     cout<<"Gaurav kumar\n";     //yeh 1st line ke sath hi print hoga kyu ki usme koi newline code nahi h 
//     cout<<"Gaurav kumar"<<endl; // yeh new line me print hoga kyu ki uper wali nine me \n lga hua h
// }




//************************LOGICAL OPERATOR PRACTICE**********************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=4,b=6;
//     cout<<"The value of this logical and operator "<<((a==b)&&(a<b))<<endl; //When both Conditions are TRUE then is will
//                                                                            // return Zero.
// }




//***********************SCOPE RESOLUTION PRACTICE*************************************
// #include<iostream>
// using namespace std;

// int b=3;     // This value is print by the help of Scop resolution.
// int main()
// {
//    int a=2;
//    cout<<"The value of a is "<<a<<endl;
//    cout<<"the value of b is "<<::b<<endl; // :: this is called Scope Resolution Operator.It is used to print the above
//                                                                                               //datatype of int main().
// }





//*********When we assign float datatype in c++ its converted into double datatype*****************

// #include<iostream>
// using namespace std;
// // int main()
// {
//     float a = 8.4f;  //When we assign float datatype in c++ its converted into double datatype
//     long double b = 8.4d;
//     cout<<"The value of a is "<<sizeof(a)<<endl;    //sizeof Keyword use for knowing the size of variable
//     cout<<"The value of a is "<<sizeof(8.4f)<<endl;
//     cout<<"the size of b is "<<sizeof(8.4d)<<endl;
//     cout<<"The size of b is "<<sizeof(b)<<endl;
// }





//************************REFERENCE VARIABLE**************************************
// #include<iostream>
// using namespace std;
// int main()
// {
//    int a = 455;
//    int &y = a;     //This is how to declare the Reference variable and this will also print the value of int a.
//    cout<<a<<endl;
//    cout<<y<<endl;
// }





//*****************************TYPECASTING******************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//    int a = 2;
//    float b = 44.5;
//    cout<<"The value of ai is "<<a<<endl;
//    cout<<"The value of b is "<<b<<endl;
//    cout<<"The value of b is "<<int(b)<<endl; //This is how we use Typecasting
//    cout<<"The value of b is "<<(int)b<<endl; //We will also write in this format to the Typecasting
// }






//***************************HOW IS IT POSSIBLE*************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//    float a =3.0;
//    cout<<"The value of a is "<<a<<endl; //yha float a ka value 3 print hoga kyuki yha const keyword ka use nahi kiya gya h
//    a=4;                               //yha float a ka value 4 print hoga kyuki yha const keyword ka use nahi kiya gya h
//    cout<<"The value of a is "<<a<<endl;
// }





//**************************CONSTANT IN C++*****************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//    const a=3; //const is datatype which is use to constant the variable
//    cout<<"The value of a was "<<a<<endl;
//    a=45;     //jab const a=3 ho gya h to aab a ki value 3 h rahegi kyki uske aage const datatype lga h
//    cout<<"The value of a is "<<a<<endl;
// }






//************************* IO MANIPULATORS**********************************************
// Manuplator ke bahut se types hote h like --> endl, setW e.t.c.
// #include<iomanip> iss header file me ek setW naam ka manuplator h jo variable ko right side se left side se
// print karta h kisi bhi chiz ko

// #include <iostream>
// #include <iomanip>
// using namespace std;
// This is how its work IO Manuplator
// int main()
// {
//     int a = 3, b = 35, c = 336;
//     cout << "The value of a is " << a << endl;
//     cout << "The value of b is " << b << endl;
//     cout << "The value of c is " << c << endl;
//     cout << endl;
//     cout << "The value of a is " << setw(4) << a << endl;
//     cout << "The value of b is " << setw(4) << b << endl;
//     cout << "The value of c is " << setw(4) << c << endl;
// }





//***********************************OPERATOR PRECEDENCE******************************
//Operator precedence ka matlab h ki koun sa operator pehele use hoga,Like -,+,*,%,/ yeh sab left to right chalte h

// #include<iostream>
// using namespace std;

// int main()
// {
// int a =3,b=4;
// int c=b+(a*5);
// cout<<c;
// }





//**************************************IF OR ELSE****************************************
// #include<iostream>
// using namespace std;

// int main()
// {
// int a=0;
// if(a<3)
// {
    
//     cout<<a<<endl;      //codition ke mutabik 0 print hoga
//     a++;                //yha 0 se 1 huaa 
//     cout<<a<<endl;      //or yha wo 1 print huaa
// }
// }

//**************************************2ND EXAMPLE OF IF ELSE*****************************
// #include<iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout<<"Tell me your age "<<endl;
//     cin>>age;
//     if(age<18)
//     {
//     cout<<"You cannot drive"<<endl;
//     }
//     else if(age==18)
//     {
//         cout<<"you can drive the car but under the guidence "<<endl;
//     }
//     else
//     {
//         cout<<"You can drive "<<endl;
//     }
// }






//***************************************SWITCH CASE****************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout<<"Enter the age "<<endl;
//     cin>>age;
//     switch (age)
//     {
//     case 18:
//     cout<<"You are 18 "<<endl;
//         break;
//     case 22:
//     cout<<"You are 22 "<<endl;
//     default:
//     cout<<"no special case"<<endl;
//         break;
//     }
// }





//*************************************ALL LOOPS*******************************************
//FOR LOOP
// #include<iostream>
// using namespace std;

// int main()
// {
//     for ( int i = 0; i < 4; i++)
//     {
//         cout<<i<<endl;
//     }
    
// }


//**********WHILE LOOP*****************
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1;
//     while(i<=4)
//     {   
//         cout<<i<<endl;
//         i++;
//     }
// }


//**********DO WHILE LOOP**************

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1;
//     do
//     {
//         cout<<i<<endl;
//         i++;
//     } 
//     while (i<=4);
// }





//*****************************************BREAK***************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//          cout<<i<<endl;
//          if(i==2)
//          {
//             break;
//          }
//     }
    
// }





//***************************************CONTINUE*************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         if(i==2)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
    
// }





//************************************POINTER*****************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=3;
//     int *b=&a;
//     cout<<"The address of a is "<<&a<<endl; //kisi ka address print karne ke liye & ka use karte h
//     cout<<"The address of a is "<<b<<endl; //Kewal b likhe to a ka Address btaya
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The value of b is "<<*b<<endl; //yha *b likhe to b ka value btaya
// }




//**********************************POINTER TO POINTER**********************************
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=3;
//     int *b=&a;
//     cout<<"The address of a is "<<&a<<endl; //kisi ka address print karne ke liye & ka use karte h
//     cout<<"The address of a is "<<b<<endl; //Kewal b likhe to a ka Address btaya
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The value of b is "<<*b<<endl; //yha *b likhe to b ka value btaya

//       // Pointer to pointer
//     int** c = &b; //yha pointer ka address store kiya ja rha h jiske liye ek or pointer bnana pda h 
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl; 
//     cout<<"The value at address c is "<<*c<<endl; 
//     cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;  
// }



//***********************************ARRAY************************************

// Array is a collection of similar type of items and it is store in contiguous memory allocation

// #include<iostream>
// using namespace std;

// int main()
// {
//   int marks[]={23,45,56,67};
//   marks[3]=70;  //aab marks 3 ki value 67 se 70 hojayegi mtlb hm array ko bich me bhi define kar sakte h
//   cout<<"\nThe value of "<<marks[0];
//   cout<<"\nThe value of "<<marks[1];
//   cout<<"\nThe value of "<<marks[2]<<endl;
//   cout<<"The value of "<<marks[3]<<endl;
// }




//**************************ARRAY BY THE HELP OF LOOP******************************
//BY USING FOR LOOP*********************

// include <iostream>
// using namespace std;
 
// int main() {
//    int arr[7] = {25, 63, 74, 69, 81, 65, 68};
    
//    for (int i=0; i < 7; i++) {
//       cout << arr[i] << "  ";
//    }
// }




//BY USING WHILE LOOP*******************

// #include <iostream>
// using namespace std;
 
// int main() {
//    int arr[7] = {25, 63, 74, 69, 81, 65, 68};
    
//    int i=0;
//    while (i < 7) {
//       cout << arr[i]<<"  ";
//        i++;
//    }
// }



//BY USING DOW WHILE LOOP*****************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[4]= {4,3,5,6};
//     int i=0;
//     do
//     {
//         cout<<"The value of marks "<<marks[i]<<endl;
//         i++;
//     } while (i<4);
//     return 0;
// }




//*************************ARRAYS WITH POINTERS**************************************
// #include<iostream>
// using namespace std;

// int main()
// {
//   int marks[4]={2,3,4,5};
//   int *p = marks;
//   cout<<*(p++)<<endl;
//     cout<<*(++p)<<endl;
//    cout<<"The value of *p is "<<*p<<endl;
//    cout<<"The value of *p is "<<*(p+1)<<endl;
//    cout<<"The value of *p is "<<*(p+2)<<endl;
//    cout<<"The value of *p is "<<*(p+3)<<endl;
// }



//*******************************STRUCTURES******************************************

//NOTE:- Structure ko hamesa main() function ke uper hi likhte h

// #include<iostream>
// using namespace std;

//  typedef struct employee //phele yha typedef nahi lga tha to hame pura structure ko define karna 
//                          //padta tha ya naam dena padhta tha, typrdef se hum ek chota sa variable 
//                          //define karte h jaisa ki hamne yha per ep; kiya h jiski wajah se hame 
//                          //struct employee nahi likhna padhega bas uska short likhna padega jo 
//                          //maine bnaya h ep; 

// {
//     int eID;
//     char favChar;
//     float salary;
// }ep;


// int main()
// {
//     ep vivek;
//     vivek.eID=1;
//     vivek.favChar='s';
//     vivek.salary=10000000;
//     cout<<"The value of "<<vivek.eID<<endl;
//     cout<<"The value of "<<vivek.favChar<<endl;
//     cout<<"The value of "<<vivek.salary<<endl;
// }



//*********************************USE OF UNION**************************************

// #include<iostream>
// using namespace std;

// union money     //union se hum at a time sirf ek hi function use kra sakte agar ek se jada 
//                 //krenege to garbage value return hogi
//                 //NOTE:- It is use very less Memory
// {
//     int rice; 
//     char car; 
//     float pounds; 
// };

// int main()
// {
//     union money m1;
//     m1.rice = 34; 
//     m1.car = 'c';
//     cout<<m1.car;  //hum ek jada kuch bhi print nahi kra sakte h kyu ki union ek time per ek hi
//                    //chiz print karta h
//     //cout<<m1.rice;   //when we run both cout then we get some garbage vale               
// }




//********************************USE OF ENUM***************************************

//enum ke jariye hum kisi bhi chiz ka return numbers me le sakte h like this --> 0,1,2,3,4.......

// #include<iostream>
// using namespace std;

// int main(){
//     enum Meal{ breakfast, lunch, dinner}; //hum chahe to yha bhi value assign kar skte h means breakfast=4 ...to 0 ki
//                                           // jagah 4 print hoga

//     Meal m1 = breakfast;  // yha per hum indexing se bhi nahi chala sakte h..jab bhi chalega to wo jo curly bracket 
//                           //me use hi chalega 
//     Meal m2 = lunch;
//     Meal m3 = dinner;
// // hum isko do tarike se print kar sakte h..ek to iis trike se or 2nd wala niche h 
//     cout<<m1<<endl;
//     cout<<m2<<endl;
//     cout<<m3<<endl;
// // second way of printing is this 
//     cout<<lunch<<endl; 
// }



//**************************************TYPEDEF**************************************

// #include<iostream>
// usnnig namespace std;

// // Typedef always declare top of the main() function

#include <iostream>
using namespace std;

int main() 
{
    typedef int vivek;
    vivek a,b;
     a = 1;  //a is int type internally 
     b = 2;  //b is int type internally
    
    cout << "a: " << a << "\nb: " << b;
    
    return 0;
}