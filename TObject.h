#pragma once
class TObject {
public:
    virtual ~TObject() = default;

    virtual void print() = 0;
};
