#pragma once

#include <Bootil\Bootil.h>
using namespace Bootil;

#ifdef _DEBUG
#pragma comment(lib, "bootil_static_debug.lib")
#else
#pragma comment(lib, "bootil_static.lib")
#endif // _DEBUG