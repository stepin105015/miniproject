class Student
{
 double m_admno;
 std::string m_name;
 std::string m_gender;
 int m_standard;
 float m_marks;
 float m_totalmarks;
 float m_percentage;
 

public:
    Student();
    Student(double,std::string,std::string,int,float,float); 
    void Admino(double);
    void Name(std::string);
    void Gender(std::string);
    void Standard();
    void Marks();
    void Totalmarks();
    void display();
    void percentage();
};
