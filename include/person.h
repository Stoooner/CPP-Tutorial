#pragma once
#include<iostream>
using namespace std;

template<class NameType, class AgeType=int>
class Person{
public:
    Person(NameType name, AgeType age);

    void showPerson();

    NameType m_Name;
    AgeType m_Age;
};