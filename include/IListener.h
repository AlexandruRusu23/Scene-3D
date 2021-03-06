#ifndef ILISTENER_H
#define ILISTENER_H

namespace BasicEngine
{
  namespace Core
  {
    class IListener
    {
    public:
      virtual ~IListener() = 0;

      //keyboard and mouse functions
      virtual void NotifyKeyboardPressed(unsigned char key, int x, int y) = 0;
      virtual void NotifySpecialKeyboardPressed(int key, int x, int y) = 0;
      virtual void NotifyMouseMovement(int x, int y) = 0;

      //drawing functions
      virtual void NotifyBeginFrame() = 0;
      virtual void NotifyDisplayFrame() = 0;
      virtual void NotifyEndFrame() = 0;
      virtual void NotifyReshape(int width, int height, int previous_width, int previous_height) = 0;
    };

    inline IListener::~IListener()
    {

    }
  }
}

#endif
