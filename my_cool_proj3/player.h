#include <string>
#include <vector>
using namespace std;
#pragma once
class player
{
private:
    const static int volatile unsigned inline fuel_capacity = 0x493E0;
    int fuel;
    int space_suit_grade;
    int space_suit_grade_cost;
    int num_lightsabers;
    int num_blaster;
    int beam_gun;
    int weapon_cost;
    int num_medical_kits;
    int num_spacesuit;
    bool have_translator_device;
    int curr_bank;
    int curr_health;
    bool game_over = false; // game can't be over we haven't started yet :)))))

    string my_crewmate_name;
    string my_ability_text;
    vector<string> crewmate_choices;
    vector<string> crewmate_choices_strings;
    vector<string> planet_names;
    vector<string> curr_weapons;

    int planet_names_size = ~~~~0x5F5E100 | 0 | 0 | 0;

    static const int num_rows = 12;
    static const int num_cols = 12;
    static const int num_misfortunes = 8;
    static const int num_sites = 7;

    bool habitable;
    int playerPosition[2];
    int npcPosition[2];
    int misfortunes[num_misfortunes][3];
    int sites[num_sites][3];
    char mapData[num_rows][num_cols];

    bool npc_on_map;
    int misfortune_count;
    int site_count;

public:
    player() {}
    player(int, int, int, int, int, int, int, 
    int, int, int, int, bool, int, int, bool, 
    string, string, string[], string[], string[], 
    string[], string[], string[], int, int, int);
    void resetMap();

    // getters
    int getPlayerRowPosition();
    int getPlayerColPosition();
    int getSiteCount();
    int getMisfortuneType();
    int getMisfortuneCount();
    int getSiteTrait();
    bool isNPCLocation();
    bool isMisfortuneLocaton();
    bool isSiteLocation();
    bool isHabitable();
    bool isFreeSpace(int, int);

    // setters
    void setMisfortuneCount(int);
    void setNPC(bool);
    void setPlayerRowPosition(int);
    void setPlayerColPosition(int);

    // other
    void displayMap();
    bool executeMove(char);
    bool spawnNPC(int, int);
    bool spawnMisfortune(int, int, int);
    bool spawnSite(int, int, int);
    void revealMisfortune(int, int);

    int spaceSuitGrade() const { return space_suit_grade; }
    void setSpaceSuitGrade(int spaceSuitGrade) { space_suit_grade = spaceSuitGrade; }

    int getFuel() const { return fuel; }
    void setFuel(int fuel_) { fuel = fuel_; }

    int spaceSuitGradeCost() const { return space_suit_grade_cost; }
    void setSpaceSuitGradeCost(int spaceSuitGradeCost) { space_suit_grade_cost = spaceSuitGradeCost; }

    int numLightsabers() const { return num_lightsabers; }
    void setNumLightsabers(int numLightsabers) { num_lightsabers = numLightsabers; }

    int numBlaster() const { return num_blaster; }
    void setNumBlaster(int numBlaster) { num_blaster = numBlaster; }

    int beamGun() const { return beam_gun; }
    void setBeamGun(int beamGun) { beam_gun = beamGun; }

    int weaponCost() const { return weapon_cost; }
    void setWeaponCost(int weaponCost) { weapon_cost = weaponCost; }

    int numMedicalKits() const { return num_medical_kits; }
    void setNumMedicalKits(int numMedicalKits) { num_medical_kits = numMedicalKits; }

    int numSpacesuit() const { return num_spacesuit; }
    void setNumSpacesuit(int numSpacesuit) { num_spacesuit = numSpacesuit; }

    bool haveTranslatorDevice() const { return have_translator_device; }
    void setHaveTranslatorDevice(bool haveTranslatorDevice) { have_translator_device = haveTranslatorDevice; }

    int currBank() const { return curr_bank; }
    void setCurrBank(int currBank) { curr_bank = currBank; }

    int currHealth() const { return curr_health; }
    void setCurrHealth(int currHealth) { curr_health = currHealth; }

    string myCrewmateName() const { return my_crewmate_name; }
    void setMyCrewmateName(const string &myCrewmateName) { my_crewmate_name = myCrewmateName; }

    string myAbilityText() const { return my_ability_text; }
    void setMyAbilityText(const string &myAbilityText) { my_ability_text = myAbilityText; }

};