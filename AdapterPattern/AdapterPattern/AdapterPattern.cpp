// AdapterPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
//#include "Adapter_1.h"
#include "Adapter_2.h"

int main()
{
    Adaptee* pAdaptee = new Adaptee();

    Adapter* pAdapter = new Adapter(pAdaptee);
    pAdapter->requset();

    return 0;
}

