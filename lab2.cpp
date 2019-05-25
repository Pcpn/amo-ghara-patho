#include<iostream>
using namespace std;
//Defing class of rectangle............
class rectangle {
    public:
    int l;
    int b;
    //Defing constructor..............
    rectangle(){
        l=4;
        b=2;

    }
    //Defing the main fomulae for area of a rectangle..........
    float area(){
        return  l*b;

    }
};
//Write the main function .........
int main(){
    rectangle r1;
    cout<<"Write the length and breath of a rectangle : "<<endl;
    cin>>r1.l>>r1.b;
    cout<<"The area of a rectangle  is : "<<r1.area();
    return 0;
        
}
