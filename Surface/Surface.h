//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_SURFACE_H
#define VISITERMANAGESYSTEM_SURFACE_H

#include<cstring>
#include<numeric>
#include "../People/Teacher.h"
#include "../People/Student.h"
#include "../People/Graduate.h"
#include "../People/GraduateTeacher.h"
using namespace std;
const int N = 100;

//�����࣬�������еľ��幦��ѡ����棬�Լ����������еĹ��ܺ���
class Surface{
private: // �����������͵�ʦ����������Ϊһ���������飬100��
    Student student[N];
    Teacher teacher[N];
    Graduate graduate[N];
    GraduateTeacher GT[N];
    int flag1;

public:
    //������½ѡ�����
    void Connection_one();		//���󡢹���ѡ��
    void Connection_two();		//��¼��ʽѡ��
    void Connection_three(int identity); //��¼�о����������ѡ��
    //����ʾ���溯��
    void ListR();	//�ֲ˵�����ҳ
    void ClassMenu();	//�ܲ˵���ѡ����Ա����
    void Menu();		//���˵���ѡ����
    void ListS();	//�ֲ˵���ѡ����ҷ�ʽ
    void About();	//��ҳ�棬����About
    void Help();	//��ҳ�棬����Help
    void Visitor();		//�ο͵�¼
    void Register();	//ע��
    void Enter();	//��¼
    //��������غ���
    int Search(int r);		//ͨ������ѡ���������
    int SearchByName(int r);	//���ң�������
    int SearchByNum(int r);	//���ң���ѧ�Ż���ְ����
    int SearchById(int r);		//���ң������֤
    //��ɾ����غ���
    void Delete(int r);			//ͨ������ѡ��ɾ������
    void DeleteName(int r);		//ɾ����������
    void DeleteNum(int r);		//ɾ������ѧ�Ż���ְ����
    void DeleteId(int r);		 //ɾ���������֤
    //���޸���غ���
    void Modify(int r);			//ͨ������ѡ���޸�����
    void ModifyName(int r);		//�޸�����
    void ModifyNum(int r);		//�޸�ѧ�Ż�ְ����
    void ModifyId(int r);		//�޸����֤
    void ModifyStu(int r);      //�������޸��ܲ˵�
    void ModifyGra(int r);      //�о����޸��ܲ˵�
    void ModifyTea(int r);      //��ʦ�޸��ܲ˵�
    void ModifyGT(int r);       //����ѧ���޸��ܲ˵�

    void Input(int r);	//���뺯��������ԭ��ѡ�����Ա���ͽ��ж������
    template <class T>//��Ӧ�����뺯��ģ��
    void InputTemplate(T* array,int r);

    void Output(int r);	//�������������Ա�������ν������������Ϣ
    template <class T>//��Ӧ����Ա��Ϣ��ʾ����ģ��
    void OutputTemplate(T* array,int r);

    //�ļ�����
    void ReadInfo(); //��ȡʦ����Ϣ
    void WriteInfo(int); //д���ļ�
};

#endif //VISITERMANAGESYSTEM_SURFACE_H
