// va_list.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <string>
#include <cstdarg>
#include <cstdio>


std::string format(const std::string& format, ...)
{
	printf("FORMAT 1 CALLED\n");
	return ""; /* サンプルなので未実装 */
}
std::string format(const std::string& format, va_list ap)
{
	printf("FORMAT 2 CALLED\n");
	return ""; /* サンプルなので未実装 */
}

int _tmain(int argc, _TCHAR* argv[])
{
	va_list list;
	
	format("format: %s", "Hey!");

	return 0;
}

