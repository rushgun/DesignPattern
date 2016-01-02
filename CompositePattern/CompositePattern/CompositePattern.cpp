// CompositePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Leaf.h"
#include "Composite.h"

int main()
{
    Leaf* pLeaf = new Leaf();
    pLeaf->operation();

    Composite* pComposite = new Composite();
    pComposite->add(pLeaf);
    pComposite->operation();

    Component* pComponet = pComposite->get(0);
    pComponet->operation();

    return 0;
}

