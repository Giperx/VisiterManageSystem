//
// Created by Giperx on 2022/6/5.
//

#include "Date.h"
using namespace std;
//��ȡ����
void Date::inputDate()
{
    cout<<" ���������������(��ʽ���� �� ��):";
    cin >> year >> month >> day;
}
//��������
int Date::Age()
{
    int age;
    time_t now = time
            (0);
    tm* ltm = localtime(&now);//��ȡϵͳ��ǰ����ʱ��
    bool answer = Judge();
    //����������ڽ�����ȷ�Լ��
    while(!answer)
    {
        cout<<"�������մ������������룺"<<endl;
        cin >> year >> month >> day;
        answer=Judge();
    }
    //��ʼ��������
    age= (1900 + ltm -> tm_year ) - year - 1;
    if((ltm->tm_mon+ 1) > month)    age++;

    if((ltm-> tm_mon + 1) == month)
    {
        if(ltm->tm_mday >= day) age++;
    }
    return age;
}
//�ж�������������Ƿ���ȷ
bool Date::Judge()
{
    time_t now=time(0);
    tm*ltm=localtime(&now);
    //����Ƿ񳬹���ǰϵͳʱ��
    if (year > (1900 + ltm->tm_year))
        return false;
    else if (year == (1900 + ltm->tm_year) && month > (ltm->tm_mon + 1))
        return false;
    else if (year == (1900 + ltm->tm_year) && month == (ltm->tm_mon + 1) && day > (ltm->tm_mday))
        return false;

    if (year < 1900)
        return false;
    //�ж��·��Ƿ�������ȷ
    if (month < 1 || month>12)
        return false;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 0 || day >= 31)
            return false;
    }
    else if (month == 2) { //����
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (day > 29 || day < 1)
                return false;
        }
        else {
            if (day > 28 || day < 1)
                return false;
        }
    }
    else {
        if (day > 31 || day < 1)
            return false;
    }
    return true;
}