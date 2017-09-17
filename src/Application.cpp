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

#include <iostream>
#include <string>
#include <AuroraFW/Core/Application.h>
#include <AuroraFW/CLI/Log.h>
#include <AuroraFW/Core/Debug.h>

namespace AuroraFW {
    Application::Application(void (*mainFunction)(), int argc, char *argv[])
    {
        if(argc == 2)
        {
            if(std::string(argv[1]) == "--debug")
                Debug::enableDebug();
            else if(std::string(argv[1]) == "--verbose")
            {
                Debug::enableDebug(true);
                Debug::isVerbose = true;
            }
            else
                Debug::disableDebug(true);
        }
        CLI::Log(CLI::Debug, "creating new application");
        CLI::Log(CLI::Debug, "application is created.");
        (*mainFunction)();
    }
    Application::~Application()
    {
        CLI::Log(CLI::Debug, "application is destroyed.");
    }
    void Application::ExitSuccess()
    {
        CLI::Log(CLI::Debug, "application return success code: ", EXIT_SUCCESS);
        exit(EXIT_SUCCESS);
    }
    void Application::ExitFail()
    {
        CLI::Log(CLI::Debug, "application return error code: ", EXIT_FAILURE);
        exit(EXIT_FAILURE);
    }
}
