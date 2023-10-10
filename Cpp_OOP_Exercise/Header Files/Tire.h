#pragma once
class Tire
{
public:
    Tire(float s)
    {
        this->size = s;
    }
    ~Tire()
    {
    }
    float getSize()
    {
        return this->size;
    }
private:
    float size;
};
