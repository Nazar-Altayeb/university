/*
My name: Nazar Altayeb Osman Alkhalifa
Class:Second
Department:Computer
*/
#include <iostream>  //importing libraries
#include <string>
#include <vector>
#include "windows.h"

using namespace std;


class Shape{ //Father class
    protected:
    string name;
    public:
    void setShape_name(string n){name=n;};
    string getShape_name(){return name;
    };
    };

class Polygon :public Shape{//child class of Shape
    protected:
        float height;
        float width;
        float side;
        float base;
        float left_side;
        float right_side;
    public:
        //constructor
       void set_values(string name_,float left_side_,float right_side_,float height_, float width_, float base_, float sside_){
           width=width_;
           height=height_;
           base=base_;
           side=sside_;
           name=name_;
           left_side=left_side_;
           right_side=right_side_;
           };

};


class Ellipse :public Shape{ //child class of Shape
    protected:
        float radius;
    public:
        void set_value(float r){//making function for setting values
            radius=r;

        };
};


class Circle :public Ellipse  {//child class of Ellipse
    public:
    void set_value(float rad){//used polymorphism for overrode data
        radius=rad;
        };
    float  circle_area(){
            float pi=3.14,area;
            return area=pi*radius*radius;
        };
    float circle_perimeter(){
        float  pi=3.14 ,c;
        return c=2*pi*radius;
    };
};


class Triangle : public Polygon {//creating triangle class as a child class  of Polygon
public:
    void set_values(float height_,float width_,float right_side_,float left_side_){//used polymorphism for overrode data
        width=width_;
        height=height_;
        left_side=left_side_;
        right_side=right_side_;
    };
    float triangle_area() {//function for calculate area of triangle
        float area ;
        return area = height * width *0.5;
    };

    float triangle_perimeter() {//function for calculate perimeter of triangle
        float p;
        return p = left_side + base + right_side;

    };
};


class RecTangle: public Polygon{// rectangle child class of Polygon
public:
    void set_values(float width_,float height_){//used polymorphism for overrode data
        height=height_;
        width=width_;
    };
    float rectangle_area() {//function for calculate area of rectangle
        float rectangle_area_;
        return rectangle_area_ = height * width;

    };

    float rectangle_perimeter() {//function for calculate perimeter of rectangle
        float p;
        return   p = 2 * (height + width);

    };
};



class Square : public Polygon{// square child class of Polygon
    public:
        void set_values(float side_){//used polymorphism for overrode data
            side=side_;
        };
        float square_area(){//function for calculate area
            float A;
            return A=side*side;
        };
        float square_perimeter(){//function for calculate perimeter
            float p ;
            return p= 4 *side;
        };


};


int main() {
    Circle circle; //initializing object from Circle class
    circle.set_value(2.0);
    Square square;//initializing object from Square class
    square.set_values(2.0);
    Triangle triangle;//initializing object from Triangle class
    triangle.set_values(3.0, 4.0, 4.0, 3.0);
    RecTangle rectangle;//initializing object from rectangle class
    rectangle.set_values(6.0, 2.0);
    bool loop=true;
    do{
    int choice;
    cout << "\nSelect what you need to Calculate *" << endl;
    cout << "* * * * * * * * * * * * * *" << endl;
    cout << "*         Manu            *" << endl;
    cout << "* * * * * * * * * * * * * *" << endl;

    cout << "1-Circle" << endl;
    cout << "2-Rectangle" << endl;
    cout << "3-Square" << endl;
    cout << "4-Triangle" << endl;
    cout << "5-Exit " << endl;
    cout << "Select Number: ";
    cin >> choice;
    system("Cls");

    if (choice == 1) {
        circle.set_value(2.0);
        cout << "\nThe Area of Circle is : " << circle.circle_area()<<endl;
        cout << "The perimeter of Circle is : " << circle.circle_area()<<endl;
    }
    else if (choice == 2) {
        cout << "\nThe Area of Rectangle is : " << rectangle.rectangle_area()<<endl;
        cout << "The perimeter of Rectangle is : " << rectangle.rectangle_perimeter()<<endl;

    }
    else if (choice == 3) {
        cout << "\nThe Area of Square : " << square.square_area()<<endl;
        cout << "The perimeter of Square : " << square.square_perimeter()<<endl;
    }
     else if (choice == 4){
        cout << "\nThe Area of Triangle : " << triangle.triangle_area()<<endl;
    cout << "The perimeter of Triangle : " << triangle.triangle_perimeter()<<endl;
    }

    else if (choice!=5)
        cout<<"\nerror selection....Try Again\n";

    else{
        if(choice==5)
            loop=false;
    }



    }while(loop);

    return 0;
}
