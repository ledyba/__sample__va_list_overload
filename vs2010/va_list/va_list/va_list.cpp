// va_list.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <string>
#include <cstdarg>
#include <cstdio>


std::string format(const std::string& format, ...)
{
	printf("FORMAT 1 CALLED\n");
	return ""; /* �T���v���Ȃ̂Ŗ����� */
}
std::string format(const std::string& format, va_list ap)
{
	printf("FORMAT 2 CALLED\n");
	return ""; /* �T���v���Ȃ̂Ŗ����� */
}

int _tmain(int argc, _TCHAR* argv[])
{
	va_list list;
	
	format("format: %s", "Hey!");

	return 0;
}

