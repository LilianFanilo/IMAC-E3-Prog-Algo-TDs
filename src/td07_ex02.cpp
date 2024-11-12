#include <iostream>
#include <cstdlib>
#include <array>

struct Pokemon
{
    std::string name;
    int hp;
    int attack;
    int speed;

    int Attack(Pokemon pokemon);
    bool KO(Pokemon pokemon);
};

int Pokemon::Attack(Pokemon pokemon)
{
    pokemon.hp -= this->attack;
    std::cout << this->name << " attaque, il reste "<< pokemon.hp <<" PV a "<< pokemon.name << std::endl;
    if (pokemon.hp < 0)
    {
        pokemon.hp = 0;
    }
    
    return pokemon.hp;
};

bool Pokemon::KO(Pokemon pokemon)
{
    if(this->hp == 0)
    {
        std::cout << this->name << " est KO, il ne peut pas attaquer." << std::endl;
        std::cout << pokemon.name << " gagne !" << std::endl;

        return true;
    }
    else
    {
        return false;
    }
};

void pokemonFight(Pokemon pokemon1, Pokemon pokemon2)
{
    int counter {};

    while (pokemon1.hp != 0 || pokemon2.hp != 0)
    {
        counter++;
        std::cout << "Tour " << counter << ":" << std::endl;

        if (pokemon1.speed >= pokemon2.speed)
        {
            pokemon2.hp = pokemon1.Attack(pokemon2);

            if (pokemon2.KO(pokemon1) == true)
            {
                break;
            }

            pokemon1.hp = pokemon2.Attack(pokemon1);

            if (pokemon1.KO(pokemon2) == true)
            {
                break;
            }

        }
        else if (pokemon1.speed <= pokemon2.speed)
        {

            pokemon1.hp = pokemon2.Attack(pokemon1);

            if (pokemon1.KO(pokemon2) == true)
            {
                break;
            }

            pokemon2.hp = pokemon1.Attack(pokemon2);

            if (pokemon2.KO(pokemon1) == true)
            {
                break;
            }

        }
        else if (pokemon1.speed == pokemon2.speed)
        {
            int randomNum = rand() % 101;
            if (randomNum % 2 == 0)
            {
                pokemon1.hp = pokemon2.Attack(pokemon1);

                if (pokemon1.KO(pokemon2) == true)
                {
                    break;
                }

                pokemon2.hp = pokemon1.Attack(pokemon2);

                if (pokemon2.KO(pokemon1) == true)
                {
                    break;
                }
            } 
            else
            {
                pokemon2.hp = pokemon1.Attack(pokemon2);

                if (pokemon2.KO(pokemon1) == true)
                {
                    break;
                }

                pokemon1.hp = pokemon2.Attack(pokemon1);

                if (pokemon1.KO(pokemon2) == true)
                {
                    break;
                }
            }
            
        }
        
        
    }
    
};

struct Trainer 
{
    std::string name;
    std::array<Pokemon,3> team {};
}

void trainerFight(Trainer trainer1, Trainer trainer2)
{
    for (Pokemon pokemon : trainer1)
    {
        
    }
    
}

int main() {
    Pokemon Trainer1_pokemon1 {"Riolu", 50, 10, 3};
    Pokemon Trainer1_pokemon2 {"Salameche", 50, 10, 3};
    Pokemon Trainer1_pokemon3 {"Vipelierre", 50, 10, 3};

    Pokemon Trainer2_pokemon1 {"Carapuce", 30, 20, 10};
    Pokemon Trainer2_pokemon2 {"Machop", 30, 20, 10};
    Pokemon Trainer2_pokemon3 {"Pikachu", 30, 20, 10};

    Trainer Trainer1 { "Lilian", {
        Pokemon Trainer1_pokemon1 {"Riolu", 50, 10, 3},
        Pokemon Trainer1_pokemon2 {"Salameche", 50, 10, 3},
        Pokemon Trainer1_pokemon3 {"Vipelierre", 50, 10, 3}
    }};

    Trainer Trainer2 {"Paul",{
        Pokemon Trainer2_pokemon1 {"Carapuce", 30, 20, 10};
        Pokemon Trainer2_pokemon2 {"Machop", 30, 20, 10};
        Pokemon Trainer2_pokemon3 {"Pikachu", 30, 20, 10};
    }}
    
};