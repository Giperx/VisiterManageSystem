//
// Created by Giperx on 2022/6/5.
//

#include "GraduateTeacher.h"
//������������Ϣ���麯��ʵ�ֶ�̬
void GraduateTeacher::Input()
{
    //�ȵ���Graduate������뺯��
    Graduate::Input();
    cout<<"��������ְ���ţ�";
    Teacher::setjobNum();
    cout<<"����������ְ��";
    Teacher::setTitle();
}
////�����������Ϣ���麯��ʵ�ֶ�̬
void GraduateTeacher::Display()
{
    Graduate::Display();
    cout << "****************************************" << endl;
    cout << "**\t����ְ���ţ�"<< "\t" <<  Teacher::getjobNum() << "\t**" << endl;
    cout << "**\t������ְ��"<< "\t" <<  Teacher::getTitle() << "\t**" << endl;
    cout << "****************************************" << endl;
}

