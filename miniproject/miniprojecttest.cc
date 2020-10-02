#include<iostream>
#include<string>
#include"miniproject.h"
#include"miniproject.cc"
using namespace std;
int main()
{
    Student s1(1234,"loka","male",12,400,500);
    s1.display();
    return 0;   
}
/*#include<gtest/gtest.h>
#include"miniproject.h"
TEST(Student,test)
{
    Student s1(1234,"loka","male",12,400,500);
    EXPECT_EQ(1234,s1.Admno());
    EXPECT_EQ(6,b1.volume());
}*/












