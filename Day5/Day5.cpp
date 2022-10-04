//Topic: OOP
//Description: Interface

#include <iostream>

using namespace std;

class Flyable{
    public:
    virtual void startFlight() = 0;
    virtual void stopFlight() = 0;
};

class Bird{
    protected:
        string name;

    public:

        Bird(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }


};

class Eagle:public Bird, public Flyable{
    private:
            string masterName;

    public:

            Eagle(string name, string masterName):Bird(name){
               this->masterName = masterName;
            }
            void startFlight(){
                cout << "Eagle " << Bird::getName()
                      << ", started flight in its own way" << endl;
            }
            void stopFlight(){
                cout << "Eagle " << Bird::getName()
                      << ", stopped flight in its own way" << endl;
            }

};

class Owl:public Bird, public Flyable{
    private:
         int nightVisionPower;

    public:

         Owl(string name, int nightVisionPower):Bird(name){
              this->nightVisionPower = nightVisionPower;
         }
         void startFlight(){
                cout << "Owl " << Bird::getName()
                        << ", started flight at low height" << endl;
         }
         void stopFlight(){
                cout << "Owl " << Bird::getName()
                    << ", stopped flight on a tree" << endl;
         }

};

class Airplane:public Flyable{

    private: string make;

    public:
            Airplane(string make){
                this->make = make;
            }
            void startFlight(){
                cout << "Airplane " << make << " started it\'s flight" << endl;
            }
            void stopFlight(){
                cout << "Airplane " << make << " stopped it\'s flight" << endl;
            }

};

class Game{

    private:

            Flyable* flyables[5];

    public:
            Game(){
                flyables[0] = new Eagle("Super Falcon", "John");
                flyables[1] = new Owl("Night Captain", 10);
                flyables[2] = new Eagle("Knight", "Alice");
                flyables[3] = new Airplane("Boeing");
                flyables[4] = new Airplane("Airbus");
            }

            void playGame(){
                for(int i = 0; i < 5; ++i){
                    flyables[i]->startFlight();
                }
                cout << endl;
                cout << "All flyables are flying around the game arena " << endl;
                cout << endl;
                for(int i = 0; i < 5; ++i){
                    flyables[i]->stopFlight();
                }

            }

};

int main()
{
    Game game;
    game.playGame();

    return 0;
}
