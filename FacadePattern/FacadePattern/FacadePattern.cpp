// FacadePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Facade.h"


int main()
{
    Facade* pFacade = new Facade();
    pFacade->operationWrapper();
    return 0;
}

