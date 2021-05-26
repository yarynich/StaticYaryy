#pragma once
#include <string>

#ifndef yarynich_export
#define yarynich_api __declspec(dllexport)
#else
#define yarynich_api __declspec(dllimport)
#endif


extern "C" yarynich_api int g_number(int number);
extern "C" yarynich_api void s_name(char* m_name);

//extern "C" -это спецификация связи