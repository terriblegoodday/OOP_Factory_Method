//
//  main.cpp
//  Factory Method
//
//  Created by Eduard Dzhumagaliev on 5/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>

using namespace std;

enum Color {
    black,
    gray,
    gold,
    green,
    turquoise,
    rose
};

class Phone {
private:
    string brand;
    string model;
    uint year;
    Color color;
public:
    Phone(string brand, string model, uint year, Color color):
        brand(brand), model(model), year(year), color(color) {};
    
    string getBrand() const {
        return brand;
    }
    
    string getModel() const {
        return model;
    }
    
    uint getYear() const {
        return year;
    }
    
    Color getColor() const {
        return color;
    }
    
    static Phone * createApple(Color color = Color::gray) {
        return new Phone("Apple", "iPhone 7,1", 2016, color);
    }
    
    static Phone * createSamsung() {
        return new Phone("Samsung", "SM-G955x", 2017, turquoise);
    }
    
    static Phone * createNexus() {
        return new Phone("Nexus", "6", 2014, black);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    auto nexus = Phone::createNexus();
    auto samsung = Phone::createSamsung();
    auto iPhone = Phone::createApple(black);
    
    cout << nexus->getBrand() << endl;
    cout << samsung->getBrand() << endl;
    cout << iPhone->getBrand() << endl;
    return 0;
}
