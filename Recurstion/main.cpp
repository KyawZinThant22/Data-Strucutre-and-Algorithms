#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:

    Rectangle(){
        length = 0 ;
        breadth = 0;
    }

    Rectangle(int l , int b){
        length = l ;
        breadth = b;
    }

    int area() {
        return length * breadth;
    };

    int premiter(){
        return 2*(length+breadth);
    }
};


int main() {

     Rectangle r1(10,5);
    int area =r1.area();
    cout<<area<<endl;
    return 0;
}