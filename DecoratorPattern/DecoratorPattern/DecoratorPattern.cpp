// DecoratorPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Decorator.h"

int main()
{
    ConcreteComponet* pComponet = new ConcreteComponet();
    ConcreteDecorator* pDecorator = new ConcreteDecorator(pComponet);

    pDecorator->operation();

    return 0;
}

