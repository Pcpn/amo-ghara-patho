#include<iostream>
using namespace std;
//Defing class of circles............
class circle{
    public:
    int r;
    double pi;
    //Defing constructor..............
    circle(){
        r=120;
        pi=3.14;

    }
    //Defing the main fomulae for area of a circle...........
    float area(){
        return pi*r*r;

    }
};
//Write the main function .........
int main(){
    circle c1;
    cout<<"Write the radius of a circle: "<<endl;
    cin>>c1.r;
    cout<<"The area of a circle is : "<<c1.area();
    return 0;

}
