using namespace std;

#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(); // ��С�Ȥ͹ʵ�Ѥ����
    Box(int, int, int); // ��С�Ȥ͹ʵ�Ѥ����
    ~Box(); // ��С�ȴ�ʵ�Ѥ����
    double getCapacity();
};
Box::Box() { // ��˹���÷ӧҹ�ͧ�͹ʵ�Ѥ����Ẻ����վ���������
    length = 1;
    width = 1;
    height = 1;
    cout << "do constructor" << endl;
}
Box::Box(int a, int b, int c) { // ��˹���÷ӧҹ�ͧ�͹ʵ�Ѥ����Ẻ�վ���������
    length = a;
    width = b;
    height = c;
}
Box:: ~Box() { // ��˹���÷ӧҹ�ͧ��ʵ�Ѥ����
    length = 0;
    width = 0;
    height = 0;
    cout << "do destructor" << endl;
}
double Box::getCapacity() {
    return length * width * height;
}
int main() {
    Box b;		//���ҧ�ͺ�礢ͧ���� Box
    cout << b.getCapacity();	//�ӡ�äӹǳ�����آͧ���ͧ
    cin.get();
    return 0;
}

