//
// Created by sealbelek on 07.04.2020.
//

#ifndef PROJECT_BALLISTIC_H
#define PROJECT_BALLISTIC_H

#include "../phisicEngine.h"
#include <GL/glut.h>
#include "../app.h"
#include "../timing.h"

/**
 * The main demo class definition.
 */
class BallisticDemo : public Application
{
    enum ShotType
    {
        UNUSED = 0,
        PISTOL,
        ARTILLERY,
        FIREBALL,
        LASER
    };

    /**
     * Holds a single ammunition round record.
     */
    struct AmmoRound
    {
        physicEngine::Particle particle;
        ShotType type;
        unsigned startTime;

        /** Draws the round. */
        void render()
        {
            physicEngine::Vector3 position;
            particle.getPosition(&position);

            glColor3f(0, 0, 0);
            glPushMatrix();
            glTranslatef(position.getX(), position.getY(), position.getZ());
            glutSolidSphere(0.3f, 5, 4);
            glPopMatrix();

            glColor3f(0.75, 0.75, 0.75);
            glPushMatrix();
            glTranslatef(position.getX(), 0, position.getZ());
            glScalef(1.0f, 0.1f, 1.0f);
            glutSolidSphere(0.6f, 5, 4);
            glPopMatrix();
        }
    };

    /**
     * Holds the maximum number of  rounds that can be
     * fired.
     */
    const static unsigned ammoRounds = 16;

    /** Holds the particle data. */
    AmmoRound ammo[ammoRounds];

    /** Holds the current shot type. */
    ShotType currentShotType;

    /** Dispatches a round. */
    void fire();

public:
    /** Creates a new demo object. */
    BallisticDemo();

    /** Returns the window title for the demo. */
    virtual const char* getTitle();

    /** Update the particle positions. */
    virtual void update();

    /** Display the particle positions. */
    virtual void display();

    /** Handle a mouse click. */
    virtual void mouse(int button, int state, int x, int y);

    /** Handle a keypress. */
    virtual void key(unsigned char key);
};

#endif //PROJECT_BALLISTIC_H
