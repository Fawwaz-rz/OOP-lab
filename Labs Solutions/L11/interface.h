////header
//#pragma once
//#ifndef CLASS1_H
//#include<string>
//#include<iostream>
//using namespace std;
//#define CLASS1_H
//#endif // !CLASS1.H
//class Character
//{
//private:
//    string nameC;
//    int levelC;
//    int healthC;
//public:
//    Character() :nameC("temp"), levelC(0), healthC(0) {}
//    Character(string name, int level, int health)
//        : nameC(name), levelC(level), healthC(health)
//    {}
//
//    string getName() const;
//    int getLevel() const;
//    int getHealth() const;
//    void setHealth(int health);
//
//
//};
//
//class Warrior : public Character
//{
//private:
//    string weaponW;
//    int strengthW;
//public:
//    Warrior() :weaponW("temp"), strengthW(0) {}
//    Warrior(string name, int level, int health, string weapon, int strength)
//        : Character(name, level, health), weaponW(weapon), strengthW(strength)
//    {}
//
//    string getWeapon() const;
//    int getStrength() const;
//    void attack();
//
//};
//
//class Mage : public Character
//{
//private:
//    string spellM;
//    int intelliM;
//public:
//    Mage() :spellM("temp"), intelliM(0) {}
//    Mage(string name, int level, int health, string spell, int intelligence)
//        : Character(name, level, health), spellM(spell), intelliM(intelligence)
//    {}
//
//    string getSpell() const;
//    int getIntelligence() const;
//    void castSpell();
//};