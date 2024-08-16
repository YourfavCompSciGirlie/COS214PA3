#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy {
    
    public:
        virtual ~BattleStrategy() {}
        virtual void engage() = 0;  // Pure virtual method
};

#endif // BATTLESTRATEGY_H
