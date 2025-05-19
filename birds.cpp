#include <iostream>
#include <memory>
using namespace std;

// Abstract FlyBehavior base class
class FlyBehavior {
public:
    virtual ~FlyBehavior() = default;
    virtual void Fly() = 0; // Pure virtual
};

// Concrete FlyBehavior
class Flapping : public FlyBehavior {
public:
    void Fly() override {
        cout << "This bird flaps its wings and flies." << endl;
    }
};

// Base Bird class
class Bird {
protected:
    uint64_t unique_code = 0;
    std::unique_ptr<FlyBehavior> flyBehavior;

public:
    virtual ~Bird() = default;

    void setFlyBehavior(std::unique_ptr<FlyBehavior> behavior) {
        flyBehavior = std::move(behavior);
    }

    virtual void Song() {
        cout << "No Song Defined" << endl;
    }

    virtual void Flies() {
        if (flyBehavior) flyBehavior->Fly();
        else cout << "No Flight Behavior Set" << endl;
    }

    virtual void GetName() {
        cout << "Generic Bird" << endl;
    }
};

// Derived Finch class
class Finch : public Bird {
public:
    Finch() {
        unique_code = 0xFF00FF00;
        setFlyBehavior(make_unique<Flapping>());
    }

    void Song() override {
        cout << "Finch sings sweetly." << endl;
    }

    void GetName() override {
        cout << "Finch" << endl;
    }
};

int main() {
    unique_ptr<Bird> my_finch = make_unique<Finch>();
    my_finch->GetName();
    my_finch->Flies();
    my_finch->Song();
    cout << "done." << endl;
    return 0;
}
