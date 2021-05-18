#include <iostream>

class City
{
public:
    class builder;
    enum center_t { KEEP, PALACE, CITADEL };
    City(
        size_t number_of_buildings,
        size_t number_of_towers,
        size_t guard_strength,
        center_t center,
        bool with_forge,
        bool with_granar,
        bool has_fresh_wate,
        bool is_coasta,
        bool has_fores
        )

        : number_of_buildings{ number_of_buildings },
        number_of_towers{ number_of_towers },
        guard_strength{ guard_strength },
        center{ center },
        with_forge{ with_forge },
        with_granar{ with_granar },
        has_fresh_wate{ has_fresh_wate },
        is_coasta{ is_coasta },
        has_fores{ has_fores }

    {} // - Не понимаю, за что отвечают эти скобки ??? 

    size_t number_of_buildings;
    size_t number_of_towers;
    size_t guard_strength;
    center_t center;
    bool with_forge;
    bool with_granar;
    bool has_fresh_wate;
    bool is_coasta;
    bool has_fores;
};

class City::builder
{
public:
    builder& set_number_of_buildings(size_t value) { number_of_buildings = value; return *this; };
    builder& set_number_of_towers(size_t value) { number_of_towers = value; return *this; };
    builder& set_guard_strength(size_t value) { guard_strength = value; return *this; };
    builder& set_center(center_t value) { center = value; return *this; };
    builder& set_with_forge(bool value) { with_forge = value; return *this; };
    builder& set_with_granar(bool value) { with_granar = value; return *this; };
    builder& set_has_fresh_wate(bool value) { has_fresh_wate = value; return *this; };
    builder& set_is_coasta(bool value) { is_coasta = value; return *this; };
    builder& set_has_fores(bool value) { has_fores = value; return *this; };

    City build() const
    {
        return City{ 
            number_of_buildings,
            number_of_towers,
            guard_strength,
            center,
            with_forge,
            with_granar,
            has_fresh_wate,
            is_coasta,
            has_fores
        };
    }
private:
    size_t number_of_buildings;
    size_t number_of_towers;
    size_t guard_strength;
    center_t center = KEEP;
    bool with_forge = false;
    bool with_granar = false;
    bool has_fresh_wate = false;
    bool is_coasta = false;
    bool has_fores = false;

};
int main()
{
    City Capital = City::builder{}
        .set_number_of_towers(2)
        .set_guard_strength(1)
        .set_center(City::KEEP)
        .build();

    return 0;
}