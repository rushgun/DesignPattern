// MenmentoPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Memento.h"
#include "Originator.h"

#include <iostream>

using namespace std;

int main()
{
    Originator* o = new Originator();

    //����ǰ״̬
    o->setState("old");
    o->printState();

    //��״̬����
    Memento* m = o->createMemento();

    //�޸�״̬
    o->setState("new");
    o->printState();
    o->restoreToMemento(m);

    //�ָ��޸�ǰ״̬
    o->printState();

    return 0;
}

