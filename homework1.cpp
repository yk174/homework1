#include <iostream>
#include <cmath>

using namespace std;
class Vector{

private:
    double x;
    double y;

public:
    Vector(double x,double y):x(x),y(y){}

    Vector add(const Vector& other)const{
        return Vector(this->x+other.x,this->y+other.y);
    }

     void print() const {
        cout<< "Vector(" << x << ", " << y << ")" <<endl;
    }
    
    void dir()const{
        double mo=sqrt(x*x+y*y);
        cout<<"Vector("<<x<<","<<y<<")的模长为"<<mo<<endl;
    }
};
int main(){
Vector v1(1.0,1.0);
Vector v2(2.0,2.0);
Vector v3=v1.add(v2);
v1.print();
v2.print();
v3.dir();
return 0;
}
