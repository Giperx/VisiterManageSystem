//
// Created by Giperx on 2022/6/5.
//

#ifndef VISITERMANAGESYSTEM_GRADUATE_H
#define VISITERMANAGESYSTEM_GRADUATE_H
#include "Student.h"
//�о����࣬�̳�Student��
class Graduate:public Student{
private:
    string major; //����רҵ����
    string direction; //��������
public:
    Graduate():major("0"),direction("0"){}
    ~Graduate(){}
    void setMajor();
    void setDirection();
    string getMajor();
    string getDirection();
    //����о�����Ϣ���麯��ʵ�ֶ�̬
    void Display();
    //�����о�����Ϣ���麯��ʵ�ֶ�̬
    void Input();
};

#endif //VISITERMANAGESYSTEM_GRADUATE_H
