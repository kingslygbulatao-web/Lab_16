#include <iostream>
using namespace std;

class color {
private:
    int red;
    int green;
    int blue;

public:
    
    color()                  { name = "none"; age = 0; }
    color(string n)          { name = n; age = 0; }
    color(string n, int a)   { name = n; age = a; }
   
    int getcolor()        { return red; }
    void setcolor(string n)  { name = n; }
    int getAge()            { return age; }
    void setAge(int a)      { age = a; }
};

int main() {
    Goat herd_1;
    cout << herd_1.getName() << " " << herd_1.getAge() << endl;   
    
    Goat herd_2("Joe");
    cout << herd_2.getName() << " " << herd_2.getAge() << endl;
    
    Goat herd_3("Jane", 12);
    cout << herd_3.getName() << " " << herd_3.getAge() << endl;
return 0;
}