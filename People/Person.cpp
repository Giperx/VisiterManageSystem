//
// Created by Giperx on 2022/6/3.
//

#include "Person.h"
void Person::setName(){cin>>name;}
void Person::setID()
{ //�ж���������֤�����Ƿ�Ϊʮ��λ��
    string idTmp;
    cin >> idTmp;
    while(idTmp.size() != 18){
        cout << "��������ȷʮ��λ���֤��"<< endl;
        cin >> idTmp;
    }
    ID = idTmp;
}
void Person::setAge()
{
    age = date.Age();
}
void Person::setAccount(){cin >> account;}

void Person::setSecret(){cin >> secret;}

void Person::setTemperature(){cin>>temperature;}

void Person::setCondition(){cin>>condition;}


string Person:: getName()         {	return name;}          //��ȡ����

string Person::getID() {	return ID;}                     //��ȡ���֤


int Person::getAge()     {	return age;}                  //��ȡ����


string Person::getAccount(){return account;}


string Person::getSecret(){return secret;}


float Person::getTemperature(){return temperature;}


string Person::getCondition(){return condition;}

//�жϽ���״��
void Person::judgeCondition()
{
    //�ж���������
    if(getTemperature()-34 < 10e-7)
    {
        condition = "����ƫ��";
        cout << "************************" << endl;
        cout << "*      ���棺�����쳣��   *" << endl;
        cout << "*      ���¹��ͣ�        *" << endl;
        cout << "************************" << endl;
    }
    //�ж���������
    else if(getTemperature()-37.2 > 10e-7)
    {
        condition = "���Ʒ��ȣ���ֹ�����ж�";
        cout << "************************" << endl;
        cout << "*      ���棺�����쳣��   *" << endl;
        cout << "************************" << endl;
        cout << "************************" << endl;
        cout << "*                      *" << endl;
        cout << "*      ���¹��ߣ�        *" << endl;
        cout << "* ����ϵ�����˽��и���۲죡*" << endl;
        cout << "* ����ϵ�����˽��и���۲죡*" << endl;
        cout << "* ����ϵ�����˽��и���۲죡*" << endl;
        cout << "*                      *" << endl;
        cout << "************************" << endl;
        cout << "************************" << endl;
    }
    else
    {
        cout << "************************\n"
             << "*      �¶�             *\n"
             << "*      ����             *\n"
             << "************************" << endl;
        condition = "�¶�����";
    }
}