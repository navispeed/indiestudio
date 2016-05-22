//
// core.hh for indie in /home/lewis_e/rendu/cpp/cpp_indie_studio
// 
// Made by Esteban Lewis
// Login   <lewis_e@epitech.net>
// 
// Started on  Mon May  9 10:59:47 2016 Esteban Lewis
// Last update Sun May 22 13:36:35 2016 Esteban Lewis
//

#ifndef  CORE_HH_
# define CORE_HH_

# include <thread>
# include <mutex>
# include <unistd.h>
# include "CoreUIObserver.hh"
# include "Menu.hh"
# include "PlayerController.hh"
# include "Stopwatch.hh"
# include "Conf.hh"
# include "ConfMenu.hh"
# include "Position.hh"
# include "graph/OgreUI.hh"
# include "Thread.hpp"
# include "PacketFactory.hh"

namespace			gauntlet
{
  namespace			core
  {
    class			Core
    {
    public:
      Core();
      ~Core();

      void			keyUp(IUIObserver::Key);
      void			keyDown(IUIObserver::Key);
      void			buttonClick(int buttonId, struct t_hitItem & item);
      void			mouseMove(int x, int y);

      void			play();
      void			exit();
      void			load(std::string file);
      void			save(std::string file);
      bool			gameIsRunning();
      IUIObserver::Key		getLastKey() const;

      OgreUI			ogre;
      Conf			conf;
      PlayerController *	pc;
      std::pair<std::string, int> serverAddr;
      network::PacketFactory *	packetf;

    private:
      bool			keepGoing;
      IUIObserver *		observer;
      std::thread *		ogreThread;
      Menu *			menu;
      Stopwatch			sw;
      IUIObserver::Key		lastKey;

      void			loop();
      void			updateWorld();
    };
  };
};

#endif
