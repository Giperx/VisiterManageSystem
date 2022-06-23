//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_PERSON_H
#define VISITERMANAGESYSTEM_PERSON_H
#include "../Date/Date.h"
#include <iostream>
using namespace std;
//����ʦ���������࣬������
class Person {
private:
    string name;                     //����
    string ID;                     //���֤
    int age;                         //����
    string account;                  //�˺�
    string secret;					//����
    float temperature;  				//����
    string condition;				//����״��

public:class Date date; //��������
public:
    Person():name("0"),ID("0"),age(0),account("0"),secret("0"),temperature(0),condition("0"){}//Ĭ�Ϲ��캯��
    ~Person(){} //��������
    void setName();                //�洢����
    void setID();                     //�洢���֤
    void setAge();			//�洢����
    void setAccount();					//�洢�˺�
    void setSecret();						//�洢����
    void setTemperature();				//�洢�¶�
    void setCondition();      		    //�洢����״��
    string getName();                   //��ȡ����
    string getID();                      //��ȡ���֤
    int getAge();                       //��ȡ����
    string getAccount();				//��ȡ�˺�
    string getSecret();					//��ȡ����
    float getTemperature();				//��ȡ�¶�
    string getCondition();				//��ȡ����״��
    void judgeCondition();				//���������ж�����״��
    virtual void Input() = 0;                        //��ȡ���룬���麯��
    virtual void Display() = 0;                      //��ʾ�����麯��
};

#endif //VISITERMANAGESYSTEM_PERSON_H
