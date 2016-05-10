//
// core.hh for indie in /home/lewis_e/rendu/cpp/cpp_indie_studio
// 
// Made by Esteban Lewis
// Login   <lewis_e@epitech.net>
// 
// Started on  Mon May  9 10:59:47 2016 Esteban Lewis
// Last update Tue May 10 15:58:34 2016 Esteban Lewis
//

#ifndef  CORE_HH_
# define CORE_HH_

# include <unistd.h>
# include "IUIObserver.hh"
# include "Menu.hh"
# include "PlayerController.hh"
# include "Stopwatch.hh"
# include "Conf.hh"
# include "ConfMenu.hh"

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
      void			mouseMove(int x, int y);

      void			play();
      void			exit();
      void			load(std::string file);
      void			save(std::string file);
      Conf &			getConf();

    private:
      bool			keepGoing;
      IUIObserver		observer;
      //OgreUI			ogre;
      Menu *			menu;
      PlayerController		pc;
      Stopwatch			sw;
      Conf			conf;

      void			loop();
      void			updateWorld();
    };
  };
};

#endif
