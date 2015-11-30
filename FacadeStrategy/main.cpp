#include "ILetterProcess.h"
#include "ModenPostOffice.h"
#include "LetterProcessImpl.h"

#include<iostream>

using std::string;
using namespace std;

void DoItByPostOffice()
{
    CModenPostOffice modenPostOffice;
    string context = "Hello, It's me, do you know who I am? I'm your old lover. I'd like to ... ...";
    string address = "Happy Road No. 666, Beijing City, China";
    modenPostOffice.SendLetter(context, address);
}

void DoItYourself()
{
    ILetterProcess *pLetterProcess = new CLetterProcessImpl();
    pLetterProcess->WriteContext("Hello, It's me, do you know who I am? I'm your old lover. I'd like to ... ...");
    pLetterProcess->FillEnvelope("Happy Road No. 666, Beijing City, China");
    pLetterProcess->LetterIntoEnvelope();
    pLetterProcess->SendLetter();
    delete pLetterProcess;
}

int main()
{
    //���ڵĵ��÷�ʽ�����ڿͻ���˵ȷʵ�򵥶��ˡ�
    //����Ҫ�����߼��������þ���������ʼ����������ʾ�������������
    DoItByPostOffice();

    //ԭ���ĵ��÷�ʽ��
    DoItYourself();

    _CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);
    _CrtDumpMemoryLeaks();

    return 0;
}

