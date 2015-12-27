// BridgePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "abstraction.h"
#include "AbstractionImpl.h"

int main()
{
    AbstractionImpl* pImpl = new ConcreteAbstractionImplA();
    Abstraction* pAbstraction = new RefinedAbstraction(pImpl);
    pAbstraction->operation();

    return 0;
}

