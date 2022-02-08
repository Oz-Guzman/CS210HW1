#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return theList.empty();
    }
    const Object& getFront() const
    {
        return theList.front();
    }
    void enqueue(const Object& x)
    {
        theList.push_back(x);
    }
    Object& dequeue()
    {
        Object temp = theList.front();
        theList.pop_front();
        return temp;
    }
private:
    List<Object> theList;
};
