#ifndef EMPIOYEE_H
#define EMPIOYEE_H
class employee{
    public:
        employee():_name("no name"), _id(++counter){}
        explicit employee(string& name):_name(name), _id(++counter){}
        employee(const employee& other):name(other._name), _id(++counter){}
        employee& operator=(const empolyee& rhe)
        {
            _name = the._name;
            return *this;
        }
    private:
        static int counter;
        int _id;
        string _name;
};
#endif
