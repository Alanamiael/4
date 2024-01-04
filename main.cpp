#include "Engineer.h"
#include "iostream"

#include "Event.h"
#include "Group.h"
#include "OfficialWorker.h"
#include "Worker.h"

Group g;

void handleBirthday(Event *event) {
    std::cout << "Happy birthday ";
    event->personnel->print();
}

void handleWedding(Event *event) {
    std::cout << "Happy wedding ";
    event->personnel->print();
}

void handleFuneral(Event *event) {
    std::cout << "Happy funeral ";
    event->personnel->print();
}

void handleAnniversary(Event *event) {
    std::cout << "Happy anniversary ";
    event->personnel->print();
}

void handleOther(Event *event) {
    std::cout << "Happy other ";
    event->personnel->print();
}

Personnel* findByName() {
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;

    return (Personnel*)g.findPersonnel(name.c_str());
}

int main() {
    char name1[] = "Bob";
    char name2[] = "Pixel";
    char name3[] = "Ann";
    char name4[] = "Denys";

    g.addObject(new Worker(name1, 19, 1000, 1));
    g.addObject(new Worker(name2, 20, 1700, 2));
    g.addObject(new OfficialWorker(name3, 25, 1500, 3, 15));
    g.addObject(new Engineer(name4, 30, 3000, 15, 25));

    Event event;
    std::string eventType;

    while (true) {
        std::cout << ">>> ";
        std::cin >> eventType;

        event.personnel = findByName();

             if (eventType == "birthday")    handleBirthday(&event);
        else if (eventType == "wedding")     handleWedding(&event);
        else if (eventType == "funeral")     handleFuneral(&event);
        else if (eventType == "anniversary") handleAnniversary(&event);
        else if (eventType == "other")       handleOther(&event);
        else if (eventType == "exit")        break;
        else                                 std::cout << "Unknown event type\n";
    }
}
