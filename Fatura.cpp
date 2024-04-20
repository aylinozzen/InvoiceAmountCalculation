#include <iostream>
#include <cmath>
using namespace std;

int main(){
int customerType,productNumber;
double total,price,amount,discount;

cout << "\nWelcome. Code the customer type you want to continue:\n1-)A\n2-)B\n3-)C" << endl;
cin >> customerType;


cout << "\nHow many products did you buy?" << endl;
cin >> productNumber;

cout << "\nEnter the prices of the products you purchased: (Press 0 to exit)" << endl;

while (true)
{
    cout << "Price of the product: ";
    cin >> total;

        if(total==0){
            break;
        }
        amount += total;
}


switch (customerType){
    case 1:
        if(amount<1000){
            discount =(amount*15)/100;
        }
        else if (amount>=1000)
        {
            discount =(amount*20)/100;
        }
    break;
    
    case 2:
        if(amount<1000){
            discount = (amount*10)/100;
        }
        else if (amount>=1000){
            discount =(amount*15)/100;
        }
    break;

    case 3:
        if(amount<1000){
            discount = (amount*5)/100;
        }
        else if (amount>=1000)
        {
            discount =(total*10)/100;
        }
    break;

    default:
    cout << "You have coded incorrectly. Please try again.";
    
    }

cout << "\nYour total shopping amount " << amount <<" USD.\n"<<endl;;
cout << "\nDiscount amount applied " << discount <<" USD.\n"<<endl;
total = amount - discount;
cout << "\nThe amount you will pay " << total <<" USD.\n"<<endl;

return 0;

}