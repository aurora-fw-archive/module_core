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

#ifndef AURORAFW_AURORA_H
#define AURORAFW_AURORA_H

#include <AuroraFW/Global.h>

// Core
#include <AuroraFW/Core/Application.h>
#include <AuroraFW/Core/Debug.h>

// Standard Library

// CoreLib
#include <AuroraFW/CoreLib/String.h>
#include <AuroraFW/CoreLib/CircularShift.h>
#include <AuroraFW/CoreLib/Target.h>
#include <AuroraFW/CoreLib/Type.h>
#include <AuroraFW/CoreLib/Endian.h>

#ifndef AFW__PHC

	// Audio
	#include <AuroraFW/Audio/Audio.h>
	#include <AuroraFW/Audio/AudioBackend.h>
	#include <AuroraFW/Audio/AudioUtils.h>

	// Crypto
	#include <AuroraFW/Crypto/AES.h>

	// GUI
	#include <AuroraFW/GUI/Window.h>
	#include <AuroraFW/GUI/Label.h>
	#include <AuroraFW/GUI/Button.h>
	#include <AuroraFW/GUI/Layout.h>
	#include <AuroraFW/GUI/Application.h>

	// Shell
	#include <AuroraFW/CLI/Log.h>
	#include <AuroraFW/CLI/Color.h>
	#include <AuroraFW/CLI/Output.h>
	#include <AuroraFW/CLI/Input.h>

	// Information
	#include <AuroraFW/Info/RAM.h>
	#include <AuroraFW/Info/OS.h>

	// I/O
	#include <AuroraFW/IO/File.h>
	#include <AuroraFW/IO/Timer.h>

	//GEngine
	#include <AuroraFW/GEngine/Application.h>
	#include <AuroraFW/GEngine/Window.h>
	#include <AuroraFW/GEngine/API.h>
	#include <AuroraFW/GEngine/Input.h>
	#include <AuroraFW/GEngine/AssetManager.h>
	#include <AuroraFW/GEngine/AssetType.h>
	#include <AuroraFW/GEngine/Color.h>

	//OpenGL
	#include <AuroraFW/GEngine/GL/Global.h>
	#include <AuroraFW/GEngine/GL/OpenGL.h>
	#include <AuroraFW/GEngine/GL/GL.h>
	#include <AuroraFW/GEngine/GL/Shader.h>
	#include <AuroraFW/GEngine/GL/Program.h>
	#include <AuroraFW/GEngine/GL/Buffer.h>
	#include <AuroraFW/GEngine/GL/VertexArray.h>

	//Math
	#include <AuroraFW/Math/Vector2D.h>
	#include <AuroraFW/Math/Vector3D.h>
	#include <AuroraFW/Math/Vector4D.h>
	#include <AuroraFW/Math/Matrix4x4.h>
	#include <AuroraFW/Math/Algorithm.h>
	#include <AuroraFW/Math/Utils.h>

	//Image
	#include <AuroraFW/Image/Image.h>
#endif

#endif // AURORAFW_AURORA_H
