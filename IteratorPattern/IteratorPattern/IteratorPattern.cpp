// IteratorPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Aggregate.h"
#include "Iterator.h"
#include <iostream>

int main()
{
    Aggregate* pAgg = new ConctrteAggregate();
    Iterator* pIter = new ConcreteIterator(pAgg);

    for (; !pIter->isDone(); pIter->next())
    {
        std::cout << pIter->currentItem() << std::endl;
    }

    return 0;
}

