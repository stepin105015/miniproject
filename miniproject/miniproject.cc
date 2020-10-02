
#include"miniproject.h"
#include<iostream>
using namespace std;
Student::Student():m_admno{0},m_name{0},m_gender{0},m_std{0},m_marks{0},m_totalmarks{0} {}
Student::Student(double admno,string name,string gender,int std,float marks,float totalmarks):m_admno{admno},m_name{name},m_gender{gender},m_std{std},m_marks{marks},m_totalmarks{marks} {}
double Student::Admno()
{
    return m_admno;
}
void Student:Name()
{
    cout<<m_name<<endl;
}
void Student::Gender()
{
    cout<<m_gender<<endl;
}
void Student::Standard()
{
    cout<<m_std<<endl;
}
void Student::Marks()
{
    cout<<marks<<endl;
}
void Student::Totalmarks()
{
    cout<<m_totalmarks<<endl;
}


void Student::display()
{
    cout<<m_admno<<endl;
    cout<<m_name<<endl;
    cout<<m_gender<<endl;
    cout<<m_std<<endl;
    cout<<m_marks<<endl;
    cout<<m_totalmarks<<endl;
    
    
}

  













