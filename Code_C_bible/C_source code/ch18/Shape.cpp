using namespace std;

#include <iostream>

class Shape {
protected:
    int width = 0, height = 0;
public:
    void set_values(int a, int b) {
        width = a; height = b;
    }
    virtual int area() {
        return (0);
    }
};
class Rectangle : public Shape {
public:
    int area() {
        return (width * height);
    }
};
class Triangle : public Shape {
public:
    int area() {
        return (width * height / 2);
    }
};
int main() {
    Rectangle rect; // สร้างออบเจ็คของคลาส Rectangle
    Triangle trgl; // สร้างออบเจ็คของคลาส Triangle
    Shape* s; // สร้างตัวแปรพอยน์เตอร์ของคลาส Shape
    s = &rect; // นำตัวแปรพอยน์เตอร์ไปชี้ที่ออบเจ็คของคลาส Rectangle
    s->set_values(4, 5); // กำหนดค่าให้ออบเจ็คโดยเรียกฟังก์ชั่น set_values()
    cout << s->area() << endl; // แสดงผลลัพธ์การทำงานฟังก์ชั่น area() ออกสู่หน้าจอ
    s = &trgl; // นำตัวแปรพอยน์เตอร์ไปชี้ที่ออบเจ็คของคลาส Triangle
    s->set_values(4, 5); // กำหนดค่าให้ออบเจ็คโดยเรียกฟังก์ชั่น set_values()
    cout << s->area() << endl;  // แสดงผลลัพธ์การทำงานฟังก์ชั่น area() ออกสู่หน้าจอ
    cin.get(); // กำหนดให้ผู้ใช้งานกดคีย์บอร์ดหนึ่งครั้งเพื่อจบโปรแกรม
    return 0;
}