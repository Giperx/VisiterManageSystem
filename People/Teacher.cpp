//
// Created by Giperx on 2022/6/3.
//

#include "Teacher.h"
void Teacher::setjobNum(){cin>>jobNum;}
void Teacher::setTitle() {cin>>title;}
string Teacher::getjobNum()    {return jobNum;}
string Teacher::getTitle() {	return title;}
//������ʦ��Ϣ���麯��ʵ�ֶ�̬
void Teacher::Input()
{
    cout<<"����������";
    Person::setName();
    Person::setID();
    date.inputDate();
    Person::setAge();
    cout<<"����ְ���ţ�";
    setjobNum();
    cout<<"������ְ��";
    setTitle();
    cout<<"���뵱ǰ���£�";
    Person::setTemperature();
    //�жϽ���״��
    Person::judgeCondition();
}
//�����ʦ��Ϣ���麯��ʵ�ֶ�̬
void Teacher::Display()
{
    cout << "****************************************" << endl;
    cout << "**\t������      "<< "\t" << Person::getName() << "\t**" << endl;
    cout << "**\t���䣺      "<< "\t" << Person::getAge() << "\t**" << endl;
    cout << "**\tְ���ţ�    "<< "\t" << getjobNum() << "\t**" << endl;
    cout << "**\t��ְ��      "<< "\t" << getTitle() << "\t**" << endl;
    cout << "**\t���֤�ţ�   "<< "\t" << Person::getID() << "\t**" << endl;
    cout << "**\t���£�       "<< "\t" << Person::getTemperature() << "\t**" << endl;
    cout << "**\t��ǰ����״����"<< "\t" << Person::getCondition() << "\t**" << endl;
    cout << "****************************************" << endl;
}
