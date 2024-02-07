//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#include "Living.h"

float Living::getHealth() const {
    return mHealth;
}

void Living::setHealth(float pTarget) {
    mHealth = pTarget;
}

void Living::Harm(float pAmount) {
    mHealth -= pAmount;
}

