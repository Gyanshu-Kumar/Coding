// #include <iostream>
// using namespace std;
// class fruit{
//     public:
//     string name;
//     string color;

// };
// int main(){
//     // fruit apple;
//     // apple.name = "Apple";
//     // apple.color = "Red";
//     // cout<<apple.name<<"-"<<apple.color<<endl;
//     fruit apple;
//     apple.name = "Apple";
//     apple.color = "Red";
//     cout<<apple.name<<"-"<<apple.color<<endl;
//     fruit*mango = new fruit();
//     mango -> name = "Mango";
//     mango -> color = "Yellow";
//     cout<<mango -> name <<"-"<<mango -> color<<endl;

//     return 0;
// }

// CONSTRUCTOR......
// #include<iostream>
// using namespace std;
// class Rectangle{
//     public:
//     int l;
//     int b;
//     Rectangle(){
//         l = 0;
//         b = 0;

//     }
// };
// int main(){
//     Rectangle r1;
//     cout<<r1.l<<" "<<r1.b<<endl;
//     return 0;
// }

// PARAMETERIZE CONSTRUCTOR....
//  #include<iostream>
//  using namespace std;

// class Rectangle {
// public:
//     int l;
//     int b;
//     Rectangle() {
//         l = 0;
//         b = 0;
//     }

//     Rectangle(int x, int y) {
//         l = x;
//         b = y;
//     }
//     Rectangle(Rectangle & r){
//         l = r.l;
//         b = r.b;

//     }
// };

// int main() {
//     Rectangle * r1 = new Recatngle();
//     cout<<r1->l<<"-"<<r1->b<<endl;
//     delete r1;

//     Rectangle r2(3, 4);
//     cout << r2.l << "-" << r2.b << endl;

//     Rectangle r3 = r2;
//     cout<<r3.l<<"-"<<r3.b<<endl;

//     return 0;
// }

// ENCAPSULATION ...
//  #include<iostream>
//  using namespace std;

// class ABC{
//     int x;
//     public:
//     void Set(int n){
//         x = n;
//     }
//     int get(){
//         return x;
//     }
// };
// int main(){
//     ABC obj1;
//     obj1.Set(3);
//     cout<<obj1.get()<<endl;
// }

#include<iostream>
using namespace std;

class parent {
public:
    int x;

protected:
    int y;

private:
    int z;
};

class child1 : public parent {
    // child1 can access x and y, but not z
};

class child2 : private parent {
    // child2 can access x and y, but not z
};

class child3 : protected parent {
    // child3 can access x and y, but not z
};

int main() {
    parent p;
    p.x; // You can access public member x

    // You cannot access protected member y or private member z outside the class.
    // p.y; // This will result in a compilation error
    // p.z; // This will result in a compilation error

    return 0;
}
