#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

class LegionUnit {

    public:
        virtual ~LegionUnit();

        //Added OWN function
        LegionUnit();

        virtual void move() = 0;    // Command to move the unit on the battlefield.
        virtual void attack() = 0;  // Command to engage in combat.
};

#endif // LEGIONUNIT_H