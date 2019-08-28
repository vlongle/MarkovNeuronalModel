#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <unordered_map>



// https://stackoverflow.com/questions/12139786/good-practice-default-arguments-for-pure-virtual-method
// NVI pattern for virtual default params
// We only want to change default params at ONE place ...
using namespace std;


class Base{
public:
    void print(int i=0) {
       _print(i);
   }

private:
    virtual void _print(int i)=0;
};
class Derived: public  Base{
private:
    void _print(int i){
        cout << "i: " << i << endl;
    }
};
int main() {

    Derived d;
    d.print(10);
}
//class Base{
//    virtual void oblige()=0;
//};
//class Derived:Base{
//   void oblige(){
//
//   }
//};
//
//Derived test(){
//   Derived d;
//   cout << "creating d " << &d << endl;
//   Derived d2;
//   return d;
//}
//int main(){
//    Derived d1;
//    Derived d = test();
//    Derived d2;
//    cout << "where? " << &d << endl;
//}

//class state{
//private:
//    int val;
//public:
//    state(){
//        // default constructor
//    }
//    state(int val):val(val){
//        cout << "constructor" << endl;
//    }
//    void set_val(int new_val){
//        val = new_val;
//    }
//    int get_val(){
//        return val;
//    }
//};
//
//
//class Control{
//public:
//    state &s;
//    Control(state &s): s(s){
//
//    };
//    state* get_state(){
//        return &s;
//    }
//    void change_val(int new_val){
//        s.set_val(new_val);
//    }
//    int get_val(){
//        return s.get_val();
//    }
//};
//int main()
//{
//    state s(10);
//    Control c(s);
//    cout << "size of s: " << sizeof(s) << endl;
//    cout << "size of c: " << sizeof(c) << endl;
//    cout << "size of pointer is always 8: " << sizeof(double *) << endl;
//    cout << "size of class pointer " << sizeof(c.s) << endl;
//    //cout << &s << endl;
//    //cout << "memory of control s: " << c.get_state() << endl;
//    //cout << "val of c: " << c.get_val() << endl;
//    //c.change_val(69);
//
//    //cout << "val of s: " << s.get_val() << endl;
//
    //cout << "val of c: " << c.get_val() << endl;
// }
//
//class Shape{
//    ~Shape(){
//        cout << "Destructor Shape" << endl;
//    }
//};
//class Rectangle: public Shape{
//    // destructor
//    ~Rectangle(){
//        cout << "Destructor Rectangle" << endl;
//    }
//};
//
//void test_poly(Shape &s){
//    cout << "Success" << endl;
//    Rectangle r; // some stupid var
//}
//int main() {
//    clock_t start = clock();
//
//
//    Rectangle r;
//    test_poly(r);
//    //unordered_map<int, Shape>  actionsList;
//    //actionsList.insert(pair<int, Shape>(10, r));
//    cout << "Done" << endl;
//    // test_poly(r);
//
//    //cout << "Hello" << endl;
//
//    //int n = 300;
//    //vector<double> v;
//    //cout << v.size() << " " << v.capacity() << endl;
//    // // v = vector<double>(n, 0);
//    //// v.reserve(n);
//    //// for (int i = 0; i < n; ++i) {
//    ////     v.push_back(n);
//
//    //// }
//    //cout << v.size() << " " << v.capacity() << endl;
//
//    clock_t stop = clock();
//    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
//    cout << "Time: " << elapsed << endl;
//}
//
