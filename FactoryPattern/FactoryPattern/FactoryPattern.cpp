// FactoryPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "factory.h"

int main()
{
    Factory* pFactory = new ConcreteFactory();
    Product* pProduct = pFactory->createProduct();
    return 0;
}

