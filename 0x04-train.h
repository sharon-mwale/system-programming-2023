#ifndef TRAIN_H
#define TRAIN_H

using namespace std;

class Train
{
public:
    Train();
    void SetName(string nm) { name = nm; }
    void SetSource(string src) { source = src; }
    void SetDestination(string dst) { destination = dst; }
    void SetData(int yr, int m, int d);
    void SetCapacity(unsigned int c) { capacity = c; }
    void Display();

private:
    std::string name;
    std::string source;
    std::string destination;
    tm date;
    unsigned int capacity;
};
#endif;