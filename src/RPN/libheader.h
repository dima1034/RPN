/******************************************************************************
   Copyright 2012 Kevin Burk
   
   This file is part of RPN.
  
   RPN is free software: you can redistribute it and/or modify it under the
   terms of the GNU General Public License as published by the Free Software
   Foundation, either version 3 of the License, or (at your option) any later
   version.
  
   RPN is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
   details.
  
   You should have received a copy of the GNU General Public License along
   with RPN.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/
#ifdef LIBHEADER
	#define RPN_LIBHEADER
#endif

#ifdef RPN_LIBHEADER
/* Hack to keep the installed RPN.h header file (generated by g++ -E)
 * from including the standard system headers.  This makes sure you
 * get your system headers when compiling, and keeps RPN.h several
 * orders of magnitude smaller.
 */
	#define MUNGE(hash, x) hash x
	MUNGE(#include, <cmath>)
	MUNGE(#include, <map>)
	MUNGE(#include, <stdexcept>)
	MUNGE(#include, <string>)
	MUNGE(#include, <vector>)
#else
	#define MUNGE(hash, x)
#endif

MUNGE(#ifndef, RPN_H)
MUNGE(#define, RPN_H)

#ifndef RPN_H
#define RPN_H

#include "core.h"
#include "context.h"
#include "evaluator.h"
#include "exception.h"
#include "expression.h"
#include "nodes/inheritable.h"
#include "parsers/all.h"

MUNGE(#endif, /**/)

#endif

