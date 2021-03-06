/*
 
This file is part of massiveengine.

massiveengine is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

massiveengine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with massiveengine.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef ENTITY_H
#define ENTITY_H

#include "model.h"
#include "rect.h"

class Entity {
  private:
    Model model;
    Rectangle *hitboxes;
    int size;

    speed_t xaccel;
    speed_t yaccel;
    speed_t zaccel;

    speed_t xrotate;
    speed_t yrotate;
    speed_t zrotate;
  public:
    Entity(Model,Rectangle *,int);
    ~Entity();
    Model getModel();
    Rectangle getHitbox(int);
    int getHitboxCount();    
};

#endif
