// AbstractFactoryPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "AbstractFactory.h"

int main()
{
    AbstractFactory* pFactory1 = new ConcreteFactory1();
    pFactory1->createProductA();
    pFactory1->createProductB();

    AbstractFactory* pFactory2 = new ConcreteFactory2();
    pFactory2->createProductA();
    pFactory2->createProductB();

    return 0;
}

