//
// Created by Giperx on 2022/6/5.
//

#ifndef VISITERMANAGESYSTEM_DATE_H
#define VISITERMANAGESYSTEM_DATE_H
#include<iostream>
#include<string>
#include<cstring>
#include<ctime>
//������
class Date {
private:
    int year; //��
    int month; //��
    int	day; //��
public:
    Date ():year(0),month(0),day(0){}//Ĭ�Ϲ��캯�����������ս��г�ʼ��
    void inputDate();   //��ȡ��������
    int Age();  //��������
    bool Judge();   // �ж�������������Ƿ���ȷ
};


#endif //VISITERMANAGESYSTEM_DATE_H
