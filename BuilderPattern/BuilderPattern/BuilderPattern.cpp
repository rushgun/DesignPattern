// BuilderPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "builder.h"
#include "director.h"
#include "vld.h"

int main()
{
    Director* pBuilder = new Director(new ConcreteBuilder());
    pBuilder->construct();

    system("pause");
    return 0;
}

