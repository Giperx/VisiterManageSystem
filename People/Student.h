//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_STUDENT_H
#define VISITERMANAGESYSTEM_STUDENT_H
#include "Person.h"
//�������࣬��̳�Person��
class Student : virtual public Person{
private:
    string number;                 //ѧ��
public:
    Student():number("0"){}//
    ~Student(){} //��������
    void setNumber(){cin>>number;}
    string getNumber();
    virtual void Display();                      //�����Ϣ���麯��ʵ�ֶ�̬
    virtual void Input();                        //������Ϣ���麯��ʵ�ֶ�̬
};

#endif //VISITERMANAGESYSTEM_STUDENT_H
