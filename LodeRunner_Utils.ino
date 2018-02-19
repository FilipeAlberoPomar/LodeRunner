#include "src/utils/Arduboy2Ext.h"
#include <ArduboyTones.h>

uint8_t getNearestX(int8_t margin) {

  return (player.x - level.getXOffset() + margin) / GRID_SIZE;
  
}

uint8_t getNearestY(int8_t margin) {

  return (player.y - level.getYOffset() + margin) / GRID_SIZE;
  
}

boolean inCellX() {

  return ((player.x - level.getXOffset()) % GRID_SIZE == 0);

}

boolean inCellX(uint8_t margin) {

  uint8_t rem = (player.x - level.getXOffset()) % GRID_SIZE;
  return (rem > (GRID_SIZE / 2) ? GRID_SIZE - rem : rem) <= margin;

}

boolean inCellY() {

  return ((player.y - level.getYOffset()) % GRID_SIZE == 0);

}

boolean inCellY(uint8_t margin) {

  uint8_t rem = (player.y - level.getYOffset()) % GRID_SIZE;

  return ((rem > (GRID_SIZE / 2) ? GRID_SIZE - rem : rem) <= margin);

}


PlayerStance getNextStance(PlayerStance stance) {

    switch (stance) {

      case PlayerStance::Swinging_Left4:        return PlayerStance::Swinging_Left1;
      case PlayerStance::Swinging_Left3:        return PlayerStance::Swinging_Left4;
      case PlayerStance::Swinging_Left2:        return PlayerStance::Swinging_Left3;
      case PlayerStance::Swinging_Left1:        return PlayerStance::Swinging_Left2;
      case PlayerStance::Climbing_Down2:        return PlayerStance::Climbing_Down1;
      case PlayerStance::Climbing_Down1:        return PlayerStance::Climbing_Down2;
      case PlayerStance::Running_Left4:         return PlayerStance::Running_Left1;
      case PlayerStance::Running_Left3:         return PlayerStance::Running_Left4;
      case PlayerStance::Running_Left2:         return PlayerStance::Running_Left3;
      case PlayerStance::Running_Left1:         return PlayerStance::Running_Left2;
      case PlayerStance::Running_Right1:        return PlayerStance::Running_Right2;
      case PlayerStance::Running_Right2:        return PlayerStance::Running_Right3;
      case PlayerStance::Running_Right3:        return PlayerStance::Running_Right4;
      case PlayerStance::Running_Right4:        return PlayerStance::Running_Right1;
      case PlayerStance::Climbing_Up1:          return PlayerStance::Climbing_Up2;
      case PlayerStance::Climbing_Up2:          return PlayerStance::Climbing_Up1;
      case PlayerStance::Swinging_Right1:       return PlayerStance::Swinging_Right2;
      case PlayerStance::Swinging_Right2:       return PlayerStance::Swinging_Right3;
      case PlayerStance::Swinging_Right3:       return PlayerStance::Swinging_Right4;
      case PlayerStance::Swinging_Right4:       return PlayerStance::Swinging_Right1;
      default:                                  return stance;

    }

}