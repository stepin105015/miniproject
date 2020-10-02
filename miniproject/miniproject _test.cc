/*#include<iostream>
#include"Box.h"
using namespace std;
main()
{
    Box b1(1,2,3);
    b1.display();
    b1.volume();
}*/
#include<gtest/gtest.h>
#include"miniproject.h"
TEST(Student,test)
{
    Student s1(1234,"loka","male",12,400,500);
    EXPECT_EQ(1234,s1.Admno());
    EXPECT_EQ(6,b1.volume());
}












