// PrototypePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "prototype.h"

int main()
{
    Prototype* pType = new ConcreteProtoType();
    pType->clone();
    return 0;
}

