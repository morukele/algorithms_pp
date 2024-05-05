//
// Created by Oghenemarho Orukele on 05/05/2024.
//

#ifndef ALGORITHM_CHANGE_H
#define ALGORITHM_CHANGE_H

struct Change {
public:
    int coin2{0};
    int bill5{0};
    int bill10{0};
};
bool createChange(Change &c, long s);

#endif //ALGORITHM_CHANGE_H
