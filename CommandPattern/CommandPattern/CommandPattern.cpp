// CommandPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Invoker.h"
#include "Receiver.h"
#include "Command.h"

int main()
{
    Receiver* pRec = new Receiver();
    Command* pCommand = new ConcreteCommand(pRec);
    Invoker* pInvoker = new Invoker(pCommand);
    pInvoker->invoke();
    return 0;
}

