//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_TEACHER_H
#define VISITERMANAGESYSTEM_TEACHER_H
#include "Person.h"
// ��ʦְ���࣬��̳�Person��
class Teacher : virtual public Person{
private:
    string jobNum; // ְ����
    string title;	//��ְ
public:
    Teacher():jobNum("0"),title("0"){}
    ~Teacher(){}
    void setjobNum();
    void setTitle();
    string getjobNum();
    string getTitle();
    //�����ʦ��Ϣ���麯��ʵ�ֶ�̬
    void Display();
    //������ʦ��Ϣ���麯��ʵ�ֶ�̬
    void Input();
};


#endif //VISITERMANAGESYSTEM_TEACHER_H
