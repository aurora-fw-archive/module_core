/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************/

#ifndef AURORAFW_CORE_DEBUG_H
#define AURORAFW_CORE_DEBUG_H

#include <AuroraFW/Global.h>
#include <AuroraFW/STDL/Target/Environment.h>
#include <AuroraFW/STDL/STL/IOStream.h>

namespace AuroraFW {
	namespace Debug {
		extern afwbool_t Status;
		afwvoid_t enableDebug(const afwbool_t& silent = false);
		afwvoid_t disableDebug(const afwbool_t& silent = false);
		inline afwbool_t getDebugStatus()
		{
			return Status;
		}

		template <typename T>
		void __Log(const T& t)
		{
			std::cout << t;
		}
	
		template <typename T, typename... R>
		void __Log(const T& t, const R&... args)
		{
			std::cout << t;
			__Log(args...);
		}

		template <typename... T>
		void Log(const T&... args)
		{
			// TODO: Windows ANSI integration
			//       Needs to be tested on Windows and Apple platforms
			if(Status == true)
			{
				#ifdef AFW_TARGET_ENVIRONMENT_UNIX
					std::cout << "\033[0m\033[1m[\033[1;36mDEBUG\033[0;1m] \033[0m";
				#else
					std::cout << "[DEBUG] ";
				#endif
				__Log(args...);
				std::cout << std::endl;
				return;
			}
		}
	}
}

#endif // AURORAFW_CORE_DEBUG_H
