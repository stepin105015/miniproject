#ifndef __MINIPROJECT_H
#define __MINIPTROJECT_H

#include<string>
#include<iostream>
class Student
{
 	double m_admno;
 	std::string m_name;
 	std::string m_gender;
 	int m_std;
	float m_marks;
	float m_totalmarks;
	float m_percentage;
 

public:
    Student();
    Student(double,std::string,std::string,int,float,float); 
    void Admno();
    void Name();
    void Gender();
    void Standard();
    void Marks();
    void Totalmarks();
    void display();
    void percentage();
};
#endif
