#ifndef WINDOWINFO_H
#define WINDOWINFO_H

#include <iostream>
#include <string>

namespace Core
{
	struct WindowInfo
	{
		std::string name;
		int width, height;
		int position_x, position_y;
		bool isReshapable;

		WindowInfo()
		{
			name = "Scene2D";
			width = 800; height = 600;
			position_x = 300;
			position_y = 300;
			isReshapable = true;
		}

		WindowInfo(std::string name,
				   int start_position_x, int start_position_y,
				   int width, int height,
				   bool isReshapable)
		{
			this->name = name;
			this->width = width;
			this->height = height;
			this->position_x = start_position_x;
			this->position_y = start_position_y;
			this->isReshapable = isReshapable;
		}

		// copy constructor
		WindowInfo(const WindowInfo& windowInfo)
		{
			name = windowInfo.name;
			position_x = windowInfo.position_x;
			position_y = windowInfo.position_y;

			width = windowInfo.width;
			height = windowInfo.height;
			isReshapable = windowInfo.isReshapable;
		}

		void operator=(const WindowInfo& windowInfo)
		{
			name = windowInfo.name;
			position_x = windowInfo.position_x;
			position_y = windowInfo.position_y;

			width = windowInfo.width;
			height = windowInfo.height;
			isReshapable = windowInfo.isReshapable;
		}
	};
}

#endif