#pragma once

namespace Bootil
{
	typedef std::string BString;
	typedef std::wstring WString;
}

#define BOOTIL_FOREACH( varname, arrayname, arraytype ) for ( arraytype::iterator varname = arrayname.begin(); varname != arrayname.end(); ++varname )

#define BOOTIL_FOREACH_CONST( varname, arrayname, arraytype ) for ( arraytype::const_iterator varname = arrayname.begin(); varname != arrayname.end(); ++varname )

#define FOR_INT(var, lower, upper, step) for (int var = lower; var <= upper; var += step)
#define FOR_FLOAT(var, lower, upper, step) for (float var = lower; var <= upper; var += step)