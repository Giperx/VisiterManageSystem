//
// Created by Giperx on 2022/6/5.
//

#ifndef VISITERMANAGESYSTEM_GRADUATETEACHER_H
#define VISITERMANAGESYSTEM_GRADUATETEACHER_H
#include "Graduate.h"
#include "Teacher.h"
//����ѧ���࣬�̳�Graduate���Teacher��
class GraduateTeacher : public Graduate, public Teacher{
public:
    GraduateTeacher(){}
    //�����������Ϣ���麯��ʵ�ֶ�̬
    void Display();
    //������������Ϣ���麯��ʵ�ֶ�̬
    void Input();
};


#endif //VISITERMANAGESYSTEM_GRADUATETEACHER_H
