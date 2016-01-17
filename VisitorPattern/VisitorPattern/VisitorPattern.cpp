// VisitorPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Element.h"
#include "Visitor.h"

int main()
{
    Element* pElement = new ConcreteElementA();
    Visitor* pVisitor = new ConcreteVisitorA();
    pElement->accept(pVisitor);

    return 0;
}

