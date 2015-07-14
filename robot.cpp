#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "robot.h"
#include "point.h"

Robot::Robot(){
   position_exists = false; 
   current_image = IMG_Load("resources/robot.png");
}

void Robot::set_position(int x, int y){
    position.x = x;
    position.y = y;
    position_exists = true;
}

Point Robot::get_position(){
    if(position_exists){
        return position;
    }
    else{
        throw "Position does not exist";
    }
}

Radiation Robot::radiate(){
    Radiation rv = {current_image, get_position()};
    return rv;
}
