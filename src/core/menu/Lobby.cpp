#include "Lobby.hh"
#include "MessageBox.hh"
#include "Core.hh"
#include "CharMenu.hh"
#include "ConnectMenu.hh"

gauntlet::core::Lobby::Lobby(Core & core, int idStart, Menu * parent) :
  Menu(core, idStart, parent)
{
  buttons.push_back(Control(LABEL, "", NULL, PCENTER,
			    idStart + buttons.size(), core.ogre));
  buttons.push_back(Control(BUTTON, "Connect to server", NULL, PCENTER,
  			    idStart + buttons.size(), core.ogre));
  funs.insert(std::pair<int, void (Lobby::*)(struct t_hitItem &)>
  	      (buttons[buttons.size() - 1].getId(), &Lobby::doServer));

  buttons.push_back(Control(LABEL, "", NULL, PCENTER,
			    idStart + buttons.size(), core.ogre));
  buttons.push_back(Control(BUTTON, "Create character", NULL, PCENTER,
  			    idStart + buttons.size(), core.ogre));
  funs.insert(std::pair<int, void (Lobby::*)(struct t_hitItem &)>
  	      (buttons[buttons.size() - 1].getId(), &Lobby::doCharacter));

  buttons.push_back(Control(BUTTON, "- Play -", NULL, PCENTER,
  			    idStart + buttons.size(), core.ogre));
  funs.insert(std::pair<int, void (Lobby::*)(struct t_hitItem &)>
  	      (buttons[buttons.size() - 1].getId(), &Lobby::doPlay));

  submenus.push_back(new MessageBox(core, idStart + MENU_ID_LAYER, this, ""));
  submenus.push_back(new CharMenu(core, idStart + MENU_ID_LAYER, this));
  submenus.push_back(new ConnectMenu(core, idStart + MENU_ID_LAYER, this));
}

gauntlet::core::Lobby::~Lobby()
{ }

void
gauntlet::core::Lobby::draw()
{
  buttons[0].setStr("No server.");
  if (core.pc == NULL)
    buttons[2].setStr("No character.");
  else
    buttons[2].setStr(core.pc->getName());
  drawButtons();
}

void
gauntlet::core::Lobby::undraw()
{
  undrawButtons();
}

void
gauntlet::core::Lobby::doButton(int btnId, struct t_hitItem & item)
{
  (this->*(funs[btnId]))(item);
}

void
gauntlet::core::Lobby::doServer(struct t_hitItem & item)
{
  submenus[2]->setOpen(true);
}

void
gauntlet::core::Lobby::doCharacter(struct t_hitItem & item)
{
  submenus[1]->setOpen(true);
}

void
gauntlet::core::Lobby::doPlay(struct t_hitItem & item)
{
  (void)item;
  if (core.pc == NULL)
    {
      static_cast<MessageBox *>(submenus[0])->setMsg("You must firt create your character.");
      submenus[0]->setOpen(true);
    }
  else
    {
      parent->setOpen(false);
      core.play();
    }
}