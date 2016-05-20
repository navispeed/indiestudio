//
// Conf.hh for indie in /home/lewis_e/rendu/cpp/cpp_indie_studio
// 
// Made by Esteban Lewis
// Login   <lewis_e@epitech.net>
// 
// Started on  Tue May 10 14:50:56 2016 Esteban Lewis
// Last update Tue May 17 13:52:02 2016 Esteban Lewis
//

#ifndef  CONF_HH_
# define CONF_HH_

# include <map>
# include "IUIObserver.hh"

namespace			gauntlet
{
  namespace			core
  {
    enum			Command
      {
	NONE,
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ENTER,
	ESC,
	ATTACK
      };

    class			Conf
    {
    public:
      Conf();
      ~Conf();

      void			setKey(Command to_change,
				       IUIObserver::Key replace_by);
      Command			getLinkedKey(IUIObserver::Key);
      IUIObserver::Key		getLinkedCommand(Command);

    private:
      std::map<Command, IUIObserver::Key> map;
    };
  };
};

#endif