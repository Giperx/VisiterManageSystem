//
// Created by Giperx on 2022/6/3.
//

#include "Student.h"
string Student::getNumber()   {return number;}
//������Ϣ���麯��ʵ�ֶ�̬
void Student::Input()
{
    cout<<"����������";
    setName();
    //���ø����������֤����
    cout<<"�������֤���룺";
    Person::setID();
    date.inputDate();
    Person::setAge();
    cout<<"����ѧ�ţ�";
    setNumber();
    cout<<"���뵱ǰ���£�";
    Person::setTemperature();
    //�жϽ���״��
    Person::judgeCondition();
}
//�����Ϣ���麯��ʵ�ֶ�̬
void Student::Display()
{
    cout << "****************************************" << endl;
    cout << "**\t������      "<< "\t" << Person::getName() << "\t**\t" << endl;
    cout << "**\t���䣺      "<< "\t" << Person::getAge() << "\t**\t" << endl;
    cout << "**\tѧ�ţ�      "<< "\t" << getNumber() << "\t**\t" << endl;
    cout << "**\t���֤�ţ�   "<< "\t" << Person::getID() << "\t**\t" << endl;
    cout << "**\t���£�       "<< "\t" << Person::getTemperature() << "\t**\t" << endl;
    cout << "**\t��ǰ����״����"<< "\t" << Person::getCondition() << "\t**\t" << endl;
    cout << "****************************************" << endl;
}

