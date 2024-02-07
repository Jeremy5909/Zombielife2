//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#ifndef ZOMBIELIFE2_LIVING_H
#define ZOMBIELIFE2_LIVING_H


class Living {
private:
    float mHealth;
public:
    float getHealth() const;
    void setHealth(float pTarget);
    void Harm(float pAmount);
};


#endif //ZOMBIELIFE2_LIVING_H
