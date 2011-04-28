/*
 *  Plant.h
 *  Game
 *
 *  Created by David Reed, Matt Oldfield, Jeremy Sampson, Andrew Daugherty
 *  and Alex Martishius
 *  Copyright 2011. All rights reserved.
 *
 */


#ifndef __PLANT_H__
#define __PLANT_H__

//---------------------------------------------------------

#include "Movable.h"

//---------------------------------------------------------

class Plant: public Movable {
private:
    GLuint texture_[2];
    int texturePos;
    void sprite();
public:
	// openGL draw method
    virtual void draw(bool update);
	
    // constructor
    Plant();
    // destructor
    ~Plant();
    
    // methods

    // object type
    int objectType() { return PLANT; }
    // method to shoot fireball from plant
    void shootFireball();
    
};

//---------------------------------------------------------

#endif // _PLANT_H
