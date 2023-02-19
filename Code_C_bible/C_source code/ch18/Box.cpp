using namespace std;

#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(); // ประกาศคอนสตรัคเตอร์
    Box(int, int, int); // ประกาศคอนสตรัคเตอร์
    ~Box(); // ประกาศดีสตรัคเตอร์
    double getCapacity();
};
Box::Box() { // กำหนดการทำงานของคอนสตรัคเตอร์แบบไม่มีพารามิเตอร์
    length = 1;
    width = 1;
    height = 1;
    cout << "do constructor" << endl;
}
Box::Box(int a, int b, int c) { // กำหนดการทำงานของคอนสตรัคเตอร์แบบมีพารามิเตอร์
    length = a;
    width = b;
    height = c;
}
Box:: ~Box() { // กำหนดการทำงานของดีสตรัคเตอร์
    length = 0;
    width = 0;
    height = 0;
    cout << "do destructor" << endl;
}
double Box::getCapacity() {
    return length * width * height;
}
int main() {
    Box b;		//สร้างออบเจ็คของคลาส Box
    cout << b.getCapacity();	//ทำการคำนวณความจุของกล่อง
    cin.get();
    return 0;
}

