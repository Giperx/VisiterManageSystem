//
// Created by Giperx on 2022/6/5.
//

#include "Graduate.h"
void Graduate :: setMajor(){cin>>major;}
void Graduate :: setDirection(){cin>>direction;}

string Graduate::getMajor()         {return major;}

string Graduate::getDirection(){	return direction;}
//����о�����Ϣ���麯��ʵ�ֶ�̬
void Graduate::Display()
{	Student::Display();
    cout << "****************************************" << endl;
    cout << "**\tרҵ��      "<< "\t" << getMajor() << "\t**" << endl;
    cout << "**\t�о�����   "<< "\t" << getDirection() << "\t**" << endl;
    cout << "****************************************" << endl;
}
//�����о�����Ϣ���麯��ʵ�ֶ�̬
void Graduate::Input()
{	Student::Input();
    cout<<"����רҵ���ƣ�";
    setMajor();
    cout<<"�����о��ķ���";
    setDirection();
}