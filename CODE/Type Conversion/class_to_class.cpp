// When we assign an object of a class into the object of another class then it is called as class to classconversion.
// The class to class conversion can be performed either by defining casting operator function in source 
// class or using the constructor in the destination class.

//Using Casting operator function

// #include<iostream>
// using namespace std;

// class AreaOfRectangle{
//     int w,l;
//     float a;
//     public:
//     AreaOfRectangle(int ww, int ll){
//         w = ww;
//         l = ll;
//         a = w*l;
//     }

//     void printr(){
//         cout<<w<<endl;
//         cout<<l<<endl;
//         cout<<a<<endl;
//     }
// };

// class AreaOfTriangle{
//     int b,h;
//     float a;
//     public:
//     AreaOfTriangle(int bb, int hh){
//         b = bb;
//         h = hh;
//         a = 0.5*b*h;
//     }

//     void print(){
//         cout<<b<<endl;
//         cout<<h<<endl;
//         cout<<a<<endl;
//     }

//     operator AreaOfRectangle(){
//         AreaOfRectangle obj(b,h);
//         return obj;
//     }
// };

// int main(){
//     AreaOfTriangle obj(10,6);
//     AreaOfRectangle r(obj);
//     obj.print();
//     cout<<endl;
//     r.printr();
//     return 0;
// }




// Using Constructor

#include<iostream>
using namespace std;

class AreaOfTriangle{
    int b,h;
    float a;
    public:
    AreaOfTriangle(int bb, int hh){
        b = bb;
        h = hh;
        a = 0.5*b*h;
    }

    void print(){
        cout<<b<<endl;
        cout<<h<<endl;
        cout<<a<<endl;
    }

    int get_b(){
        return b;
    }

    int get_h(){
        return h;
    }
};

class AreaOfRectangle{
    int w,l;
    float a;
    public:
    void printr(){
        cout<<w<<endl;
        cout<<l<<endl;
        cout<<a<<endl;
    }

    AreaOfRectangle(AreaOfTriangle t){
        w = t.get_b();
        l = t.get_h();
        a = w*l;
    }
};


int main(){
    AreaOfTriangle obj(10,6);
    AreaOfRectangle r = obj;
    obj.print();
    r.printr();
    return 0;
}