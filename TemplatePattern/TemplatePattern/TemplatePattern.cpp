// TemplatePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Template.h"
#include <iostream>

int main()
{
    AbstractClass* p1 = new ConcreteClass1();
    AbstractClass* p2 = new ConcreteClass2();
    p1->templateMethod();
    p2->templateMethod();

    return 0;
}

