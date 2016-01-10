// ObserverPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Subject.h"
#include "Observer.h"

#include <iostream>

int main()
{
    ConcreteSubject* sub = new ConcreteSubject();

    Observer* o1 = new ConcreteObserverA(sub);
    Observer* o2 = new ConcreteObserverB(sub);

    sub->setState("old");
    sub->notify();

    sub->setState("new");
    sub->notify();

    return 0;
}

