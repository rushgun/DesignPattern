// ChainofResponsibilityPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Handle.h"

int main()
{
    Handle* h1 = new ConcreteHandleA();
    Handle* h2 = new ConcreteHandleB();
    h1->setSuccessor(h2);
    h1->handleRequest();

    return 0;
}

