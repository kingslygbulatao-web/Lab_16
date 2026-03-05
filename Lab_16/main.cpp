#include <iostream>
using namespace std;

class color {
private:
    string colorName;
    int     colorNum;
    


public:
    
    color()                  { colorName = "none"; colorNum = 0; }
    color(string n)          { colorName = n; colorNum = 0; }
    color(string n, int a)   { colorName = n; colorNum = a; }
   
    string getcolorName()        { return colorName; }
    void setcolorName(string n)  { colorName = n; }

    int getColorNum()           {return colorNum; }
    void setcolorNum(int a)     { colorNum = a; }

};

int main() {
    color red;
    cout << herd_1.getcolorName() << " " << red.getColorNum() << endl;   
    
    color green("green");
    cout << herd_2.getcolorName() << " " << green.getColorNum() << endl;
    
    color blue("blue", 12);
    cout << herd_3.getcolorName() << " " << blue.getColorNum() << endl;
return 0;
}