//
// PhysicCollideLayer.hh for indie in /home/trouve_b/Desktop/CPP_project/cpp_indie_studio
// 
// Made by Alexis Trouve
// Login   <trouve_b@epitech.net>
// 
// Started on  Thu May 12 16:15:29 2016 Alexis Trouve
// Last update Fri May 13 10:40:04 2016 Alexis Trouve
//

#ifndef PHYSIC_COLLIDE_LAYER_HH_
#define PHYSIC_COLLIDE_LAYER_HH_

#include <tuple>

namespace gauntlet
{
  namespace world
  {

    class	PhysicCollideLayer
    {
    private:
      double	sizeX;
      double	sizeY;
    public:
      PhysicCollideLayer();
      ~PhysicCollideLayer();
      std::pair<double, double>		getSize();
    };
  };
};

#endif
