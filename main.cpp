//
//  main.cpp
//  papa's work 2
//
//  Created by Sagar Kumar on 08/07/24.
#include <iostream>
using namespace std;

int main() {
    cout<<"Note:\nif anywhere you get .6 treat as 1 hr"<<endl<<"example: \t1.6 hr---> as 2 hrs\n\t 2.6 hrs---> as 3 hrs "<<endl<<endl;
    float i=0.00,j=0.00;
    while (j>=0.00) {
        cout<<"enter the number: ";
        cin>>j;
        if((i-int(i)+j-int(j))<0.60){
            i=i+j;
        }
        else{
            float i_fractional=i-int(i);
            float j_fractional=j-int(j);
            i=(i_fractional+j_fractional-0.60)+int(i)+int(j)+1.00;
        }
       /* if(i-int(i)==0.60){
            i=int(i)+1;
        }*/
        if((i-int(i))*10==6){
            i=int(i)+1;
        }

            cout<<"your sum up value is :"/**<fixed*/<<i<<" hrs"<<endl<<endl;
        //By using fixed, you instruct cout to display floating-point numbers in fixed-point notation, which will ensure that even whole numbers show the decimal part
    }
    return 0;
}

/*The issue arises because floating-point numbers cannot always be represented exactly due to their binary representation. When you add 1.3 to 1.3, the result is not exactly 2.6. Instead, it’s a tiny bit less than 2.6, which leads to the unexpected behavior in your program.
 
 floating-point comparision is always false, constant cannot be represented exactly in type float.
 
 To fix this, consider using integer arithmetic or rounding the result to the desired precision. For example, you could work with integers (e.g., cents instead of hours) or use a fixed number of decimal places for your calculations. Keep in mind that floating-point arithmetic can have subtle quirks, so it’s essential to handle it carefully in your code! 😊*/


/*
#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

int main() {
    float i = 0, j = 0;
    while (j >= 0) {
        cout << "enter the number: ";
        cin >> j;
        if ((i - int(i) + j - int(j)) < 0.6) {
            i = i + j;
        } else {
            i = ((i - int(i) + j - int(j)) - 0.60) + int(i) + int(j) + 1;
        }
        cout << "your sum up value is :" << fixed << setprecision(2) << i << " hrs" << endl << endl;
    }
    return 0;
}
*/

