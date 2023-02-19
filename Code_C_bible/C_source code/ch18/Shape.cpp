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
    Rectangle rect; // ���ҧ�ͺ�礢ͧ���� Rectangle
    Triangle trgl; // ���ҧ�ͺ�礢ͧ���� Triangle
    Shape* s; // ���ҧ����þ�¹�����ͧ���� Shape
    s = &rect; // �ӵ���þ�¹�����仪�����ͺ�礢ͧ���� Rectangle
    s->set_values(4, 5); // ��˹��������ͺ�������¡�ѧ���� set_values()
    cout << s->area() << endl; // �ʴ����Ѿ���÷ӧҹ�ѧ���� area() �͡���˹�Ҩ�
    s = &trgl; // �ӵ���þ�¹�����仪�����ͺ�礢ͧ���� Triangle
    s->set_values(4, 5); // ��˹��������ͺ�������¡�ѧ���� set_values()
    cout << s->area() << endl;  // �ʴ����Ѿ���÷ӧҹ�ѧ���� area() �͡���˹�Ҩ�
    cin.get(); // ��˹��������ҹ���������˹�觤������ͨ������
    return 0;
}