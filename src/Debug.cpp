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

#include <AuroraFW/CLI/Log.h>
#include <AuroraFW/Core/Debug.h>

namespace AuroraFW {
	namespace Debug {
		ArBool_t Status = false;
		ArBool_t isVerbose = false;
		ArVoid_t enableDebug(const ArBool_t& silent)
		{
			if(Status)
			{
				if(!silent)
					CLI::Log(CLI::Debug, "debug is already enabled");
			}
			else
			{
				Status = true;
				if(!silent)
				{
					CLI::Log(CLI::Debug, "┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─");
					CLI::Log(CLI::Debug, "├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐");
					CLI::Log(CLI::Debug, "┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴");
					CLI::Log(CLI::Debug, "debug is enabled");
				}
			}
		}
		ArVoid_t disableDebug(const ArBool_t& silent)
		{
			if(!Status)
			{
				if(!silent) CLI::Log(CLI::Debug, "debug is already disabled");
			}
			else
			{
				Status = false;
				if(!silent) CLI::Log(CLI::Debug, "debug is disabled");
			}
		}
		ArBool_t getDebugStatus()
		{
			return Status;
		}
	}
}
